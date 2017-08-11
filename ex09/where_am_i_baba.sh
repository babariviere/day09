#!/bin/sh

INET=`ifconfig | sed -n 's/inet \([0-9]\{1,3\}\.[0-9]\{1,3\}\.[0-9]\{1,3\}\.[0-9]\{1,3\}\) .*/\1/p' | awk '{$1=$1};1'`

if [ -z "$INET" ]; then
	echo "Je suis perdu!"
else
	for addr in $INET; do
		echo $addr
	done
fi
