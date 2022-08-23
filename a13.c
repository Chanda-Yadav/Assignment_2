#include<stdio.h>
#include<conio.h>
int main()
{
    int n,x,y;
    printf("Enter a three digit");
    scanf("%d",&n);
    y=n%10;
    n=n/10;
    printf("After rotate its digit by one position towards right = %d",y*100+n);
}
