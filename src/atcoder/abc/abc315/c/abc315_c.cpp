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
  vector<P> p1(n);
  vector<P> p2(n);
  rep(i,n) {
    int f, s;
    cin >> f >> s;
    p1[i] = {-s, f};
    p2[i] = {f, s};
  }

  sort(p1.begin(), p1.end());
  int ans1 = 1;
  for(int i = 0; i < n-1; i++) {
    if(p1[i].second == p1[i+1].second) {
      ans1 = min(ans1, p1[i].first + (p1[i+1].first / 2));
    } else {
      ans1 = min(ans1, p1[i].first + p1[i+1].first);
    }
  }

  sort(p2.begin(), p2.end());
  int ans2 = -1;
  vector<P> p3;
  p3.push_back({p2[n-1].second, p2[n-1].first});
  for(int i = n-1; i > 0; i--) {
    if(p2[i].first != p2[i-1].first) {
      p3.push_back({p2[i-1].second, p2[i-1].first});
    }
  }
  sort(p3.rbegin(), p3.rend());
  if(p3.size() >= 2) {
    ans2 = p3[0].first + p3[1].first;
  }

  cout << max(-ans1, ans2) << endl;
  return 0;
}