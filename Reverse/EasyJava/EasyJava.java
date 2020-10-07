import java.io.*;

public class EasyJava {
  public static void main(String[] args) {
    System.out.println("MoeCTF 2020 EasyJava --by Reverier");
    System.out.println("Input your flag and I will check it:");
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    String str = null;
    int flag[] = { 43, 23, 23, 62, 110, 66, 94, 99, 126, 68, 43, 62, 76, 110, 22, 5, 15, 111, 86, 75, 78, 83, 86, 0, 85,
        86 };
    try {
      str = br.readLine();
    } catch (Exception e) {
      System.out.println("ERROR: Undefined Exception.");
    }
    if (str.isEmpty()) {
      System.out.println("Nothing received.");
    } else if (str.length() != 35) {
      System.out.println("Rua~~~Wrong!");
      return;
    } else {
      String head = str.substring(0, 7);
      if (!head.equals("moectf{")) {
        System.out.println("Rua~~~Wrong!");
        return;
      }
      String m = str.substring(7, str.length() - 1);
      for (int i = 0; i < m.length() - 1; i++) {
        int a = m.charAt(i);
        int b = m.charAt(i + 1);
        int c = a ^ b;
        if (c != flag[i]) {
          System.out.println("Rua~~~Wrong!");
          return;
        }
      }
      System.out.println("Congratulations!");
    }
  }
}
