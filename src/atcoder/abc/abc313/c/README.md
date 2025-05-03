## 問題url
https://atcoder.jp/contests/abc313/tasks/abc313_c

## 解説url
解説：https://atcoder.jp/contests/abc313/editorial/6901 \
動画：https://www.youtube.com/live/VluAlzOH83I?t=3006&si=7UQhCqkyKFe9wQPs

## ステータス
❌

## タグ
sort()、不変量

## 解法
- "何回でも操作できる"系の問題は「不変量」に注目する → 今回は「和」が変わらない。
1. 操作後の配列をBとすると、Bはxとx+1からなる配列である。
1. ここで入力される配列Aの総和をSとすると、`x = S / n`であり、+1の個数は`S % x`である。
1. 配列AとBをそれぞれソートしたものにおいて、同じインデックス同士の差の絶対値の総和を2で割ったものが答えとなる。

## 解答コード
```
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i,n) cin >> a[i];
  ll s = 0;
  rep(i,n) s += a[i];
  ll x = s/n, r = s%n;
  vector<ll> b(n, x);
  rep(i,r) b[i]++;

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  ll ans = 0;
  rep(i,n) ans += abs(a[i]-b[i]);
  cout << ans/2 << endl;
  return 0;
}
```