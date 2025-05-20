#include<stdio.h>
int a1[8],a2[8],a3[8];
int main()
{
int a,b,i=7,j=7,k=7,c;
printf("Enter two decimal number:");
scanf("%d%d",&a,&b);
c=a|b;
printf("%d\n",c);
while(a!=0)
{
    a1[i]=a%2;
    a=a/2;
    i--;
}
for(i=0;i<=7;i++)
{
    printf("%d",a1[i]);
}
printf("\n");
while(b!=0)
{
    a2[j]=b%2;
    b=b/2;
    j--;
}
for(j=0;j<=7;j++)
{
    printf("%d",a2[j]);
}
printf("\nOR operation\n");

while(c!=0)
{
    a3[k]=c%2;
    c=c/2;
    k--;
}
for(k=0;k<=7;k++)
{
    printf("%d",a3[k]);
}
return 0;
}

