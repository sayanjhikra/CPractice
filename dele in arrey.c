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


    int a=num[0],b,c,q,m=0;

    chk[0]=1;

    for(i=1; i<n; i++)
    {
        if(a<num[i])
        {
            b=a;
            a=num[i];

            chk[m]=0;
            chk[i]=1;
            m=i;

        }
        else{
            b=num[i];
        }
        if(i==1){
            c=b;
        }
        if(b>c&&i>1){
            c=b;
        }
    }



    printf("Maximum number is: %d \n",num[m]);

    /*for(i=0;i<n;i++){
    printf("%d,",chk[i]);
    }*/
    printf("Second Largest value is : %d \n",c);
     printf("Now Enter which location number you want to delete:");
     scanf("%d",q);
     nun[q-1]=NULL;

}

