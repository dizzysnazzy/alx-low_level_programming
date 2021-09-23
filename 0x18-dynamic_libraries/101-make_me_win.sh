#!/bin/bash
wget -O /tmp/dis.so https://github.com/dizzysnazzy/alx-low_level_programming/blob/main/0x18-dynamic_libraries/dis.so
export LD_PRELOAD=/tmp/dis.so
