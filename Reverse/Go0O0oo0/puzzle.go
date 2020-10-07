package main

import (
	"encoding/base64"
	"fmt"
	"strings"
	"strconv"
	"bufio"
	"os"
)
// moectf{Go0OoO00oo_1s-A_B3autifuL_LanGuAg3}
// len = 42
func tool(input string) string {

	var result []string
	for i := range input[:len(input)] {
		j := int(input[i])
		if (j >= 33) && (j <= 126) {
			result = append(result, string(rune(33+((j+14)%94))))
		} else {
			result = append(result, string(input[i]))
		}

	}
	return strings.Join(result, "")
}

func main() {
    buf := make(chan string)
    flg := make(chan string)
    go producer(buf)
	go consumer(buf, flg)
	k := make(chan string)
	m := make(chan string)
	go doEnc1(flg, k)
	go doEnc2(k, m)
	<- m
	//fmt.Println(x)
}

func doEnc1(c, k chan string) {
	ci := <- c
	//fmt.Println("[doEnc1] ci: "+ci)
	v := []byte(ci)
	o1 := base64.StdEncoding.EncodeToString(v)
	//fmt.Println("[doEnc1] o1: "+o1)
	k <- o1
	//fmt.Println("[doEnc1] o1 emited.")
}

func doEnc2(k, c chan string) {
	s := <- k
	//fmt.Println("[doEnc2] s: "+s)
	o2 := tool(s)
	//fmt.Println("[doEnc2] o2: "+o2)
	var o3 string
	for index, runeValue := range o2 {
		o3 += strconv.Itoa(int(runeValue) ^ index) + " "
	}
	c <- o3
	//fmt.Println("[doEnc2] o3: "+o3)
	glg := "51 41 106 62 46 103 37 57 62 86 63 76 112 121 102 72 53 90 98 91 39 116 126 32 100 48 102 94 62 58 118 109 92 64 87 67 17 83 27 25 29 15 99 28 9 91 91 105 19 83 21 66 31 126 75 95 "
	if (o3 != glg) {
		fmt.Println("Ruaaaa~Wrong!")
	} else {
		fmt.Println("Right!!!")
	}
}

func producer(c chan string) {
    defer close(c) // 关闭channel
	reader := bufio.NewReader(os.Stdin)
    for i := 0; i < 42; i++ {
		ch, _, _ := reader.ReadRune()
		c <- string(ch) // 阻塞，直到数据被消费者取走后，才能发送下一条数据
    }
}

func consumer(c, f chan string) {
	var out string
    for{
        if v, ok := <- c; ok {
			out += v // 阻塞，直到生产者放入数据后继续读取数据
			if v == "}" {
				break
			}
        } else {
            break
        }
    }
    f <- out //发送数据，通知main函数已接受完成
}