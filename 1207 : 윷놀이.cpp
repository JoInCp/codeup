#include <stdio.h>

int a,b,c,d;

int main()
{
  scanf("%d %d %d %d",&a,&b,&c,&d);
  if(a+b+c+d == 1) printf("도");
  else if(a+b+c+d == 2) printf("개");
  else if(a+b+c+d == 3) printf("걸");
  else if(a+b+c+d == 4) printf("윷");
  else printf("모");
}