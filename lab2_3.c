#include<stdio.h>
int main()
{
    int a,b,c,i,sort;
    char d[5];
    int e[5];
    scanf("%d %d %d" ,&a,&b,&c);
    if(a>b)
    {
        sort=a;
        a=b;
        b=sort;
    }
    return 0;
}
