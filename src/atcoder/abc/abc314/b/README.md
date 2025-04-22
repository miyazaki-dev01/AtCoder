## 問題url
https://atcoder.jp/contests/abc314/tasks/abc314_b

## 解説url
解説： https://atcoder.jp/contests/abc314/editorial/6949\
動画：https://www.youtube.com/live/4izGr03w6r0?t=515s

## ステータス
🟢

## タグ
二次元配列、min()

## 解法
- 問題を細分化し、ステップごとに考える
1. 人iが当たったかを判定する。（AiにXが含まれるか）
1. 当たった人の中で、Ciの最小値Cminを求める。
1. 当たったかつCiがCminの人を抽出する。

## 解答コード
```
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> c(n);
  vector<vector<int>> a(n);
  rep(i,n) {
    cin >> c[i];
    a[i] = vector<int>(c[i]);
    rep(j,c[i]) cin >> a[i][j];
  }
  int x;
  cin >> x;

  vector<bool> p(n);
  rep(i,n) {
    p[i] = false;
    rep(j,c[i]) if (a[i][j] == x) p[i] = true;
  }

  int cmin = 100;
  rep(i,n) {
    if (p[i]) cmin = min(cmin, c[i]);
  }

  vector<int> ans;
  rep(i,n) {
    if (p[i] && c[i] == cmin) ans.push_back(i+1);
  }

  cout << ans.size() << endl;
  for (int i : ans) cout << i << ' ';
  cout << endl;
  return 0;
}
```