## 問題url
https://atcoder.jp/contests/abc319/tasks/abc319_b

## 解説url
解説：https://atcoder.jp/contests/abc319/editorial/7099 \
動画：https://www.youtube.com/watch?v=26jzAnxw-S4&t=1151s

## ステータス
🟢

## タイム
15:23

## タグ
int→charのキャスト

## 解法
- 問題文通りに実装していく。

## 解答コード
```
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s(n+1, '-');

  for (int j = 9; j >= 1; j--) {
    if (n%j != 0) continue;
    for (int i = 0; i <= n; i += n/j) {
      s[i] = '0'+j;
    }
  }

  cout << s << endl;
  return 0;
}
```