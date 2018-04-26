// Copyright (c) 2013 MIT License

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <sys/time.h>
#include "poly.c"

unsigned long long ms_time(struct timeval tv) {
  return (tv.tv_sec * 1000) + (tv.tv_usec / 1000);
}

bool test_multiply(Polynomial* p1, Polynomial* p2) {
  struct timeval start;
  struct timeval end;
  unsigned long long start_ms;
  unsigned long long end_ms;

  gettimeofday(&start, NULL);
  start_ms = ms_time(start);

  Polynomial *p3 = multiply(p1, p2);

  gettimeofday(&end, NULL);
  end_ms = ms_time(end);

  printf("Naive runtime: %f seconds \n", (end_ms - start_ms) / 1000.0);

  gettimeofday(&start, NULL);
  start_ms = ms_time(start);

  Polynomial *p4 = multiply_karat(p1, p2);

  gettimeofday(&end, NULL);
  end_ms = ms_time(end);
  printf("Karatsuba runtime: %f seconds \n", (end_ms - start_ms) / 1000.0);

  // Uncomment these lines if you want to print the polynomials.

  //  printf("Naive result: \n");
  //  print_string(p3);
  //  printf("Karatsuba result: \n");
  //  print_string(p4);

  // Confirm that the two algorithms produce the same result.

  return equals(p3, p4);
}

int main(int argc, char **argv) {
  // Create two large polynomials to multiply.
  srand(42);
  int n = 50000;

  Polynomial *p1 = polynomial_new(n);
  Polynomial *p2 = polynomial_new(n);

  for (int i = 0; i < n; i++) {
    p1->coefficients[i] = rand() % 10000;
    p2->coefficients[i] = rand() % 10000;
  }

  if (test_multiply(p1, p2)) {
    printf("Success: Karatsuba algorithm result matches naive result! \n");
  } else {
    printf("Failure: Karatsuba algorithm result does not match naive result. \n");
  }

  polynomial_delete(p1);
  polynomial_delete(p2);
  return 0;
}

