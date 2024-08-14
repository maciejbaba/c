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

unsigned long long fib_iter(int n)
{
  unsigned long long first = 1;
  unsigned long long second = 1;
  unsigned long long result = 0;

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

  // 93 is the largest fibonacci number that can be stored in a 64-bit integer
  // it takes less than a second to calculate !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
  n = 93;
  unsigned long long int long_res = fib_iter(n);
  printf("The %dth fibonacci number is: %llu\n", n, long_res);
  printf("The %dth fibonacci number should be: %llu\n", n, 12200160415121876738);

  return 0;
}