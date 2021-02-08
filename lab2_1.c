#include<stdio.h>
int main()
{
    int a,b,c,sum;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(0<=a<=30 && 0<=b<=30 && 0<=c<=40)
    {
        sum=a+b+c;
        if(sum>=0&&sum<=100)
        {
            if(sum>=80)
            printf("A");

            else if(sum>=75)
            printf("B+");

            else if(sum>=70)
            printf("B");

            else if(sum>=65)
            printf("C+");

            else if(sum>=60)
            printf("C");

            else if(sum>=55)
            printf("D+");

            else if(sum>=50)
            printf("D");

            else
            printf("F");
        }
    }

    return 0;
}
