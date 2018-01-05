#include <stdio.h>

void bin8bdis(char data)
{
    int i=8;
    while(i--)
    {
        if(data&(1<<i))
            printf("1");
        else
            printf("0");
        if(i%8==0)
            printf("");
        else if(i%4==0)
            printf("-");
    }
    putchar(10);
}
void bin32bdis(int data)
{
    int i=32;
    while(i--)
    {
        if(data & (1<<i))
            printf("1");
        else
            printf("0");
        if(i%4==0) {
            if(i%8==0)
                printf(" ");
            else
                printf("-");
        }
    }
    putchar(10);
}
int main()
{
   int a=0xff000000;
   bin32bdis(a);
   bin32bdis(a<<1);
   bin32bdis(a<<2);
   bin32bdis(a<<33);

}

int main2()
{
    //相异者或 为1，相同者 为0
    int a=0x55;
    int b=0xff;
    bin32bdis(a);
    bin32bdis(b);
    bin32bdis(a^b);

}
int main1()
{
    int a=0x55;
    int b=0;
    bin32bdis(a);
    bin32bdis(b);
    bin32bdis(a&b);
    bin32bdis(a|b);
    putchar(10);
    bin32bdis(a);
    bin32bdis(~a);
    bin32bdis(~0);
    return 0;
}
