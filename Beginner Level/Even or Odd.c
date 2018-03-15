#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int testcase,a,i;
  scanf("%d",&testcase);
  for(i=0;i<testcase;i++)
  {
    scanf("%d",&a);
    if(a%2==0)
    {
      printf("EVEN\n");
    }
    else
    {
      printf("ODD\n");
    }
  }
    return 0;
}
