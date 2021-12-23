#include<stdio.h>


int main (){
    int i,k=0,s=0;
    char stri[100];
    printf("Enter Sentance :");
    gets(stri);
    while(stri[s]!='\0'){
        s++;
    }
   for(i=1;i<=s/2;i++){
        char c;
        c=stri[i-1];
        stri[i-1]=stri[s-i];
        stri[s-i]=c;
    }
    for (i=0;i<s+1;i++){
            if(stri[i]==' '||stri[i]=='\0'){
                    int m;
                for(m=1;m<=(i-k)/2;m++){
                    char c;
                    c=stri[(k+m)-1];
                    stri[(k+m)-1]=stri[i-m];
                    stri[i-m]=c;
                    }
                k=i+1;
            }
    }
    printf("%s",stri);
}
