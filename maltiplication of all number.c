#include<stdio.h>

int main(){
int arr[4],ans[4],i,k,m;
printf("enter numbers :");
for(i=0;i<4;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<4;i++){
    m=arr[i];
    arr[i]=1;
    ans[i]=arr[0];
    for(k=1;k<4;k++){
        ans[i]=ans[i]*arr[k];
    }
    arr[i]=m;
}
for(i=0;i<4;i++){
    printf("%d,",ans[i]);
}
}
