## 問題url
https://atcoder.jp/contests/abc315/tasks/abc315_c

## 解説url
解説：https://atcoder.jp/contests/abc315/editorial/6992 \
動画：https://www.youtube.com/watch?v=fDJpXN2R75A&t=798s

## ステータス
🟢

## タグ
場合分け、pair<>、sort()

## 解法
- 場合分けをして考える

1. 同じ味のアイスを2つ選んで食べる
    - 味を固定し、その味のアイスのうち最も美味しさが大きい2つを食べる場合のみ考えればよい。
1. 異なる味のアイスを2つ選んで食べる
    - まず、どの味のアイスについても、最も美味しさが大きいもの以外は食べないとしてよい。その上で、残りのアイスのうち最も美味しさが大きい2つを食べる場合のみ考えればよい。

## 解答コード
```
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<vector<int>> a(n);
  rep(i,n) {
    int f, s;
    cin >> f >> s;
    a[f-1].push_back(s);
  }
  int ans = 0;
  rep(i,n) {
    sort(a[i].rbegin(), a[i].rend());
    if (a[i].size() < 2) continue;
    int now = a[i][0]+a[i][1]/2;
    ans = max(ans, now);
  }

  vector<int> b;
  rep(i,n) {
    if (a[i].size() == 0) continue;
    b.push_back(a[i][0]);
  }
  sort(b.rbegin(), b.rend());
  if (b.size() >= 2) ans = max(ans, b[0]+b[1]);

  cout << ans << endl;
  return 0;
}
```