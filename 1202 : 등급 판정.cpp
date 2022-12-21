#include <stdio.h>

int a,b,c;

int main()
{
  scanf("%d %d %d",&a,&b,&c);
  if((b-c)<a) printf("do not advertise");
  else if((b-c)>a) printf("advertise");
  else printf("does not matter");
}