## 問題url
https://atcoder.jp/contests/abc314/tasks/abc314_a

## 解説url
解説：https://atcoder.jp/contests/abc314/editorial/6935 \
動画：https://www.youtube.com/live/4izGr03w6r0?t=202s

## ステータス
🟢

## タグ
substr()

## 解法
- 円周率を文字列として扱い、小数第n位までの部分文字列を出力する。

## 解答コード
```
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
  int n;
  cin >> n;
  string ans = s.substr(0,n+2);
  cout << ans << endl;
  return 0;
}
```