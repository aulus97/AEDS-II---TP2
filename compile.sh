#!/bin/bash

gcc -c tp.c
gcc tp2.c tp.o -o tp2
./tp2
