#include<stdio.h>
#include<stdlib.h>
int main()
{
 char s1[20],s2[20],s3[20];
  char letter;
  scanf("%s\n",s1);
   scanf("%s\n",s2);
    scanf("%s\n",s3);
  scanf("%c",&letter);
  if(s1[0]==letter || s2[0]==letter || s3[0]==letter)
  {
    printf("yes\n");
  }
  else
  {
    printf("no\n");
  }
  return 0;
}
