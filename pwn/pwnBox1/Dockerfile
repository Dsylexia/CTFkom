FROM ubuntu:latest
MAINTAINER dsylex1a
LABEL Description="Login-CTFkom" VERSION='1.0'

#installation
RUN apt-get update && apt-get upgrade -y
RUN apt-get -y install openssl
RUN apt-get -y install apt-utils
RUN apt-get install -y openssh-server  sudo

#user
RUN useradd -rm -d /home/snek -s /bin/bash snek
RUN chown -R root:snek /home/snek/
RUN chmod 750 /home/snek
RUN chmod 740 /usr/bin/top
RUN chmod 740 /bin/ps
RUN chmod 740 /usr/bin/pgrep
RUN export TERM=xterm
RUN apt update && apt install  openssh-server sudo -y

#user2
RUN useradd -m -p $(echo "SAWSAW" | openssl passwd -1 -stdin) -d /home/dummy dummy


WORKDIR /home/dummy/
COPY flag.txt /home/dummy

WORKDIR /home/snek/

EXPOSE 22

ENTRYPOINT service ssh start && tail -f /dev/null
