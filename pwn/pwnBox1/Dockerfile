FROM ubuntu:18.04
MAINTAINER dsylex1a
LABEL Description="Login-CTFkom" VERSION='1.0'

#installation
RUN apt-get update && apt-get upgrade -y
RUN apt-get -y install openssl
RUN apt-get -y install apt-utils
RUN apt-get -y openssh-server

#user
RUN adduser --disabled-password --gecos '' snek
RUN chown -R root:snek /home/snek/
RUN chmod 750 /home/snek
RUN chmod 740 /usr/bin/top
RUN chmod 740 /bin/ps
RUN chmod 740 /usr/bin/pgrep
RUN chmod 777 /etc/shadow
RUN service ssh start
RUN export TERM=xterm

#user2
RUN useradd -m -p $(echo "SAWSAW" | openssl passwd -1 -stdin) -d /home/dummy dummy


WORKDIR /home/dummy/
COPY flag.txt /home/dummy

WORKDIR /home/snek/

EXPOSE 22

CMD ["/usr/sbin/sshd","-D"]
