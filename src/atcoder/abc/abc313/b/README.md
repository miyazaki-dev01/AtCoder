## 問題url
https://atcoder.jp/contests/abc313/tasks/abc313_b

## ステータス
❌

## タグ
推移律、全順序、set()

## 解法
人iが最強であるための必要条件は、「他の誰かが人iより強い」という情報が存在しないこと。この必要条件を満たすとき、人iは最強である可能性がある。
したがって、全員が最強候補である状態から始めて、誰かより弱いことが判明した人を候補から取り除いていき、最後に残るのが1人であるかどうかを確かめることで問題を解くことができる。
例：「A→B」の場合、Bが最強である可能性はゼロなので、Bを除外する。

## 解答コード
```
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  set<int> st;
  for (int i = 1; i <= n; i++) st.insert(i);
  rep(i,m) {
    int a, b;
    cin >> a >> b;
    st.erase(b);
  }
  if (st.size() >= 2) cout << -1 << endl;
  else cout << *st.begin() << endl;
  return 0;
}
```