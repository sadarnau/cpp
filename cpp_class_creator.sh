#!/bin/bash

touch $1.cpp
touch $1.hpp

name=$(echo "$1" | tr '[:lower:]' '[:upper:]')

printf "#ifndef ${name}_H\n#define ${name}_H\n\n" > $1.hpp
printf "class $1\n" >> $1.hpp

