FROM ubuntu:18.04
LABEL Description="Login-CTFkom" VERSION='1.0'

#installation
RUN apt-get update && apt-get upgrade -y
RUN apt-get install -y build-essential socat

#user
RUN adduser --disabled-password --gecos '' unlockmeplz
RUN chown -R root:unlockmeplz /home/unlockmeplz/
RUN chmod 750 /home/unlockmeplz
RUN touch /home/unlockmeplz/flag.txt
RUN chown root:unlockmeplz /home/unlockmeplz/flag.txt
RUN chmod 440 /home/unlockmeplz/flag.txt
RUN chmod 740 /usr/bin/top
RUN chmod 740 /bin/ps
RUN chmod 740 /usr/bin/pgrep
RUN export TERM=xterm

WORKDIR /home/unlockmeplz/
COPY unlockmeplz.c /home/unlockmeplz
COPY flag.txt /home/unlockmeplz

RUN gcc -s -o unlockmeplz unlockmeplz.c 

EXPOSE 8000
CMD su -l unlockmeplz -c "socat -dd TCP4-LISTEN:8000,fork,reuseaddr EXEC:/home/unlockmeplz/unlockmeplz"
