#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vvi = vector<vi>;
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<P>> g(n);
  rep(i,m) {
    int a, b, c;
    cin >> a >> b >> c;
    a--;
    b--;
    g[a].emplace_back(b,c);
    g[b].emplace_back(a,c);
  }

  int ans = 0;
  vector<bool> visited(n);
  auto dfs = [&](auto dfs, int v, int cnt) -> void {
    visited[v] = true;
    ans = max(ans, cnt);
    for(auto next : g[v]) {
      if(visited[next.first] == true) continue;
      dfs(dfs, next.first, cnt+next.second);
    }
    visited[v] = false;
  };

  rep(i,n) dfs(dfs, i, 0);

  cout << ans << endl;
  return 0;
}