#include <stdio.h>

int n,a,b;

int main()
{
  scanf("%d %d %d",&n,&a,&b);

  if((n-a+b)%10==0) printf("대박");
  else printf("그럭저럭");
}