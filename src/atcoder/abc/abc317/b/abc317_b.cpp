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
  int n;
  cin >> n;
  vi a(n);
  rep(i,n) cin >> a[i];

  sort(a.begin(), a.end());

  rep(i,n) {
    if(a[0]+i != a[i]) {
      cout << a[0]+i << endl;
      return 0;
    }
  }
  return 0;
}