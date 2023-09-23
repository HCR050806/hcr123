#include <stdio.h>
int main()
{int a[11];
int b[11];
int i=0;
int f=0;
int h=0;
int c=0;
int g=0;
int e=0;
for (i=0;i<=10;i++)
{
   printf("From F%d?\n",i);
   scanf("%d",&a[i]);
}//输入等待乘客位置并储存
do
{
for(c=1;c<10;c++)
{
         f=f-b[c];
         b[c]=0;//抵达目的地乘客出电梯     
   if(f+a[c]<=4)
   {
      f=f+a[c];
      e=a[c];
      a[c]=0;     
      for(e=e;e>0;e--)
      {
         printf("To F");
         scanf("%d",&g);
         b[g]++;
      }   //乘客输入目的楼层并储存     
      printf("%d %d %d\n",c,h,f);      
   }//电梯不超载可以满足乘坐需求
   else
   {
      a[c]=a[c]+f-4;
      e=4-f;
      f=4;     
      for(e=e;e>0;e--)
      {
         printf("To F");
         scanf("%d",&g);
         b[g]++;
      }
      printf("%d %d %d\n",c,h,f);      
   }//电梯无法满足乘客需求
h++;
}
for(c=10;c>1;c--)
{
         f=f-b[c];
         b[c]=0;//抵达目的地乘客出电梯     
   if(f+a[c]<=4)
   {
      f=f+a[c];
      e=e+a[c];
      a[c]=0;     
      for(e=e;e>0;e--)
      {
         printf("To F");
         scanf("%d",&g);
         b[g]++;
      }   //乘客输入目的楼层并储存     
      printf("%d %d %d\n",c,h,f);      
   }//电梯不超载可以满足乘坐需求
   else
   {
      a[c]=a[c]+f-4;
      e=e+4-f;
      f=4;     
      for(e=e;e>0;e--)
      {
         printf("To F");
         scanf("%d",&g);
         b[g]++;
      }
      printf("%d %d %d\n",c,h,f);      
   }//电梯无法满足乘客需求
   h++;
}
}
while(a[1]!=0&a[2]!=0&a[3]!=0&a[4]!=0&a[5]!=0&a[6]!=0&a[7]!=0&a[8]!=0&a[9]!=0&a[10]!=0);
}


