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

  string ans;
  for(int i = 0; i <= n; i++) {
    bool flg = false;
    for(int j = 1; j <= 9; j++) {
      if(n%j == 0) {
        if(i%(n/j) == 0) {
          ans += (char)('0'+j);
          flg = true;
          break;
        }
      }
    }
    if(flg == false) {
      ans += "-";
    }
  }

  cout << ans << endl;
  return 0;
}