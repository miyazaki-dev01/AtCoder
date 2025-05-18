## 問題url
https://atcoder.jp/contests/abc318/tasks/abc318_c

## 解説url
解説：https://atcoder.jp/contests/abc318/editorial/7074 \
動画：https://www.youtube.com/watch?v=2NplR-zHuRw&t=1719s

## ステータス
🟢

## タイム
21:46

## タグ
累積和、sort()

## 解法
-  パスの購入枚数を固定して考える
    - 周遊パスをk枚購入すると、k×D日分の交通費がカバーされる。残りのN−k×D日分は通常料金を支払う必要がある。
- 通常料金が高い日を優先してパスを使う

1. 交通費のリストを照準にソートする
1. 累積和を用いて、任意の日数分の通常料金の合計を計算しておく。
1. 各kについて、合計費用を計算し、最小値を更新していく。

## 解答コード
```
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n, d, p;
  cin >> n >> d >> p;
  vector<int> f(n);
  rep(i,n) cin >> f[i];
  sort(f.begin(), f.end());

  vector<ll> s(n+1);
  rep(i,n) s[i+1] = s[i]+f[i];

  ll ans = 1e18;
  rep(i,1e9) {
    int r = max(0, n-i*d);
    ll now = s[r] + (ll)p*i;
    ans = min(ans, now);
    if (r == 0) break;
  }
  cout << ans << endl;
  return 0;
}
```