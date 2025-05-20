#include<stdio.h>
int main()
{
int n,basein,baseout,i=0,sum=0,a[10];
printf("Enter a input number:");
scanf("%d",&n);
printf("Enter the base of this input number: ");
scanf("%d",&basein);
printf("Enter the base of this output number: ");
scanf("%d",&baseout);
while(n>0)
{
 a[i]=n%baseout;
 n=n/baseout;
 i++;
}
for(i=i-1;i>=0;i--)
{
printf("%d",a[i]);
}
return 0;
}
