#include <stdio.h>

int sum_of_number(int num)
{
  int sum = 0;
  while (num > 0)
  {
    sum += num % 10;
    num /= 10;
  }
  return sum;
}

int main()
{
  int num = 12345;
  int result = sum_of_number(num);
  printf("The sum of the digits of %d is: %d\n", num, result);
  printf("The sum of the digits of %d should be: %d\n", num, 15);

  num = 123456789;
  result = sum_of_number(num);
  printf("The sum of the digits of %d is: %d\n", num, result);
  printf("The sum of the digits of %d should be: %d\n", num, 45);

  num = 987654321;
  result = sum_of_number(num);
  printf("The sum of the digits of %d is: %d\n", num, result);
  printf("The sum of the digits of %d should be: %d\n", num, 45);

  return 0;
}