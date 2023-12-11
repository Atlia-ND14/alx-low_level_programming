#!/bin/bash
gcc -Wall -shared -fPIC -o /tmp/libfake_rand.so -ldl -D_REENTRANT -nostartfiles /tmp/fake_rand.c
LD_PRELOAD=/tmp/libfake_rand.so ./gm 9 8 10 24 75 9
rm /tmp/libfake_rand.so
