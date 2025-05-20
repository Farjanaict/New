#include<stdio.h>
int main()
{
int a,n;
printf("Enter the number you want to shift:");
scanf("%d",&a);
printf("How many bits you want to right shift:");
scanf("%d",&n);
printf("%d %d",a,a>>n);
return 0;
}

