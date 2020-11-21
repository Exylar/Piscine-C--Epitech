#!/bin/bash 

cut -d ':' -f1 | sed -n 'n;p' | rev | sort -r | sed -n $MY_LINE1,$MY_LINE2\p | tr ["\n"] "," | sed 's/,/, /g' | sed 's/.\{2\}$//'| awk '{print $0"."}'
