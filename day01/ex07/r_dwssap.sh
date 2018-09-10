#!/bin/sh

cat /etc/passwd | sed -n 'n;p' | sed '/^#/d' | cut -f1 -d":" | rev | sort -r | awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' |  tr '\n' ' ' | sed 's/ /, /g' | sed 's/..$/./' | tr -d '\n'
