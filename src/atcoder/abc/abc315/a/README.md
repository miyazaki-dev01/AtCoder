## 問題url
https://atcoder.jp/contests/abc315/tasks/abc315_a

## 解説url
解説：https://atcoder.jp/contests/abc315/editorial/6987\
動画：https://www.youtube.com/watch?v=fDJpXN2R75A&t=237s

## ステータス
🟢

## タグ
特定の文字を削除

## 解法
- 問題文通りに、文字列から指定された文字を取り除いていく。
- または、空文字列に入力Sの順序を保って、指定された文字以外を追加していく。

## 解答コード
```
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string ans;
  for (char c : s) {
    if (c == 'a') continue;
    if (c == 'e') continue;
    if (c == 'i') continue;
    if (c == 'o') continue;
    if (c == 'u') continue;
    ans += c;
  }
  cout << ans << endl;
  return 0;
}
```