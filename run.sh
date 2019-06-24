#!/bin/bash
if [ ! -z "$1" ]
then
  g++ -I util -Wall -pedantic -g -o temp $1 util/util.cpp
  ./temp
  rm temp
fi
