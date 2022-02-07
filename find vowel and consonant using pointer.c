#include<stdio.h>

int main(){
char str[50];
char *pstr[50];
int i=0,v=0,c=0;

printf("enter sentance :");
gets(str);

while(str[i]!='\0'){
   pstr[i]=&str[i];
   i++;
}
pstr[i]=&str[i];
i=0;
while(*pstr[i]!='\0'){
        if(*pstr[i]!=' '){
    if(*pstr[i]=='a'||*pstr[i]=='e'||*pstr[i]=='i'||*pstr[i]=='o'||*pstr[i]=='u'){
        v++;
       }
       else{
        c++;
       }
    }
    i++;
}
printf("there are %d vowels and %d consonants.",v,c);
}
