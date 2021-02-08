#include<stdio.h>
int main()
{
    char pro;
    float T,M,N;
    scanf("%c",&pro);
    scanf("%f",&T);
    if(pro=='A')
    {
        if(T<=200)
        M=199;
        else if(T>200)
        {
            N=T-200;
            N=N*3;
            M=199+N;
        }

    }
    printf("%.2f",M);
}
