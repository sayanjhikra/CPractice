#include<stdio.h>

int main()
{
    int s=0,i,p;
    char stri[30];
    printf("Enter string :");
    gets(stri);
    while(stri[s]!='\0')
    {
        s++;
    }
    i=s;
      while(stri[i]==' ')
    {
        stri[i]='0';
        i--;
    }
    i=0;
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
    }
    printf("%s",stri);
   /*  while(stri[p]!='\0')
    {
        p++;
    }
    printf("%d",p);*/
}
