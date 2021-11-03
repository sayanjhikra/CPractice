#include<stdio.h>

int main (){
    int i,n,o;

printf("Enter how many number you want to Enter:");
scanf("%d",&n);

int num[n];
int chk[n];

printf("Now enter numbers:");
for(i=0;i<n;i++){
    scanf("%d",& num[i]);
    chk[i]=0;
}
/*for(i=0;i<n;i++){
    if(num[i]>num[i+1]){
        num[i+1]=num[i];
    }
printf("Maximum number is: %d",num[n-1]);*/


int a=num[0];
int b=num[0];

for(i=1;i<n;i++){
    if(a<num[i]){
        a=num[i];
    }
}

for(i=1;i<n;i++){
    if(num[i]>b&&num[i]!=a){
        b=num[i];
    }
}
printf("Maximum number is: %d \n",a);

/*for(i=0;i<n;i++){
printf("%d,",b);
}*/
printf("Second Largest value is : %d \n",b);


}

