#!/bin/bash
wget -O /tmp/rand.so https://github.com/joudialiya/alx-low_level_programming/tree/master/0x18-dynamic_libraries/rand.so
export LD_PRELOAD=/tmp/rand.so
