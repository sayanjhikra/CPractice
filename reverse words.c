#include<stdio.h>


int main (){
    int i,s=0;
    char stri[40];
    printf("Enter Word :");
    scanf("%s",&stri);
    while(stri[s]!='\0'){
        s++;
    }

    for(i=1;i<=s/2;i++){
        char c;
        c=stri[i-1];
        stri[i-1]=stri[s-i];
        stri[s-i]=c;
    }
    printf("%s",stri);
}
