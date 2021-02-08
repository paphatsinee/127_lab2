#include<stdio.h>
int main()
{
    char pro;
    float T,M,N,n,k;
    int t;
    scanf("%c",&pro);
    scanf("%f",&T);
    if(pro=='A')
    {
        if(T<200.00)
        M=199.00;
        else if(T>=200.00)
        {
            t=T;
            N=t%200;
            k=N*3.0;
            n=T-(200.00+N);
            n=3.0/(0.60/n);
            M=199.00+k+n;
        }

    }
    else if(pro=='B')
    {
        if(T<400.00)
        M=299.00;
        else if(T>=400.00)
        {
            t=T;
            N=t%400;
            k=N*2.0;
            n=T-(400.00+N);
            n=2.00/(0.60/n);
            M=299.00+k+n;
        }
    }
    printf("%.2f",M);
}
