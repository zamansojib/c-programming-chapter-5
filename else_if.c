#include<stdio.h>
int main(void){

    /*
    structure in if condition
    */
//    if (condition)
//    {
//     /* code */
//    }

//   if(1){
//     printf("I wil execute\n");
//   }

//   if(0){
//     printf("I wil never execute\n");
//   }

//   int a = 50;
//   int b = 30;

//   if(a>b){
//     printf("a is the elder brother\n");
//   }
   
//   if(a<b){
//      printf("b is the elder brother\n");

//   }
//  if(a>b){
//     printf("a is the elder brother\n");
//  }else{
//     printf("b is the elder brother\n");
//  }

//  int p = 15;
//  int q = 15;
//  if(p>q){
//     printf("P is greater than q\n");
//  }else{
//     if(p<q){
//         printf("q is greater than p\n");
//     }else{
//         printf("They are twin\n");
//     }
//  }
//  Above example is called Nested condition
/*
This proble is solved by easy way. so we C provide us Else if condition
*/

// short x = 10;
// short y = 10;
// if(x>y){
//     printf("X is greater than y\n");
// }else if(x<y){
//     printf("Y is greater than X\n");
// }else{
//     printf("They are Twin\n");
// }


//  char color_code;
//  printf("Enter Your Code: ");
//  scanf("%c",&color_code);
//  if(color_code == 'G'){
//     printf("Your color is Green\n");
//  }else if(color_code == 'R'){
//     printf("Your color is Red\n");
//  }else if(color_code == 'B'){
//     printf("Your color is Blue\n");
//  }else{
//     printf("Your color is Wrong\n");
//  }

//    float m,n,c,d,e,f,g;
//    char operator;
//    printf("Enter Your Two Value: ");
//    scanf("%d %c %d",&m,&operator,&n);
//    c = m + n;
//    d = m - n;
//    e = m * n;
//    f = m / n;
//    if(m+n){
//     printf("your addition: %f",m+n);
//    }

    //  create a calculator

    // float a,b;
    // char operators;

    // printf("Enter an expression (e.g.,3+5): ");
   
    // if(scanf("%f%c%f",&a,&operators,&b) !=3){
    //  printf("Invalid Input Format.Please use the format a+b,a-b,a*b,a/b\n");
      
    //   return 0; 
    // }

    // if(operators == '+'){
    //     printf("Result: %.2f\n",a+b);
    // }else if(operators == '-'){
    //     printf("Result: %.2f\n",a-b);
    // }else if(operators == '*'){
    //     printf("Result: %.2f\n",a-b);
    // }else if(operators == '/'){
    //     if(b!=0){
    //          printf("Result: %.2f\n", a / b);
    //     }else{
    //          printf("Error: Division by zero is not allowed.\n");
    //     }

    // }else{
    //      printf("Invalid operator. Please use +, -, *, or /.\n");
    // }
   

   float a,b,c,d,e,f;
   char operators;
   
   printf("Enter your expression (e.g.,5+8): ");
   
//    if(scanf("%f%c%f",&a,&operators,&b) != 3){
//    printf("Invalid Input Format.Please Use the format a+b,a-b,a*b,a/b");

//    return 1;
//    }
    scanf("%f%c%f",&a,&operators,&b);
    
   c = a+b;
   d = a-b;
   e = a*b;
   f = a/b;
   if(operators == '+'){
    printf("Result: %.2f\n",c);
   }else if(operators == '-'){
    printf("Result: %.2f\n",d);
   }else if(operators == '*'){
    printf("Result: %.2f\n",e);
   }else if(operators == '/'){
    if(b!=0){
     printf("Result: %.2f\n",f);
    }else{
         printf("Error: Division by zero is not allowed.\n");
    }

   }else{
      printf("Invalid operator. Please use +, -, *, or /.\n");

   }


    return 0;
}