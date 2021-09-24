#include<stdio.h>
int add();
int sub();
int mul();
int div();

int main(){
unsigned short int o=0,z=0;
   printf("--------WELCOME TO CALCULATOR--------\n");
   printf("for addition,       press 1 \n");
   printf("for subtraction,    press 2 \n");
   printf("for multiplication, press 3 \n");
   printf("for division,       press 4 \n");
   printf("----------------------------\n");
   printf("Enter your option: ");
   scanf("%d",&o);

   if (o==1){
         z=1;
    add();
   }
    if (o==2){
         z=1;
    sub();
   }
    if (o==3){
         z=1;
    mul();
   }
    if (o==4){
            z=1;
    div();
   }

 if(z==0){
        printf("----------------------------\n");
        printf("Please Correct your Option\n");
        printf("----------------------------\n");
     }

}

int add (){
    int n,m;
   printf("Enter your first number:");
   scanf ("%d",&n);
   printf("Enter your second number:");
   scanf("%d",&m);
    int a = (n+m);
    printf("----------------------------\n");
    printf("Addition of two number is:%d\n",a);
    printf("----------------------------\n");

return 0;
}

int sub (){
    int n,m;
   printf("Enter your first number:");
   scanf ("%d",&n);
   printf("Enter your second number:");
   scanf("%d",&m);
    int a = (n-m);
    printf("----------------------------\n");
    printf("Subtraction of two number is:%d\n",a);
    printf("----------------------------\n");

return 0;
}

int mul (){
    int n,m;
   printf("Enter your first number:");
   scanf ("%d",&n);
   printf("Enter your second number:");
   scanf("%d",&m);
    int a = (n*m);
    printf("----------------------------\n");
    printf("multiplication of two number is:%d\n",a);
    printf("----------------------------\n");

return 0;
}

int div (){
    int n,m;
   printf("Enter your first number:");
   scanf ("%d",&n);
   printf("Enter your second number:");
   scanf("%d",&m);
    int a = (n/m);
    if(n%m==0){
            printf("----------------------------\n");
            printf("Division of two number is:%d\n",a);
            printf("----------------------------\n");
    }
    else {
            printf("----------------------------\n");
            printf("%d cannot fully divided by %d \n",n,m);
            printf("----------------------------\n");
    }


return 0;
}
