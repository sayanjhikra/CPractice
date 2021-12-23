#include<stdio.h>


int main (){
    int i,k=0,s=0,w=0;
    char stri[100],srh[20];
    printf("Enter string :");
    gets(stri);
    printf("Enter string :");
    scanf("%s",&srh);
    while(stri[s]!='\0'){
        s++;
    }
     while(srh[w]!='\0'){
        w++;
    }

     for (i=0;i<s+1;i++){
        if(stri[i]==' '||stri[i]=='\0'){
              if (i-k==w){
                 int m;
                for(m=0;m<w;m++){
                   if(srh[m]!=stri[k+m]){
                    break;
                    }
                }
                if(m==w){
                   printf("'%s' is found at index: %d\n",srh,k);
                }
             }
            k=i+1;
        }
    }
}
