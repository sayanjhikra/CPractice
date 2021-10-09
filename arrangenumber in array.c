#include<stdio.h>


int main()
{
    int num[5];
    int i,D,s=0;
    printf("Enter 5 numbers to arrange:\n");

    for (i=0; i<=4; i++)
    {
        scanf("%d",&D);
        num[i] = D;
    }
    while (s<4)
    {
        int f,g;
        s=0;
        if (num[0]<num[1])
        {
            f=num[0];
            g=num[1];
            num[0]=g;
            num[1]=f;
        }
        if (num[1]<num[2])
        {
            f=num[1];
            g=num[2];
            num[1]=g;
            num[2]=f;
        }
        if (num[2]<num[3])
        {
            f=num[2];
            g=num[3];
            num[2]=g;
            num[3]=f;
        }
        if (num[3]<num[4])
        {
            f=num[3];
            g=num[4];
            num[3]=g;
            num[4]=f;
        }



        if (num[0]>=num[1])
        {
            s++ ;
        }
        if (num[1]>=num[2])
        {
            s++ ;
        }
        if (num[2]>=num[3])
        {
            s++ ;
        }
        if (num[3]>=num[4])
        {
            s++ ;
        }

    }


    for (i=0; i<=4; i++)
    {
        printf ("%d,",num[i]);
    }


}
