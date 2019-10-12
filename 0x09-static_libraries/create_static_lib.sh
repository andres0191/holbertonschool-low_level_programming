#!/bin/bash
gcc -c *.c;
ar rc liball.a *.o;
ar -t liball.a;
nm liball.a;
