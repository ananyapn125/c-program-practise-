#include <stdio.h>
//to print n to 1 pattern(TAIL RECURSION) descending order of numbers.
void solve(int n);

int main()
{
    int n;

    printf("Enter an integer value: ");
    scanf("%d", &n);

    solve(n);

    return 0;
}

void solve(int n)
{
    if(n == 0)
    {
        return;
    }

    printf("%d\n", n);

    solve(n - 1);
}
**************************************************************************************************************************
//HEAD RECURSION - 1 to n pattern 
void solve(int n);

int main()
{
    int n;

    printf("Enter an integer value: ");
    scanf("%d", &n);

    solve(n);

    return 0;
}

void solve(int n)
{
    if(n == 0)
    {
        return;
    }

    solve(n - 1);

    printf("%d ", n);
}

