#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  char charr[50];
  printf("Enter String: ");
  scanf("%s",charr);
  int c1 = 0 , c0 = 0 , len = strlen(charr)-1;
  for(int i = 0 ; i <= len ; ++i)
  {
    if(i == len)
    {
      if(charr[i]=='0')
        c0++;
      else if( charr[i]=='1')
        c1++;
      break;
    }
    if((charr[i]=='0')&&(charr[i+1]=='0'))
      c0++;
    else if( (charr[i]=='1')&& (charr[i+1]=='1'))
      c1++;
    else if ((charr[i]=='0') && (charr[i+1]=='1'))
    {
      if(charr[i+2]=='0')
      {
        printf("String not Accepted");
        exit(0);
      }
      else
        c0++;
    }
  }
  printf("%d \n%d \n",c0,c1);
  if(c1==c0)
    printf("String Accepted");
  else
    printf("String not Accepted ");
}