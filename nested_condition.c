#include<stdio.h>
#include<stdbool.h>
int main(void){

    int age;
    bool nid = false;
    bool passport = false;
    printf("Please Enter Your Age(e.g. 18+): ");
    scanf("%d",&age);
    
    if(age >= 18){
      if(nid || passport){
        printf("You are welcome to dark world.\n");
      }else{
        printf("You are not welcome to dark world.\n");
      }
    }else{
       printf("You are not Allowed.Because of your age below 18\n",age);
    }


    return 0;
}