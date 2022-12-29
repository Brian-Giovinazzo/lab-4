#!/bin/bash

gcc -o matrix_ijk matrix_ijk.c
gcc -o matrix_kij matrix_kij.c
gcc -o matrix_jki matrix_jki.c

echo "matrix_ijk"
for i in {1..10}; do
  ./matrix_ijk
done
echo "matrix_kij"
for i in {1..10}; do
  ./matrix_kij
done
echo "matrix_jki"
for i in {1..10}; do
  ./matrix_jki
done

rm -Rf matrix_ijk matrix_kij matrix_jki
