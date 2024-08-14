#include <stdio.h>

int max(int a, int b)
{
  return a > b ? a : b;
}

int main()
{
  int a = 5;
  int b = 10;
  int result = max(a, b);
  printf("The max of %d and %d is: %d\n", a, b, result);
  printf("The max of %d and %d should be: %d\n", a, b, a > b ? a : b);

  a = 10;
  b = 20;
  result = max(a, b);
  printf("The max of %d and %d is: %d\n", a, b, result);
  printf("The max of %d and %d should be: %d\n", a, b, a > b ? a : b);

  a = 15;
  b = 30;
  result = max(a, b);
  printf("The max of %d and %d is: %d\n", a, b, result);
  printf("The max of %d and %d should be: %d\n", a, b, a > b ? a : b);

  return 0;
}