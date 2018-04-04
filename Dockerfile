FROM gcc
COPY . /usr/src/munch
WORKDIR /usr/src/munch
RUN gcc -o munch munch.c
CMD ["./munch"]
