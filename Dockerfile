# ベースイメージとしてUbuntu 20.04を使用
FROM ubuntu:20.04

# 作業ディレクトリを作成
WORKDIR app

# インタラクティブモードにならないようにする
ARG DEBIAN_FRONTEND=noninteractive
# タイムゾーンを日本に設定
ENV TZ=Asia/Tokyo

# パッケージリストの更新と、必要なパッケージのインストール
RUN apt-get update && apt-get install -y \
    curl \
    git \
    time \
    tzdata \
    gcc-9 \
    g++-9 \
    gdb \
    python3 \
    python3-pip

# Node.jsのインストール（NodeSourceのリポジトリを利用）
RUN curl -fsSL https://deb.nodesource.com/setup_16.x | bash - && \
    apt-get install -y nodejs

# atcoder-cli（acc）のインストール
RUN npm install -g atcoder-cli

# online-judge-tools（oj）のインストール
RUN pip3 install --no-cache-dir online-judge-tools

# AtCoder Library（ACL）のインストール
RUN git clone https://github.com/atcoder/ac-library.git /lib/ac-library
# ACLのインクルードパスを設定
ENV CPLUS_INCLUDE_PATH /lib/ac-library

