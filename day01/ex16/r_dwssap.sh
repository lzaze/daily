#!/bin/sh
export FT_LINE1=8
export FT_LINE2=16

cat /etc/passwd | \
	egrep -v "(^#.*|^$)" | \
	sed '1!n;d' | \
	cut -d':' -f1 | \
	rev | \
	sort -r | \
	awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' | \
	paste -s -d"," - | \
	sed 's/,/, /g' | \
	sed 's/$/./'
