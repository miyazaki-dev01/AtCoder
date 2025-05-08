## 問題url
https://atcoder.jp/contests/abc317/tasks/abc317_b

## 解説url
解説：https://atcoder.jp/contests/abc317/editorial/7024 \
動画：https://www.youtube.com/watch?v=gK_iG4jFCgg&t=657s

## ステータス
🟢

## タイム
6:02

## タグ
sort()

## 解法
- 入力の配列をソートし、隣接する2項の差が2である箇所があれば、その間の数が答えとなる。

## 解答コード
```
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  sort(a.begin(), a.end());

  rep(i,n-1) {
    if (a[i]+2 == a[i+1]) {
      cout << a[i]+1 << endl;
    }
  }
  return 0;
}
```