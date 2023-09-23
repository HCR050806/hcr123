#include <stdio.h>
int main()
{
int a =0;
int b =0;
int c =0;
printf("请依次输入：第几层有人等候电梯 乘客目的楼层 电梯初始位置\n");
scanf("%d %d %d",&a,&b,&c);
printf("好的，接下来将为您按照电梯当前层数 电梯运行时间 电梯内人数的顺序为您展现电梯运行过程\n");
int d=c;
if(a>b)
{
if(a<c)
{
    while(c>a)
    {
        int e = d-c;
        printf("%d %d 0\n",c,e);
        c=c-1;
    };
    while(c<=a&c>b)
    {
        int e =d-c;
        printf("%d %d 1\n",c,e);
        c=c-1;
}
if(c==b)
{
    int e=d-c;
    printf("%d %d 0\n",c,e);
}
}
else
{
    while(c<a)
    {
        int e =c-d;
        printf("%d %d 0\n",c,e);
        c=c+1;
    };
    
    while(c<=a&c>b)
  
    {
        int f =2*a-d-c;
        printf("%d %d 1\n",c,f);
        c=c-1;
    }
    if(c==b)
    {
        int f =2*a-d-c;
        printf("%d %d 0\n",c,f);
    }
}
}
else
{
    if(a<c)
{
    while(c>a)
    {
        int e = d-c;
        printf("%d %d 0\n",c,e);
        c=c-1;
    };
    while(c>=a&c<b)
    {
        int f =d+c-2*a;
        printf("%d %d 1\n",c,f);
        c=c+1;
}
if(c==b)
{
    int f=d+c-2*a;
    printf("%d %d 0\n",c,f);
}
}
else
{
    while(c<a)
    {
        int e =c-d;
        printf("%d %d 0\n",c,e);
        c=c+1;
    };
    
    while(c>=a&c<b)
  
    {
        int f =2*a-d-c;
        printf("%d %d 1\n",c,f);
        c=c-1;
    }
    if(c==b)
    {
        int f =2*a-d-c;
        printf("%d %d 0\n",c,f);
    }
}
}
return 0;
}