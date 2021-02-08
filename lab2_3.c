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
    if(a>c)
    {
        sort=a;
        a=c;
        c=sort;
    }
    if(b>c)
    {
        sort=b;
        b=c;
        c=sort;
    }
    scanf("%s" ,d);
    for(i=0;i<3;i++)
    {
        if(d[i]=='A')
        {
            e[i]=a;
        }
        else if(d[i]=='B')
        {
            e[i]=b;
        }
        else if(d[i]=='C')
        {
            e[i]=c;
        }
    }
    printf( "%d %d %d", e[0], e[1], e[2] );
    return 0;
}
