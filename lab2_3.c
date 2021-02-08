#include<stdio.h>
int main()
{
    int A,B,C;
    char a,b,c;
    scanf("%d %d %d",&A,&B,&C);
    scanf("%c%c%c",&a,&b,&c);
    if(0<A<=100 && 0<B<=100 && 0<C<=100)
    {
        a=A;
        b=B;
        c=C;
        printf("%d %d %d");
    }
}
