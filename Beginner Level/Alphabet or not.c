#include<stdio.h>
int main()
{
int testcase,i;
scanf("%d",&testcase);
for(i=0;i<=testcase;i++)
{
char character;
scanf("%c",&character);
if(character>='a')
{
printf("Alphabet\n");
}
else if(character>='A')
{
printf("Alphabet\n");
}
else
{
printf("No");
}
}
}
