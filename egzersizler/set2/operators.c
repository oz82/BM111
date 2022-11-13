#include <stdio.h>
int main() {
  //Arithmetic Expression
  int a = (6 * 2) + 7 - 9; 
  printf("The arithmetic expression returns: %d\n", a);

  //Relational Expression
  int b = 10;
  printf("The relational expression returns: %d\n", b % 2 == 0);

  //Logical Expression
  int c = (7 > 9) && ( 5 <= 9);
  printf("The logical expression returns: %d\n", c);

  //Conditional Expression
  int d = (34 > 7) ? 1 : 0;
  printf("The conditional expression returns: %d\n", d);

  //Pointer Expression
  int e = 20; 
  int *addr = &e;
  printf("The pointer expression returns: %p\n", addr);

  //Bitwise Expression
  int f = 10;
  int shift = 10 >> 1;
  printf("The bitwise expression returns: %d\n", shift);
}