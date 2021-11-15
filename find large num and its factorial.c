#include<stdio.h>
int max(int num[]),fact(int);


int main () {
    int i, num[10], c;
    printf("Enter 10 numbers");
    for (i=0;i<10;i++){
        scanf("%d",&num[i]);
        }


    c = max(num);
    int z = fact(c);
    printf("Factorial of maximumnumber is %d",z);
}

int max(int num[]){
    int a=num[0],i;
    for (i=1;i<10;i++){
        if(a<num[i]){
            a=num[i];
        }
    }
    return a;
}

int fact(c){
    int m=1,i;
    for(i=2;i<=c;i++){
        m=m*i;
    }
    return m;
}


