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
  vector<ll> a(n);
  ll sum = 0;
  rep(i,n) {
    cin >> a[i];
    sum += a[i];
  }

  vector<ll> b(n, sum / n);
  rep(i, sum % n) b[i]++;
  
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  ll ans = 0;
  rep(i,n) {
    ans += abs(a[i] - b[i]);
  }

  cout << ans / 2 << endl;
  return 0;
}