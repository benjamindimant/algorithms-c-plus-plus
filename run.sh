#!/bin/bash
if [ ! -z "$1" ]
then
  g++ -o temp $1
  ./temp
  rm temp
fi
