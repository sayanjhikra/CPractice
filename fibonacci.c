#include<stdio.h>

int main ()
{
    int  o,i,n=0,q=0,p=0,s=1;

    printf("Enter range of fib:");
    scanf("%d",&o);

    for(i=1; i<=o; i++)
    {
        if(i<=2)
        {
            n = n+q;
            q++;
            printf("%d,",n);
        }
        else
        {
            if(i%2==0)
            {
                n=n+s;
                s=n;
                printf("%d,",n);


            }
            if (i%2!=0)
            {
                n=n+p;
                p=n;
                printf("%d,",n);
            }


        }
    }

}
