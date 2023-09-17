#include<stdio.h>
int main()
{
int S1,S2,S3,S4,S5,per;
printf("enter te value of S1,S2,S3,S4,S5 :");
scanf("%d%d%d%d%d",&S1,&S2,&S3,&S4,&S5);
per=(S1+S2+S3+S4+S5)/5;
if(per>=70)
{
printf("distinct");
}
else if(per>=60)
{
printf("first class");
}
else if(per>=50)
{
printf("second class");
}
else if(per>=40)
{
printf("just pass");
}
else
{
printf("fail");
}
}






