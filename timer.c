#include<stdio.h>
#include<conio.h>
#include"delay.h"
int main()
{
    int h=0,m=0,s=0,ms=0;
    int th,tm,ts,tms,t=1;
        while(t==1)
        {
            printf("Enter Hours:");
            scanf("%d",&th);
            printf("Enter Minute:");
            scanf("%d",&tm);
            printf("Enter Seconds:");
            scanf("%d",&ts);
            t--;
        }
    while (1)
    {
        delay(1);
        system("cls");
       s++;
        if (s==60)
        {
            s=0;
            m=m+1;
        }
        
        if (m==60)
        {
            m=0;
            h=h+1;
        }
        if(h>=24)
        {
            h = h - 24;
        }
        printf("Time :  ");  
        printf("%d : %d : %d : %d ",h,m,s,ms);
        if (h==th && m==tm && s==ts && ms==0)
        {
            printf("\nStop");
            return 0;
        }
        

    }
    
}
