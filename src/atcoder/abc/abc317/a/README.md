## 問題url
https://atcoder.jp/contests/abc317/tasks/abc317_a

## 解説url
解説：https://atcoder.jp/contests/abc317/editorial/7030 \
動画：https://www.youtube.com/watch?v=gK_iG4jFCgg&t=296s

## ステータス
🟢

## タイム
3:12

## タグ


## 解法
- for文を使って、問題文通りに配列の要素を1個ずつ読み取り、初めに条件を満たすiを出力する。

## 解答コード
```
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, h, x;
  cin >> n >> h >> x;
  vector<int> p(n);
  rep(i,n) cin >> p[i];
  rep(i,n) {
    if (h+p[i] >= x) {
      cout << i+1 << endl;
      return 0;
    }
  }
  return 0;
}
```