#include<stdio.h>
#include<string.h>
int main()
{
  char chararr[50];
  printf("Enter String: ");
  scanf("%s",chararr);
  int l = strlen(chararr);
  if(strstr(chararr,"101"))
  {
    printf("String accepted");
  }
  else
  {
    printf("String is not accepted");
  }
}