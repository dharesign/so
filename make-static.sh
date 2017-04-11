#!/bin/bash

DIR=build/static
mkdir -p $DIR

# lib
clang++ -fPIC -c -Wall -Werror -Ilib lib/lib.cpp -o $DIR/lib.o

# so-a
clang++ -fPIC -c -Wall -Werror -Ilib -Iso-a so-a/a.cpp -o $DIR/a.o
clang++ -shared -o $DIR/liba.so $DIR/a.o $DIR/lib.o

# so-b
clang++ -fPIC -c -Wall -Werror -Ilib -Iso-b so-b/b.cpp -o $DIR/b.o
clang++ -shared -o $DIR/libb.so $DIR/b.o $DIR/lib.o

# app
clang++ -Wall -Werror -Iso-a -Iso-b -L$DIR -la -lb -o $DIR/app app/m.cpp
