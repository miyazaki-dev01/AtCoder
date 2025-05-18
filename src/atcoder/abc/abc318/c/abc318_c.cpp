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
  ll n, d, p;
  cin >> n >> d >> p;
  vector<ll> f(n);
  rep(i,n) cin >> f[i];

  sort(f.rbegin(), f.rend());

  ll ans = 0;
  for(int i = 0; i < n;) {
    ll cnt = 0;
    if(n < i+d) {
      for(int j = i; j < n; j++) {
        cnt += f[j];
      } 
    } else {
      for(int j = i; j < i+d; j++) {
        cnt += f[j];
      }
    }
    if(cnt > p) {
      ans += p;
    } else {
      ans += cnt;
    }
    i += d;
  }

  cout << ans << endl;
  return 0;
}