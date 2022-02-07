#include<stdio.h>

int main(){
int arr[3];
int i=0,k,l;
int *parr[3],m;

printf("enter a number :");
for(i=0;i<3;i++){
scanf("%d",&arr[i]);
parr[i]=&arr[i];
}
for(i=0;i<3;i++){
        for(l=i+1;l<3;l++){
            if(*parr[i]>*parr[l]){
                    m=parr[i];
                parr[i]=parr[l];
                parr[l]=m;
            l--;
            }
        }
    }
    for(i=1;i<3;i++){
        if(*parr[i]!=*parr[0]+i){
            printf("Missing number is %d",*parr[0]+i);
            break;
        }
    }
}
