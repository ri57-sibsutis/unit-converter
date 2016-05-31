#!/bin/sh
make clean
make bin
cd src
../bin/convert
cd ..
make clean