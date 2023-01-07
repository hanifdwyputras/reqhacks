#!/bin/bash

clang $1 -o $1_results
./$1_results
rm $1_results
