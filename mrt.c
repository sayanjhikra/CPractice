#include<stdio.h>
int shop(int,int),store(int,int);

int main(){
int inv[4],mq=1000,i,c;
//char nam();

for(i=0;i<4;i++){
inv[i]=1000;
}
while(1){
printf("================SMART SHOP===============\n");
printf("sope(1) shampo(2) toothpast(3) handwash(4)\n");
printf("Enter what you want to buy :");
scanf("%d",&c);
if(c<5&&c>0){
inv[c-1]=shop(inv[c-1],mq);
}
else{
printf("Enter option is not valid. plese enter right one\n");
}
}
}

int shop(int inv,int mq){
int m,pq,i=1;
char o;

while(i==1){
if(inv>0){
printf("%d items avialable\n",inv);

printf("Enter Purchasing Quantity :");
scanf("%d",&pq);
if(pq<=inv){
i++;
inv=inv-pq;
printf("%d items purchased\n",pq);
if(inv<=mq*.25){
printf("place 75percent order in store\n");
inv=inv+store(mq-inv,mq);
}
if(inv<=mq*.50 && inv>mq*.25){
printf("send alart to store\n");
store(mq-inv,mq);
}
}
else{
printf("Entered quantity excid our availability\n");
}
}

else{
printf("Product Sold Out\n");
}
if(inv>0){
m=1;
printf("Do you want to buy more. press 'y' else press 'n':");
while(m==1){
scanf("\n%c",&o);
if(o=='y'||o=='n'){
if(o=='y'){
i--;
m++;
}
if(o=='n'){
m++;
}
}
else{
printf("Only press 'y'-YES and 'n'-NO:");
}
}
}
}
return inv;
}


int store(int oq,int mq){
int dq;
printf("%d\n",oq);
if(oq<=mq*.50){
printf("we are preparing for delivery\n");
}

if(oq>=mq*.75){
printf("Ordered items send \n");
dq=oq;
printf("%d\n",dq);
}
else{
dq=0;
}
//printf("%d\n",dq);
return dq;
}
