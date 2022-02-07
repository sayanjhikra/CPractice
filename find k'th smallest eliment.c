#include<stdio.h>

int main(){
int arr[6];
int i=0,k,l;
int *parr[6],m;

printf("enter a number :");
while(i!=6){
scanf("%d",&arr[i]);
parr[i]=&arr[i];
i++;
}
printf("enter k'th number :");
scanf("%d",&k);

if(k<6){
    for(i=0;i<6;i++){
        for(l=i+1;l<6;l++){
            if(*parr[i]>*parr[l]){
                    m=parr[i];
                parr[i]=parr[l];
                parr[l]=m;
            l--;
            }
        }
    }

    printf("%dth smallest number in the arrey is : %d",k,*parr[k-1]);
}
else{
    printf("k is bigger than arrey size ");
}
}
