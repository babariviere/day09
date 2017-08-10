#!/bin/sh

eval set `stat -s bomb.txt`
file_time=`stat -f %a bomb.txt`
cur_time=`date +%s`

COUNT=$(( $cur_time - $file_time ))
echo $COUNT
