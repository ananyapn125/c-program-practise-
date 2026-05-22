//math toolkit for basic math calculations 
#include <stdio.h>
#include<stdlib.h>
void sum();
void min();
void max();
void chck();
void fact();
int main()
{
    int n;
    printf("MENU OF TOOLKIT");
    printf("choose \n 1=addition \n 2=minimum of vlaue \n 3=maximum of value \n 4=to check even or odd \n 5= to find factorial \n 6= exit \n");
    scanf("%d", &n);
    switch(n)
    {
        case 1:
          sum();
          break;
        case 2:
          min();
          break;
        case 3:
          max();
          break;
        case 4:
          chck();
          break;
        case 5:
          fact();
          break;
        case 6:
          printf("exited");
          break;
        default:
          printf("please enter valid menu option");
          break;
        }
  return 0;
}

void sum()
{
    int a,b,sum;
    printf("enter two numbers:");
    scanf("%d %d",  &a, &b);
    sum=a+b;
    printf("Sum of %d and %d is: %d", a, b, sum);
    
}

void min()
{
    int a,b;
    printf("enter two values:");
    scanf("%d %d", &a, &b);
    printf("MINIMUM VALUE IS:%d", (a < b ? a : b ));
}

void max()
{
    int a,b;
    printf("enter two values:");
    scanf("%d %d", &a, &b);
    printf("MAXIMUM VALUE IS: %d", (a > b ? a :b ));
}

void chck()
{
    int n;
    printf("enter a value:");
    scanf("%d", &n);
    printf("%s", (n%2==0)? "EVEN" :"ODD" );
}

void fact()
{
    int n;
    float fact=1;
    printf("enter a value to find its factorial:");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        fact*=i;
    }
    printf("FACTORIAL OF THE VALUE IS: %d",  (int)fact);
}

