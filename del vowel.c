#include<stdio.h>

int main()
{
    int s=0,i,p;
    char stri[100];
    printf("Enter string :");
    gets(stri);
    while(stri[s]!='\0')
    {
        s++;
    }

      for(i=0;i<=s;i++)
    {
        if(stri[i]=='a'||stri[i]=='e'||stri[i]=='i'||stri[i]=='o'||stri[i]=='u'){
        stri[i]='0';
        i++;

    }
    }
   /* i=0;
    while(stri[i]==' ')
    {
        int m;
        for(m=i; m<s; m++)
        {
            if(stri[m]=='0')
            {
                break;
            }
            stri[m]=stri[m+1];
        }
        stri[m]='0';
    }*/
    printf("%s",stri);

}
