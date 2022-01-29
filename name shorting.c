#include<stdio.h>


int main(){
char sarr[5][10];
int i,j,m;

printf("Enter name :\n");
for(i=0;i<5;i++){
    gets(sarr[i]);
}
for(j=0;j<5;j++){
    for(i=j+1;i<5;i++){
            m=0;
        while(sarr[j][m]!='\0'){
            if(sarr[j][m]==sarr[i][m]){
                m++;
            }
            if(sarr[j][m]>sarr[i][m]){
                char s[10];
                int p=0;
                while(sarr[j][p]!='\0'){
                    s[p]=sarr[j][p];
                    sarr[j][p]='\0';
                    p++;
                }
                p=0;
                while(sarr[i][p]!='\0'){
                    sarr[j][p]=sarr[i][p];
                    sarr[i][p]='\0';
                    p++;
                }
                p=0;
                while(s[p]!='\0'){
                    sarr[i][p]=s[p];
                    p++;
                }
                j=0;
             break;
            }
            else{
                break;
            }
        }
    }
}
for(i=0;i<5;i++){
    printf("%d. %s\n",i+1,sarr[i]);
}
}
