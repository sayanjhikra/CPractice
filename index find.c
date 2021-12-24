#include<stdio.h>


int main ()
{
    int i=0;
    char stri[100],srh[40];
    printf("Enter Sentance :");
    gets(stri);
    printf("Enter word :");
    scanf("%s",&srh);

    while(stri[i]!='\0')
    {
        if(stri[i]==' '||i==0)
        {
            int s=1,j=0,p=0;
            if(i!=0)
            {
                p=i+1;
            }

            while(srh[s-1]!='\0')
            {
                if(srh[s-1]!=stri[(p+s)-1])
                {
                    j=1;
                    break;
                }
                s++;
            }
            if (stri[p+s-1]==' '||stri[p+s-1]=='\0')
            {
                j=0;
            }
            else
            {
                j=1;
            }
            if(j==0)
            {
                printf("'%s' is found at index: %d\n",srh,p);
            }
        }

        i++;
    }
}
