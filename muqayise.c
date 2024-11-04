#include <stdio.h>
int mq (int a , int b)
{
    if (a>b)
    {
    printf("%d > %-10d", a , b);
    }
else if (a<b)
{
    printf("%d < %-10d", a , b);
}
else
{
    printf("%d = %-10d", a , b);
}
}               
int main()
    {
        mq(4 , 4 );
        return 0;
    }
     //READY
