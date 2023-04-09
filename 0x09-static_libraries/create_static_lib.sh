#!/bin/bash
for file in *.c;
do
	gcc -c $file -o $file.o;
done

for file in *.c.o;
do
	mv -- "$file" "${file%.c.o}.o";
done

for file in *.o;
do
	ar rc liball.a $file;
done
