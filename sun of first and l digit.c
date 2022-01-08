#include<stdio.h>
int cal(int),i=1,s;

int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    cal(n);
}
int cal(int n){
    int z;
    if(n>10){
        z=n%10;
        n=n/10;
        if(i==2){
            s=z;
        }
        i++;
        cal(n);
    }
    else {
        printf("sum is :%d",s+n);
    }
}
