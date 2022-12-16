#include <stdio.h>

int n;

int main()
{
  scanf("%d",&n);

  if((30<=n && n<=40) || (60<=n && n <=70)) printf("win");
  else printf("lose");
}