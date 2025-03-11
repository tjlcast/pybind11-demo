# 使用官方Ubuntu镜像作为基础镜像
FROM ubuntu:20.04

# 设置环境变量，避免在安装过程中出现交互式提示
ENV DEBIAN_FRONTEND=noninteractive

# 更新包列表并安装必要的工具
RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    git \
    python3 \
    python3-pip \
    python3-dev \
    && rm -rf /var/lib/apt/lists/*

# 安装Pybind11
RUN pip3 install pybind11

# 设置工作目录
WORKDIR /workspace

# 复制当前目录下的所有文件到容器的/workspace目录
# COPY . /workspace

# 设置默认命令为bash
CMD ["bash"]