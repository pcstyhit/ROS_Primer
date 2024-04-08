1. 拉取docker镜像：`sudo docker pull ubuntu:20.04`

2. 启动镜像： `docker run --rm -it --network=host ubuntu:20.04`

> - `docker run` 是用于运行容器的Docker命令。
> - `--rm` 标志用于在容器停止后自动删除容器。这可以确保每次运行容器时都会清理掉容器，以避免产生无用的容器。
> - `-it` 是两个标志的结合。`-i` 标志表示保持标准输入(stdin)打开，使得你可以与容器进行交互。`-t` 标志表示为容器分配一个伪终端(pseudo-TTY)，以便你可以在命令行中与容器进行交互。
> - `--network=host` 标志用于将容器与主机共享网络命名空间。这意味着容器将与主机共享网络接口，可以访问主机上的网络资源。
> - `ubuntu:20.04` 是指定要运行的容器镜像。在这个例子中，使用的是基于Ubuntu 20.04的镜像

3. docker内更新这样才能使用apt-get 安装软件:`apt-get update`

```shell
jeston@jeston-desktop:~$ sudo docker run --rm -it --network=host ubuntu:20.04
root@jeston-desktop:/# uname -a
Linux jeston-desktop 4.9.253-tegra #1 SMP PREEMPT Sat Feb 19 08:59:22 PST 2022 aarch64 aarch64 aarch64 GNU/Linux
root@jeston-desktop:/# apt-get update
```

1. 安装基本软件：`apt-get install vim net-tools iputils-ping lsof`

2. 换源：``


