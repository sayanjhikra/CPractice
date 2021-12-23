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
        if(stri[i-1]!=stri[s-i]){
              break;
        }
     }
     if(i-1==s/2){
        printf("'%s' is a palindrome string.",stri);
     }
     else{
        printf("'%s' is not a palindrome string.",stri);
     }
}
