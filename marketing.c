#include<stdio.h>
int chicken(int);
int oil(int);
int potato(int);

int main(){
 unsigned short int ma;

printf("Enter amount for marketing:");
scanf("%d",&ma);
//int ck = chicken(ma);
   ma = ma-chicken(ma);
   ma = ma-oil(ma);
   ma = ma-potato(ma);
  printf("remaining amount Rs%d",ma);

}

int chicken (ma){

    if (300<=ma){
         int ra = (ma-300);
        printf("purchased chicken @Rs 300\n");
            return 300;
        }


}

int oil(ma){
    if (200<=ma){
         int ra = (ma-200);
        printf("purchased oil @Rs 200\n");
            return 200;
        }
}

int potato(ma){
    if (100){
      int ra = (ma-200);
      printf("purchased potato @rs 100\n");
      return 100;
    }
}
