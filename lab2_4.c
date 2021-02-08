#include<stdio.h>
int main()
{
    int d;
    char n,m=92;
    scanf("%c" ,&n);
    scanf("%d" ,&d);
    if(d%10==5)
    {
        printf("%c" ,m);
    }
    if(d%2==1)
    {
       if(n>=65&&n<=73)
       {
           printf("(^_^)");
       }
       else if(n>=74&&n<=82)
       {
           printf("(o)");
       }
       else if(n>=83&&n<=90)
       {
           printf("(TT)");
       }
    }

    return 0;
}
