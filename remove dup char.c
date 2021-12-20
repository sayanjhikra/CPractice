#include<stdio.h>


int main (){
    int i,s=0;
    char stri[30];
    printf("Enter string :");
    gets(stri);
   // scanf("%s",&stri);
    while(stri[s]!='\0'){
        s++;
    }
   // printf("%d",s);
    for(i=0;i<s;i++){
          if(stri[i]!='0'){
            for(int k=i+1;k<s;k++){
                if(stri[i]==stri[k]){
                        int m;
                    for(m=k;m<s;m++){
                        if(stri[m]=='0'){
                            break;
                        }
                        stri[m]=stri[m+1];
                    }
                       stri[m]='0';
                }
            }
          }
    }

    printf("%s",stri);
}
