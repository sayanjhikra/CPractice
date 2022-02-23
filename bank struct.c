#include<stdio.h>

struct bank {
    int account_no;
    char name[20];
    int balance;
};

int main(){
    int i, ac, am, o=2;
struct bank b[3];

printf("Enter a/c holder details");
for(i=0;i<3;i++){
    scanf("%d %s %d",&b[i].account_no, &b[i].name, &b[i].balance);
}

for(i=0; i<3; i++){
    if(b[i].balance < 100){
        printf("\n account no = %d \n name = %s\n\n", &b[i].account_no, &b[i].name);
    }
}
printf("=======Banking========");
printf("for withdrawal press - 0 \nfordeposite press - 1\n->");
scanf("%d", &o);
printf("Enter account no ->");
scanf("%d", &ac);
printf("Enter amount ->");
scanf("%d",&am);


for(i=0; i<3; i++){
    if(b[i].account_no== ac){
        if(o==0)
           if (b[i].balance-am >100) {
             b[i].balance = b[i].balance - am;
           }
           else
           {
               printf("The balance is insufficient for the specific withdrawal");

           }
        }
        if(o==1)
            b[i].balance = b[i].balance + am;
        }

}
