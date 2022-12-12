#!/bin/bash
wget -P ../ https://github.com/hailemichael-ayana/ALX-low_level_programming/raw/master/0x18-dynamic_libraries/libfake.so
export LD_PRELOAD=../libfake.so
