## 問題url
https://atcoder.jp/contests/abc315/tasks/abc315_b

## 解説url
解説：https://atcoder.jp/contests/abc315/editorial/6991\
動画：https://www.youtube.com/watch?v=fDJpXN2R75A&t=477s

## ステータス
🟢

## タグ


## 解法
- 問題文の流れに乗って、素直に実装を進める。

1. 一年の総日数を求める
1. 総日数をもとに真ん中の日を求める
    - 真ん中の日が属する月を for 文を用いて発見し、その何日目が真ん中の日かを求める。

## 解答コード
```
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> d(n);
  rep(i,n) cin >> d[i];
  int tot = 0;
  rep(i,n) tot += d[i];
  int k = (tot+1)/2;
  rep(i,n) {
    if (k <= d[i]) {
      cout << i+1 << ' ' << k << endl;
      return 0;
    }
    k -= d[i];
  }
  return 0;
}
```