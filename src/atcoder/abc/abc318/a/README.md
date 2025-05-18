## 問題url
https://atcoder.jp/contests/abc318/tasks/abc318_a

## 解説url
解説：https://atcoder.jp/contests/abc318/editorial/7064 \
動画：https://www.youtube.com/watch?v=2NplR-zHuRw&t=316s

## ステータス
🟢

## タイム
3:30

## タグ
while()

## 解法
- 問題文通りにシミュレーションして、満月を見られる日数を数えていく。

## 解答コード
```
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m, p;
  cin >> n >> m >> p;
  int i = m;
  int ans = 0;
  while (i <= n) {
    ans++;
    i += p;
  }
  cout << ans << endl;
  return 0;
}
```