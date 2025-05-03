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
  string s;
  cin >> s;

  vector<char> c = {'a', 'i', 'u', 'e', 'o'};

  string ans;
  rep(i,s.size()) {
    bool flg = false;
    rep(j,c.size()) {
      if(s[i] == c[j]) {
        flg = true;
      }
    }
    if(!flg) {
      ans += s[i];
    }
  }

  cout << ans << endl;
  return 0;
}