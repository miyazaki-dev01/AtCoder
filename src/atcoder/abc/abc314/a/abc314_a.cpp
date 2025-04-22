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

string s = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

int main() {
  int n;
  cin >> n;
  
  cout << s.substr(0, 1+n+1) << endl;
  return 0;
}