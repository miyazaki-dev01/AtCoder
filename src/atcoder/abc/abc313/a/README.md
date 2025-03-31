## 問題url
https://atcoder.jp/contests/abc313/tasks/abc313_a

## タグ
max

## 解法
1. 人1が最強になる条件は、「始めの要素(P1)」>「始めの要素以外のmax(M)」となること。したがって、答えは M + 1 - P1 となる。
1. また別解として、P1 - 1 した全体のmaxを求め、そこからP1を引くことで求まる。

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
  int mx = 0;
  for (int i = 1; i < n; i++) {
    mx = max(mx, a[i]);
  }
  int ans = max(0, (mx+1) - a[0]);
  cout << ans << endl;
  return 0;
}
```

別解（.py）
```
n = int(input())
a = list(map(int, input().split()))
a[0] -= 1
print(max(a)-a[0])
```