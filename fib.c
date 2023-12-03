#include <stdio.h>

int fib_rec(int n)
{
  if (n == 0 || n == 1)
  {
    return n;
  }
  else
  {
    return fib_rec(n - 1) + fib_rec(n - 2);
  }
}

int fib_iter(int n)
{
  int first = 1;
  int second = 1;
  int result = 0;

  if (n == 0 || n == 1)
  {
    return 1;
  }
  else
  { // the first two numbers are 1 and 1 so we start at 3
    for (int i = 3; i <= n; i++)
    {
      result = first + second;
      first = second;
      second = result;
    }
    return result;
  }
}

int main()
{
  int n = 10;
  int result = fib_rec(n);
  printf("The %dth fibonacci number is: %d\n", n, result);
  printf("The %dth fibonacci number should be: %d\n", n, 55);

  n = 20;
  result = fib_rec(n);
  printf("The %dth fibonacci number is: %d\n", n, result);
  printf("The %dth fibonacci number should be: %d\n", n, 6765);

  n = 30;
  result = fib_rec(n);
  printf("The %dth fibonacci number is: %d\n", n, result);
  printf("The %dth fibonacci number should be: %d\n", n, 832040);

  n = 10;
  result = fib_iter(n);
  printf("The %dth fibonacci number is: %d\n", n, result);
  printf("The %dth fibonacci number should be: %d\n", n, 55);

  n = 20;
  result = fib_iter(n);
  printf("The %dth fibonacci number is: %d\n", n, result);
  printf("The %dth fibonacci number should be: %d\n", n, 6765);

  n = 30;
  result = fib_iter(n);
  printf("The %dth fibonacci number is: %d\n", n, result);
  printf("The %dth fibonacci number should be: %d\n", n, 832040);

  return 0;
}