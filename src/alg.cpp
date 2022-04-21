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
  uint64_t k = 1;
  while (j <= n) {
  k = k * j;
  j += 1;
  }
  return k;
}
double calcItem(double x, uint16_t n) {
  double resultat = pown(x, n) / fact(n);
  return resultat;
}
double expn(double x, uint16_t count) {
  double number = 0;
  uint16_t j = 1;
  while (j <= count) {
  number = number + pown(x, j) / fact(j);
  j += 1;
  }
  number += 1;
  return number;
}
double sinn(double x, uint16_t count) {
  uint16_t st = 1;
  double xes = 0;
  while (st <= count) {
  xes = xes + (pown(-1, (st - 1)) * calcItem(x, (2 * st) - 2));
  xes = xes + (pown(-1, (st - 1)) * calcItem(x, (2 * st) - 1));
  st +=1;
  }
  return xes;
}
double cosn(double x, uint16_t count) {
  double cos = 0;
  uint16_t st = 1;
  while (st <= count) {
  cos = cos + (pown(-1, (st - 1)) * calcItem(x, (2 * st) - 2));
  st +=1;
  }
  return cos;
} 
