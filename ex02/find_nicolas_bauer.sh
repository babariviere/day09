#!/bin/sh

OUTPUT=`cat $1`
echo $OUTPUT | grep -i nicolas | grep -i bauer | egrep "1?\[ \-\(\]\{0,2\}\[0-9\]\{3\}\[\)\- \.\]\{0,2\}\[0-9\]\{3\}\[\- \.\]\{0,2\}\[0-9\]\{4\}"
