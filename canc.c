#include <stdio.h>

int main()
{
    int i,age,h[10000],c=0,j,t;
   // printf("Hello World!\n");
   scanf("%d",&age);
   for(i=0;i<age;i++)
   {
   	scanf("%d",&h[i]);
   }
   for(i=0;i<age-1;i++)
   {
       for(j=0;j<age-i-1;j++)
       {
            if(h[j]<h[j+1])
            {
                    t=h[j];
                    h[j]=h[j+1];
                    h[j+1]=t;
            }
       }
   }
   t=h[0];
   for(i=0;i<age;i++)
   {	//printf("%d ",h[i]);
       if(t==h[i])
        c++;
   }
   printf("%d",c);
    return 0;
}
