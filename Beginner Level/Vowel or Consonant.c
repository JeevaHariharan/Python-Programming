#include<stdio.h>
int main()
{
char character;
printf("Enter a character : ");
scanf("%c",&character);
if((character=='a') || (character=='e') || (character=='i') || (character=='o') || (character=='u'))
{
printf("Given character is a Vowel");
}
else
{
printf("Given character is a Consonant");
}
}
