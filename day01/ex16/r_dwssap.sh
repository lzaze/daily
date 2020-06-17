cat /etc/passwd | egrep -v "(^#.*|^$)" | sed '1!n;d' | rev
