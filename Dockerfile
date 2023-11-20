RUN apt-get update && \
    apt-get install -y software-properties-common &&\
    apt-get update &&\
    apt-get install -y tree \
    git \
    vim \
    gcc \
    g++ \
    make\
    mysql-server

WORKDIR /root/

CMD [ "mysqld" ]
