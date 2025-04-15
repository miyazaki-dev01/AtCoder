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
  set<int> st;
  for(int i = 1; i <= n; i++) {
    st.insert(i);
  }
  rep(i,m) {
    int a, b;
    cin >> a >> b;
    st.erase(b);  
  }

  if(st.size() >= 2) {
    cout << -1 << endl;
  } else {
    cout << *st.begin() << endl;
  }
  return 0;
}