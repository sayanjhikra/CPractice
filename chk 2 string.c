#include<stdio.h>

int main(){
    char fs[10],ss[10];
    int i=0,j=0,k=0;

    printf("Enter first string :");
    scanf("%s",&fs);

    printf("Enter second string :");
    scanf("%s",&ss);


    while(fs[i]!='\0'){
        i++;
    }
    while(ss[j]!='\0'){
        j++;
    }


    if(i==j){
            i=0;
        while(i!=j){
            if(fs[i]!=ss[i]){
                i=j;
                printf("This two string are not same");
            }
            else{
                k++;
                i++;
            }
        }
    }
    else{
        printf("This two string are not same");
    }
    if(k==j){
        printf("This two string are same");
    }
}
