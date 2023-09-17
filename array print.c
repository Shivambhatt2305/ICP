#include<stdio.h>
int main()
{
int i,n,max,min,a[5];
printf("enter number");
scanf("%d",&n);
for(i=1;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
if(max<a[i])
{
max=a[i];
}
if(min>a[i])
{
min=a[i];
}
}



}
