#include<stdio.h>
#include<conio.h>
int main()
{

    int n,x,y=0;
    printf("Enter a three digit number");
    scanf("%d",&n);
    while(n!=0)
    {

        x=n%10;
        y++;
        n=n/10;
    }
    printf("%d",y);
}
