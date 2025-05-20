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
  map<string,int> r;
  r["tourist"] = 3858;
  r["ksun48"] = 3679;
  r["Benq"] = 3658;
  r["Um_nik"] = 3648;
  r["apiad"] = 3638;
  r["Stonefeang"] = 3630;
  r["ecnerwala"] = 3613;
  r["mnbvmar"] = 3555;
  r["newbiedmy"] = 3516;
  r["semiexp"] = 3481;

  string s;
  cin >> s;

  cout << r[s] << endl;
  return 0;
}