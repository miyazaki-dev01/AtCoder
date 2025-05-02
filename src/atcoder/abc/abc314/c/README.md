## 問題url
https://atcoder.jp/contests/abc314/tasks/abc314_c

## 解説url
解説：https://atcoder.jp/contests/abc314/editorial/6950\
動画：https://www.youtube.com/live/4izGr03w6r0?t=1202s

## ステータス
🟢

## タグ
%、シフト

## 解法
- 各色の添え字のリストをあらかじめ作成し、それらを各色ごとに順序を右に1つ巡回シフトしていく。

## 解答コード
```
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  string s;
  cin >> s;
  vector<int> c(n);
  rep(i,n) cin >> c[i];
  vector<vector<int>> ps(m);
  rep(i,n) ps[c[i]-1].push_back(i);

  string ans = s;
  rep(i,m) {
    int l = ps[i].size();
    rep(j,l) {
      ans[ps[i][(j+1)%l]] = s[ps[i][j]];
    }
  }
  cout << ans << endl;
  return 0;
}
```