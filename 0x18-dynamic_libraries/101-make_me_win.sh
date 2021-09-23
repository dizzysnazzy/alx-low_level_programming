#!/bin/bash
wget -P .. https://github.com/dizzysnazzy/alx-low_level_programming/blob/main/0x18-dynamic_libraries/101-md5_gm/libgiga.so
export LD_PRELOAD="$PWD/../libgiga.so"
