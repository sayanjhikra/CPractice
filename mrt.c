#include<stdio.h>
int shop(int,int),store(int,int);

int main(){
int inv=1000,mq=1000;

while(1){
if(inv>0){
printf("%d items avialable\n",inv);
inv=shop(inv,mq);
}
else{
printf("Product Sold Out\n");
break;

}
}
}

int shop(int inv,int mq){
int pq;

printf("Enter Purchasing Quantity :");
scanf("%d",&pq);
inv=inv-pq;
if(inv<=mq*.25){
printf("place 75percent order in store\n");
inv=inv+store(mq-inv,mq);
}
if(inv<=mq*.50 && inv>mq*.25){
printf("send alart to store\n");
store(mq-inv,mq);
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
}
else{
dq=0;
}
printf("%d\n",dq);
return dq;
}
