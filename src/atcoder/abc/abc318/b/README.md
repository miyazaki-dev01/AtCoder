## 問題url
https://atcoder.jp/contests/abc318/tasks/abc318_b

## 解説url
解説：https://atcoder.jp/contests/abc318/editorial/7072 \
動画：https://www.youtube.com/watch?v=2NplR-zHuRw&t=947s

## ステータス
🟢

## タイム
9:14

## タグ


## 解法
- 問題文を以下のように読み替える
- 「100×100の白く塗られているマスについて、与えられるシートの部分のみ黒く塗る」
- 制約的にマスの最大値は100×100なため、愚直に実装しても10^6程度であるため十分間に合う。

## 解答コード
```
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  int m = 100;
  vector<vector<int>> s(m, vector<int>(m));
  rep(ni,n) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for (int i = a; i < b; i++) {
      for (int j = c; j < d; j++) {
        s[i][j]++;
      }
    }
  }

  int ans = 0;
  rep(i,m)rep(j,m) if (s[i][j] >= 1) ans++;
  cout << ans << endl;
  return 0;
}
```