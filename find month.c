#include<stdio.h>


int main()
{
    int o=0,n,k=0,i,m;
    char data[12][2],s;

    printf("If you want to enter data press: 1\nIf you want show data press: 2\n: ");
    scanf("%d",&o);

    if(o==1)
    {
        for(i=0;i<12;i++){
                m=0;
            printf("Enter month number:");
            scanf("%d",&m);
            printf("Enter month name:");
            scanf("%c",&s);
            data[m][1]=s;
        }
                        main();

    }
    if(o==2)
    {
        printf("Enter which number you want enter to show month name: ");
        scanf("%d",&n);
        int a = 48+n;
        while(k=0)
        {
            i=0;
            if ( data[i][0]==a)
            {
                printf("%c",data[i][1]);
                k=1;
            }
        }
    }
}
