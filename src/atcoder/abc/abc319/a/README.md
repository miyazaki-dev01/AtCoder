## 問題url
https://atcoder.jp/contests/abc319/tasks/abc319_a

## 解説url
解説：https://atcoder.jp/contests/abc319/editorial/7102 \
動画：https://www.youtube.com/watch?v=26jzAnxw-S4&t=457s

## ステータス
🟢

## タイム
10:26

## タグ
map<>

## 解法
- 愚直にif文を使って条件分岐をする
- 連想配列（map<>）を使用する
- Pythonを使う

## 解答コード
```
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  if (s == "tourist") cout << 3858 << endl;
  if (s == "ksun48") cout << 3679 << endl;
  if (s == "Benq") cout << 3658 << endl;
  if (s == "Um_nik") cout << 3648 << endl;
  if (s == "apiad") cout << 3638 << endl;
  if (s == "Stonefeang") cout << 3630 << endl;
  if (s == "ecnerwala") cout << 3613 << endl;
  if (s == "mnbvmar") cout << 3555 << endl;
  if (s == "newbiedmy") cout << 3516 << endl;
  if (s == "semiexp") cout << 3481 << endl;
  return 0;
}
```

```
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

map<string,int> table = {
{"tourist", 3858},
{"ksun48", 3679},
{"Benq", 3658},
{"Um_nik", 3648},
{"apiad", 3638},
{"Stonefeang", 3630},
{"ecnerwala", 3613},
{"mnbvmar", 3555},
{"newbiedmy", 3516},
{"semiexp", 3481},
};

int main() {
  string s;
  cin >> s;
  cout << table[s] << endl;
  return 0;
}
```

```
table = '''
tourist 3858
ksun48 3679
Benq 3658
Um_nik 3648
apiad 3638
Stonefeang 3630
ecnerwala 3613
mnbvmar 3555
newbiedmy 3516
semiexp 3481
'''

s = input()
for line in table.strip().split('\n'):
  user,rating = line.split()
  if user == s:
    print(rating)
```