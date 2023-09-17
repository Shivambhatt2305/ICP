#include<stdio.h>
main()
{
int a,i;
printf("enter the value a");
scanf("%d",&a);
i=1;
while(a!=0)
{
i=a%10;
printf("%d",i);
a=a/10;
}

}
