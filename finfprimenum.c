#include<stdio.h>

int main (){

  int num = 22;
  scanf("%d", &num);
  int m = num/2;
  int i ;

  for(i = 2 ; i<= m  ; i++){
  if(num%i == 0){
    printf("%d is not a prime number", num);
    break;
  }
  else
    printf("%d is a prime number", num);
  }
}
