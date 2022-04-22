// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
double pown(double value, uint16_t n) {
  double q = 1.0;
  uint16_t j = 1;
  while (j <= n) {
  q = q * value;
  j += 1;
  }
  return q;
}
uint64_t fact(uint16_t n) {
  uint64_t j = 1;
  uint64_t s = 1;
  while (j <= n) {
  s = s * j;
  j += 1;
  }
  return s;
}
double calcItem(double x, uint16_t n) {
  double resultat = pown(x, n) / fact(n);
  return resultat;
}
double expn(double x, uint16_t count) {
  double ch = 0;
  uint16_t j = 1;
  while (j <= count) {
  ch = ch + pown(x, j) / fact(j);
  j += 1;
  }
  ch += 1;
  return ch;
}
double sinn(double x, uint16_t count) {
  uint16_t cb = 1;
  double sinx = 0;
  while (cb <= count) {
  sinx = sinx + (pown(-1, (cb - 1)) * calcItem(x, (2 * cb) - 1));
  cb +=1;
  }
  return sinx;
}
double cosn(double x, uint16_t count) {
  uint16_t cb = 1;
  double cosx = 0;
  while (cb <= count) {
  cosx = cosx + (pown(-1, (cb - 1)) * calcItem(x, (2 * cb) - 2));
  cb +=1;
  }
  return cosx;
}
