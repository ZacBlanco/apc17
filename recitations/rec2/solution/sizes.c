// Copyright (c) 2012 MIT License by 6.172 Staff

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define PRINT_SIZE(st, rt) printf("size of %s : %zu bytes \n", (st), sizeof(rt))

int main() {
  // Please print the sizes of the following types:
  // int, short, long, char, float, double, unsigned int, long long
  // uint8_t, int16_t, int32_t, and uint64_t


  // Here's how to show the size of one type. See if you can define a macro
  // to avoid copy pasting this code.
  // e.g. PRINT_SIZE("int", int);
  //      PRINT_SIZE("short", short);
  PRINT_SIZE("int", int);
  PRINT_SIZE("short", short);
  PRINT_SIZE("long", long);
  PRINT_SIZE("char", char);
  PRINT_SIZE("float", float);
  PRINT_SIZE("double", double);
  PRINT_SIZE("unsigned int", uint);
  PRINT_SIZE("long long", long long);
  PRINT_SIZE("uint8_t", uint8_t);
  PRINT_SIZE("int16_t", int16_t);
  PRINT_SIZE("int32_t", int32_t);
  PRINT_SIZE("uint64_t", uint64_t);

  // Composite types have sizes too.
  typedef struct {
    int id;
    int year;
  } student;

  student you;
  you.id = 12345;
  you.year = 4;

  // You can just use your macro here instead: PRINT_SIZE("student", you);
  printf("size of student: %u Bytes \n", (unsigned int) sizeof(you));

  return 0;
}
