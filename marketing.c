#include<stdio.h>
int chicken(int),oil(int),potato(int);
//int oil(int);
//int potato(int);

int main(){
 unsigned short int ma;

printf("Enter amount for marketing:");
scanf("%d",&ma);
//int ck = chicken(ma);
   ma = chicken(ma);
   ma = oil(ma);
   ma = potato(ma);
  printf("remaining amount Rs%d",ma);

}

int chicken (ma){

    if (ma>=300){
         int ra = (ma-300);
        printf("purchased chicken @Rs 300,\n");
            return ra;
        }
    else {
        printf("Amount is not sufficient to buy chicken,\n");
        return ma;
    }

}

int oil(ma){
    if (ma>=200){
         int ra = (ma-200);
        printf("purchased oil @Rs 200,\n");
            return ra;
        }
        else{
        printf("Amount is not sufficient to buy oil,\n");
        return ma;
        }
}

int potato(ma){
    if (ma>=100){
      int ra = (ma-100);
      printf("purchased potato @rs 100,\n");
      return ra;
    }
        else{
        printf("Amount is not sufficient to buy potato,\n");
        return ma;
             }
}
