#include <stdio.h>
#include <stdlib.h>
#define NUM 1000000

double rnd() {
  return (double)rand() / (RAND_MAX+0.1);
}

int main() {
  double x, y;
  int i, in=0;
  for(i=0;i<NUM;++i) {
    x = 2 * rnd();
    y = rnd();
    if( (x * x / 4) + (y * y) <= 1) ++in;
  }
  printf("S=%f", 8 * (double)in / NUM);
}
