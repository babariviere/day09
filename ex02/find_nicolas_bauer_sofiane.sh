cat $1 | grep -i nicolas | grep -i bauer | rev | cut -d '	' -f 2- | rev | grep '[0-9]\{3\}-[0-9]\{4\}' | grep -i nicolas | rev | cut -d '	' -f 1 | rev
