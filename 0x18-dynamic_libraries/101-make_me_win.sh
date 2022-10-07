#!/bin/bash
wget -P /tmp https://github.com/biyiemmy/alx-low_level_programming/raw/master/0x18-dynamic_libraries/biyiemmy.so
export LD_PRELOAD=/tmp/biyiemmy.so
