#include<stdio.h>
main()
{
int i,sum;
i=1;
sum=0;
while(i<=100)
{
if(i%2==0)
{
sum=sum+i;
printf("%d",sum);
}
i++;
printf("\n");
}
}
