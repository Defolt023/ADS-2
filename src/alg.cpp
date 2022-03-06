// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
double pown(double value, uint16_t n) {
  int binpow (int a, int n) {
  int res = 1;
  while (n)
  if (n & 1) {
  res *= a;
  --n;
  }
  else {
  a = a;
  n >>= 1;
  }
  return res;
  }
}
uint64_t fact(uint16_t n) {
  int i, fact=1, n;
  cin>>n;
  for (i=1; i<=n; i++)
  {
  fact=facti;
  }
  cout << fact;
  return 0;
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
