#include<stdio.h>


int main(){
char sarr[5][10];
int i,j,m;

printf("Enter name :\n");
for(i=0;i<5;i++){
    gets(sarr[i]);
}
for(j=0;j<5;j++){
    for(i=1;i<5;i++){
            m=0;
        while(sarr[j][m]!='\0'){
            if(sarr[j][m]==sarr[i][m]){
                m++;
            }
            if(sarr[j][m]>sarr[i][m]){
                char stri[10];
                stri=sarr[j];
                sarr[j]=sarr[i];
                sarr[i]=stri;
            }
            else{
                break;
            }
        }
    }
}
}
