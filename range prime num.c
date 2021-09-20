#include<stdio.h>

int n,m,v,i,j;



int main(){

  printf("Find prime number from :");
  scanf("%d",&n);

  printf("Find prime number to :");
  scanf("%d",&m);

  printf("Answer :");

    for(v=n;v<=m;v++){
            j= v/2;
        for(i=2;i<=j;i++){
            if((v%i)==0){

                 break;}}
            if(i>j) {
                printf("%d,",v);}

    }


}
