#!/bin/sh
make clean
make test
cd src
../bin/test
cd ..
make clean