#include <stdio.h>
void main()
{
  int sum(int), ans;
  ans = sum(5);
  printf("%d", ans);
}

int sum(int n)
{
  if (n <= 0)
    return 0;
  else
    return n + sum(n - 1);
}
