#!/bin/bash
wget -P /tmp "https://github.com/RetagFathiAs/alx-low_level_programming/raw/master/0x18-dynamic_libraries/alxlib.so"
export LD_PRELOAD=/tmp/alxlib.so:$LD_PRELOAD
