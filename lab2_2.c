#include<stdio.h>
int main()
{
    char pro;
    float T,M,N,n;
    int t,k=0;
    scanf("%c",&pro);
    scanf("%f",&T);
    if(pro=='A')
    {
        if(T<=200)
        M=199;
        else if(T>200)
        {
            t=T;
            N=t%200;
            k=N*3;
            n=T-(200+N);
            n=(1/n)*n;
            M=199+k+n;
        }

    }
    else if(pro=='B')
    {
        if(T<=400)
        M=299;
        else if(T>400)
        {
            t=T;
            N=t%400;
            k=N*2;
            n=T-(400+N);
            n=(1/n)*n;
            M=299+k+n;
        }
    }
    printf("%.2f",M);
}
