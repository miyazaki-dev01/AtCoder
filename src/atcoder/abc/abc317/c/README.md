## 問題url
https://atcoder.jp/contests/abc317/tasks/abc317_c

## 解説url
解説：https://atcoder.jp/contests/abc317/editorial/7025 \
動画：https://www.youtube.com/watch?v=gK_iG4jFCgg&t=1184s

## ステータス
❌

## タイム
88:00

## タグ
無向グラフ、DFS、構造体、ラムダ式

## 解法
- DFSを用いて実装する。「次に進める頂点と移動距離の合計」を引数に持ち、進める頂点へ移動する全探索を行う。
- 訪れたかの真偽地の更新は、その頂点に訪れた際にtrue、戻る際にfalseに更新する。


## 解答コード
```
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

struct Edge {
  int to, cost;
  Edge(int to=0, int cost=0): to(to), cost(cost) {}
};

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<Edge>> g(n);
  rep(i,m) {
    int a, b, c;
    cin >> a >> b >> c;
    --a; --b;
    g[a].emplace_back(b,c);
    g[b].emplace_back(a,c);
  }

  int ans = 0;
  vector<bool> visited(n);
  auto f = [&](auto f, int v, int dist) -> void {
    visited[v] = true;
    ans = max(ans, dist);
    for (auto e : g[v]) {
      if (visited[e.to]) continue;
      f(f, e.to, dist+e.cost);
    }
    visited[v] = false;
  };

  rep(i,n) f(f,i,0);
  cout << ans << endl;
  return 0;
}
```