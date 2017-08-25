#!/bin/bash

DIR=build/shared
mkdir -p $DIR

# lib
clang++ -fPIC -c -Wall -Werror -Ilib lib/lib.cpp -o $DIR/lib.o
clang++ -shared -o $DIR/liblib.so $DIR/lib.o

# so-a
clang++ -fPIC -c -Wall -Werror -Ilib -Iso-a so-a/a.cpp -o $DIR/a.o
clang++ -shared -L$DIR -llib -o $DIR/liba.so $DIR/a.o

# so-b
clang++ -fPIC -c -Wall -Werror -Ilib -Iso-b so-b/b.cpp -o $DIR/b.o
clang++ -shared -L$DIR -llib -o $DIR/libb.so $DIR/b.o

# app
clang++ -Wall -Werror -Ilib -Iso-a -Iso-b -L$DIR -la -lb -llib -o $DIR/app app/m.cpp
