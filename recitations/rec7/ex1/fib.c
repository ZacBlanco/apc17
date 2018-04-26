#include "stdio.h"
#include "stdlib.h"

int fib(int n) {
  if (n < 2) {
    return n;
  }

  int x, y;
    x = cilk_spawn fib(n-1);
    y = fib(n-2);
    cilk_sync;
  return x+y;
}

int main(int argc, char* argv[]) {
  int n = 10;

  if (argc > 1) {
    n = atoi(argv[1]);
  }

  int result = fib(n);
  printf("fib(%d)=%d\n",n,result);
  return 0;
}

