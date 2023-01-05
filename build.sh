set -xe

mkdir -p bin/
gcc -o bin/bouncing-dvd main.c -Wall -Wextra -Wformat -std=c11 -lm -lraylib -lGL -lpthread -ldl -lrt -lX11
