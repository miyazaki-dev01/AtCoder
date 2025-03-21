# AtCoder ABC 環境（C++/Python）

## 環境

- C++
- Python

## 使用ライブラリ

- [online-judge-tools](https://github.com/online-judge-tools/oj)：AtCoder や他のオンラインジャッジの問題を扱うためのツール\
- [atcoder-cli](https://github.com/Tatamo/atcoder-cli?tab=readme-ov-file)：AtCoder のコンテスト参加を便利にする CLI ツール\
- [ac-library](https://github.com/atcoder/ac-library)：AtCoder 公式の C++ ライブラリ

## 環境構築

### 前提

- AtCoder のアカウントがあること
- VSCode, Docker Desktop がインストールされていること
- VSCode に「Dev Container」の拡張機能がインストールされていること
- 本リポジトリをクローン済みであること（src 配下を除く）

### 1. Docker コンテナの立ち上げ

`$ docker-compose up --build -d`

### 2. VSCode へのアタッチ

VSCode で `ctrl + shift + P` でコマンドパレットを開き、`Dev Containers: Open Folder in Container...` を実行。

### 3. 初期設定

- acc, oj へのログイン：AtCoder のユーザー名とパスワードを入力してログインする。

  - acc へのログイン： `$ acc login`
  - oj へのログイン： `$ oj login https://atcoder.jp`

- acc の設定変更：デフォルトで全ての問題がダウンロードされるように設定。\
  `$ acc config default-task-choice all`

## 使用方法

### 問題のダウンロード

1. タスク `abc_dl` を実行。
2. 入力欄にダウンロードしたい ABC の問題を入力する。（例：`abc123`）
3. `src/atcoder/abc/` に入力した ABC の問題がダウンロードされる。

   > `abc123/` -> A, B, C, ...問題のディレクトリ\
   > `abc123/a/test/` -> A 問題のテストケース\
   > `abc123/a/abc123_a.cpp` -> A 問題の解答ファイル（`/templates/atcoder.cpp` をコピーして作られる）

### 実装

各問題の解答ファイルに実装する。

### テスト（C++）

- **例題でのテスト**\
  解答用のファイルを開き、タスク `test cpp` を実行すると、例題でのテストが実行される。

- **独自のテストケースを試す**\
  解答用のファイルを開き、タスク `execute cpp` を実行すると、標準入力が開く。\
  そこで手動で入力を行うことで、任意のテストケースを試すことができる。

- **入力ファイルを用いたテスト**\
  解答用のファイルを開き、タスク `execute cpp input.txt` を実行すると、`/templates/input.txt` にある入力を用いて任意のテストケースを試すことができる。

  > **Python の場合**
  >
  > - 例題でのテスト：`test py`
  > - 独自のテストケース：`execute py`
  > - 入力ファイルを用いたテスト：`execute py input.txt`

### 解答の提出

解答用のファイルを開き、タスク `submit` を実行すると、自動で解答が提出される。\
※提出の際に問題番号の入力が求められるが、指示通りに入力すればよい。例：`abc123`

## ディレクトリ構成

```
  .
  ├── .devcontainer
  │   └── devcontainer.json
  ├── .vscode
  │   ├── c_cpp_properties.json
  │   └── tasks.json
  ├── cmd
  │   └── abc_dl.sh
  ├── src
  │   └── atcoder
  │       └── abc
  │           ├── abc001
  │           └── abc002
  ├── templates
  │   ├── atcoder.cpp
  │   ├── atcoder.py
  │   └── input.txt
  ├── docker-compose.yml
  └── Dockerfile
```

### 構成解説

- `.devcontainer/`：VSCode の「Dev Container」用設定（Docker を利用した開発環境）。
- `.vscode/`：VSCode の C++ 用コンパイラ設定やビルドタスクを管理。
- `cmd/`：AtCoder の問題を取得するスクリプトなど、実行用スクリプトを格納。
- `src/`：AtCoder の解答プログラムを管理するソースコードディレクトリ。
- `templates/`：コードやテストデータのテンプレートを管理。
- `docker-compose.yml` / `Dockerfile`：開発環境を Docker で構築するための設定ファイル。

## 参考サイト

[AtCoder の環境を Docker で作りたい](https://qiita.com/tf63/items/c93c6f24d73599e637d8)<br>
[AtCoder のための環境作成](https://qiita.com/NaokiOsako/items/dcbc0a91e1bbca8ee45d)<br>
[Docker を利用したローカルの AtCoder 環境（C++）](https://zenn.dev/kinakomochi5250/articles/atcoder-cpp-docker)

## 備考

2025.03.21 現在、AtCoder がログインに cloudflare CAPTCHA を採用した影響で、上記 acc, oj へのログインが失敗する。\
ライブラリへのアップデートはまだされていないが、[aclogin](https://github.com/key-moon/aclogin) を使用することで、oj へのログインはできる模様。\
aclogin が acc にも対応するか、アップデートが入りきちんと使用できるようになったら修正を行う。\
Issue：[acc](https://github.com/Tatamo/atcoder-cli/issues/66), [oj](https://github.com/online-judge-tools/oj/issues/934)
