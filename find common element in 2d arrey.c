#include<stdio.h>

int main(){
int arr[4][5];
int i,k,l,p,m=0;

for(k=0;k<4;k++){
printf("enter %d row numbes:",k+1);
for(i=0;i<5;i++){
    scanf("%d",&arr[k][i]);
}
}
for(i=0;i<5;i++){
        p=0;
    for(k=1;k<4;k++){
        for(l=0;l<5;l++){
                if(arr[0][i]==arr[k][l]){
                    p++;
                   break;
                }

        }
        if(k==3&&p==3){
            printf("Common element is %d",arr[0][i]);
            m++;
        }
    }
    if(i==4&&m==0){
        printf("no common element found");
    }
  }
}
