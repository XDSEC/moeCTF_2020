#include <iostream>
#include <queue>
using namespace std;

int lengthOfLongestSubstring(string s) {
    queue<char> q;

    int flag[150], max = 0;
    for (int i = 0; i < 150; i++) flag[i] = 0;

    for (int i = 0; i < s.length(); i++) {
        if (flag[s[i]] == 0) {
            q.push(s[i]);
            flag[s[i]] = 1;
        } else {
            max = max > q.size() ? max : q.size();
            while (!q.empty()) {
                if (q.front() == s[i]) {
                    q.pop();
                    break;
                }
                flag[q.front()] = 0;
                q.pop();
            }

            q.push(s[i]);
        }
    }
    max = max > q.size() ? max : q.size();

    return max;
}

int main() {
    string s;
    getline(cin, s);
    cout << lengthOfLongestSubstring(s);
}