#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
    int x,n;
    printf(" Enter the Number: ");
    scanf("%d",&n);
    x=fact(n);
    printf(" Factorial is %d",x);
    getch();
}
int fact(int n)
{
    if(n==0)
        return(1);
    return(n*fact(n-1));
}
