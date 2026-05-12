
#include <stdio.h>

int main()
{
  //constant or vowel detection using if and switch conditions
  char ch;
  int count;
  count=0;
  printf("enter a alphabet to check if its a vowel or a consonant");
  scanf("%s", &ch);
  if(ch=='a' || ch=='e' ||  ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E'||
  ch=='I' || ch=='O' || ch=='U')
  {
    count++;
  }
  
  switch(count)
  {
      case 1:
        printf("The entered alphabet is a vowel");
        break;
      case 0:
         printf("The entered alphabet is a consonant");
         break;
  }
  return 0;
}
