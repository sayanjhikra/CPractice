#include<stdio.h>

int main ()
{
    int i,n,o;

    printf("Enter how many number you want to Enter:");
    scanf("%d",&n);

    int num[n];
    int chk[n];

    printf("Now enter numbers:");
    for(i=0; i<n; i++)
    {
        scanf("%d",& num[i]);
        chk[i]=0;
    }


    int a=num[0];
    int b=num[0],m=0;
    chk[0]=1;

    for(i=1; i<n; i++)
    {
        if(a<num[i])
        {
            a=num[i];

            chk[m]=0;
            chk[i]=1;
            m=i;

        }
    }

    for(i=1; i<n; i++)
    {
        if(num[i]>b&&num[i]!=num[m])
        {
            b=num[i];
        }
    }
    printf("Maximum number is: %d \n",num[m]);

    /*for(i=0;i<n;i++){
    printf("%d,",chk[i]);
    }*/
    printf("Second Largest value is : %d \n",b);


}

