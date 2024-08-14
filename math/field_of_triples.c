#include <stdio.h>

int calculate_field(int a, int h)
{
  return (a * h) / 2;
}

int main()
{
  int a = 5;
  int h = 10;
  int result = calculate_field(a, h);
  printf("The field of the triangle is: %d\n", result);
  printf("The field of the triangle should be: %d\n", a * h / 2);

  a = 10;
  h = 20;
  result = calculate_field(a, h);
  printf("The field of the triangle is: %d\n", result);
  printf("The field of the triangle should be: %d\n", a * h / 2);

  a = 15;
  h = 30;
  result = calculate_field(a, h);
  printf("The field of the triangle is: %d\n", result);
  printf("The field of the triangle should be: %d\n", a * h / 2);

  return 0;
}