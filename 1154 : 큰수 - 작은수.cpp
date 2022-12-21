#include <stdio.h>
#include <stdlib.h> 

int a,b;

int main()
{
  scanf("%d %d",&a, &b);
  int c = a-b;
  printf("%d",abs(c));
}