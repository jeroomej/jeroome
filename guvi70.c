#include <stdio.h>
#include<math.h>

int main(void)
{
    int a,b,c,i,d;
    printf("enter the number");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        b=pow(2,i);
        if(b>a)
        {
            c=i;
            break;
        }
    }
    d=pow(2,c);
    printf("the nearest power of two of given number is %d",d);
    
        }
