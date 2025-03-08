#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

    /*
    1. bigger Number two input using if else condition
    */
//    float a,b;
//    printf("Please enter your two number: ");
//    scanf("%f%f",&a,&b);
//    if(a>b){
//      printf("%.2f is greater than %.2f\n",a,b);
//    }else if(a<b){
//      printf("%.2f is less than %.2f\n",a,b);
//    }else{
//     printf("%.2f is equal to %.2f\n",a,b);
//    }
     
     /*
      1. bigger Number two input using switch case statement
     */

    //  float first_num,second_num;
    //  int comparison;
    //  printf("Please Enter your two number: ");
    //  scanf("%f%f",&first_num,&second_num);
    //  if(first_num>second_num){
    //   comparison = 1;
    //  }else if(first_num<second_num){
    //   comparison = -1;
    //  }else{
    //     comparison = 0;
    //  }


    //  switch (comparison)
    //  {
    //  case 1:
    //     printf("%.2f is greater than %.2f\n",first_num,second_num);
    //     break;
    //  case -1:
    //     printf("%.2f is less than %.2f\n",first_num,second_num);
    //     break;
    //  case 0:
    //     printf("%.2f is equal %.2f\n",first_num,second_num);
    //     break;
     
    //  default:
    //     printf("Invalid Input");
    //  }

    /*
    2. bigger Number three input using if else condition
    */
//    float x,y,z;
//    printf("Enter value of x: ");
//    scanf("%f",&x);

//    printf("Enter value of y: ");
//    scanf("%f",&y);

//    printf("Enter value of z: ");
//    scanf("%f",&z);
   
//    if(x>y && x>z){
//     printf("%.2f is greater than %.2f and %.2f\n",x,y,z);
//    }else if(y>x && y>z){
//      printf("%.2f is greater than %.2f and %.2f\n",y,x,z);
//    }else if(z>x && z>y){
//      printf("%.2f is greater than %.2f and %.2f\n",z,x,y);
//    }else{
//     printf("All value is equal.\n");
//    }

      /*
      3. Even or Odd using if else condition
      */

    //  int a;
    //  printf("Enter your expected value: ");
    //  scanf("%d",&a);
    //  if(a%2==0){
    //     printf("%d is a Even Number\n",a);
    //  }else{
    //     printf("%d is a Odd Number\n",a);
    //  }

      /*
      4. user input any number or character to show this number or character is a what using if else condition
      */
    //  char ch;
    //  printf("Enter Your Character: ");
    //  scanf("%c",&ch);
    //  if(ch>=48 && ch<=57){
    //     printf("%c is a number\n",ch);
    //  }else if(ch>=65 && ch<=90){
    //     printf("%c is a Uppercase Letter\n",ch);
    //  }else if(ch>=97 && ch<=122){
    //     printf("%c is a Lowercase Letter\n",ch);
    //  }else{
    //     printf("Special case.\n");
    //  }

    //  char chr;
    //  printf("Enter Your Character: ");
    //  scanf("%c",&chr);
    //  if(chr>='A' && chr<='Z'){
    //    printf("%c is convert to- %c\n",chr,chr+32);
    //  }else if(chr>='a' && chr<='z'){
    //     printf("%c is convert to- %c\n",chr,chr-32);
    //  }else{
    //     printf("That is invalid character.\n");
    //  }


     /*
      3. leap year using if else condition
      */
      
    //   int year = 1900;
    //   int is_leap_year = 1;

    //   if(year % 4 == 0){
    //      if(year % 100 == 0){
    //         if(year % 400 == 0){
    //             is_leap_year = 1;
    //         }else{
    //             is_leap_year = 0;
    //         }
    //      }else{
    //         is_leap_year = 1;
    //      }
    //   }else{
    //     is_leap_year = 0;
    //   }

    //   if(is_leap_year){
    //     printf("%d is a leap year\n",year);
    //   }else{
    //     printf("%d is not a leap year\n",year);

    //   }

    // int year;
    // int isLeapyear;
    // printf("please enter the year: ");
    // scanf("%d",&year);

    // if(year % 4 ==0){
    //   if(year%100==0){
    //         if(year%400==0){
    //            isLeapyear = 1;
    //         }else{
    //            isLeapyear = 0;
    //         }
    //   }else{
    //     isLeapyear = 1;
    //   }
    // }else{
    //    isLeapyear = 0;
    // }

    // if(((year%4==0) && (year%100!=0)) || (year%400==0)){
    //     isLeapyear = 1;
    // }else{
    //     isLeapyear = 0;
    // }

    // if(isLeapyear){
    //    printf("this year is leap year.\n",year);
    // }else{
    //     printf("this year is not leap year.\n",year);
    // }

     /*
      4. Pick lucky number
     */
    
    //  const int numb = 6;
    //  int guess_numb;
    //  printf("Enter your guessing number: ");
    //  scanf("%d",&guess_numb);
    //  if(numb == guess_numb){
    //    printf("you Won.\n");
    //  }else{
    //     printf("you Loss.\n");
    //  }

     /*
       right program above this program     
     */
     
    //  int picked_number,given_number;
    //  time_t t;
    //  srand((unsigned)time(&t));
    //  picked_number = rand() % 10 + 1;

    //  printf("Enter you lucky number: ");
    //  scanf("%d",&given_number);
     
    //  if(given_number == picked_number){
    //     printf("You Win\n");
    //  }else{
    //     printf("You lose.picked number is %d",picked_number);
    //  }

    /*
       w3 school problem solved    
    */
   /*
    1.Open a door
   */
   
//    const short pass = 1589;
//    short password;
//    printf("Please Enter your valid password(e.g., ....): ");
//    scanf("%hd",&password);
//    if(password == pass){
//       printf("Welcome to your home.\n");
//    }else{
//     printf("Invalid password.please try again\n");
//    }

    /*
    2. positive number or negative number
    */
//    short x;
//    printf("Enter your expression: ");
//    scanf("%hd",&x);
//    if(x>0){
//      printf("%hd is a positive number.\n",x);
//    }else if(x<0){
//      printf("%hd is a negative number.\n",x);
//    }else{
//     printf("Your value is zero\n");
//    }


     /*
      Scholarhut problem     
     */
    // 1

    // int a = 20;
    // int b = 15;

    // if(a>b){
     
    //  if(a % 2 == 0){
    //     printf("%d is Even number\n",a);
    //  }else{
    //     printf("%d is Odd number\n",a);
    //  }

    // }else{

    //     printf("%d is not greater than %d\n",a,b);
    // }

   int a = -4;
   double b = 29.42;
   int c = a? printf("True value : %lf",b):printf("False value : 0");

    return 0;
}

/*
leap year condition-
1.Must be devisable by 4
2.If a century year like-1900,1000,1800,1700 etc. It will not leap year
3.If year is a century year and it is divisable by 400 is a leap year.
4.Otherwise its not a leap year 
*/