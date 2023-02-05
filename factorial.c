#include<stdio.h>
void main()
{
printf("The following program is to find the factorial of a number\n");
int n,fact=1;
printf("Enter a number to find its factorial:-");
scanf("%d",&n);
for(int i=n;i>=1;i--)
{
  fact=fact*i;
}
printf("\nThe factorial of %d is %d ",n,fact);
}
