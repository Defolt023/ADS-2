// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
double pown(double value, uint16_t n) {
  double res = 1;
  if (n == 0) {
  return res;
  } else {
  for (int i = 1; i <= n; i++) {
  res = value * res;
  }
  }
  return res;
}
uint64_t fact(uint16_t n) {
  if (n == 0) {
  return 1;
  } else {
  return n * fact(n - 1);
}
}
double calcItem(double x, uint16_t n) {
  return pown(x, n)/fact(n);
}
double expn(double x, uint16_t count) {
  double res = 1;
  for (int n = 1; n <= count; n++) {
  res += pown(x, n)/fact(n);
  }
  return res;
}
double sinn(double x, uint16_t count) {
  double res = 0;
  for (int i = 1; i <= count; i++) {
  res += pown(-1.0, (i - 1)) * calcItem(x, (2 * i - 1));
  }
  return res;
}
double cosn(double x, uint16_t count) {
  double res = 0;
  for (int i = 1; i <= count; i++) {
  res += pown(-1.0, (i - 1)) * calcItem(x, (2 * i - 2));
  }
  return res;
}
