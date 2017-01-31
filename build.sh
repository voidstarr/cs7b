#!/bin/bash
# because I'm tired of typing this over and over

if [ -z $1 ]
then
    echo "where should I put the final product?"
    echo "./build <executable path>"
    exit
fi

TO_COMP=`find . -name '*.cpp' | xargs`
clang++-3.8 -std=c++14 -o $1 $TO_COMP
