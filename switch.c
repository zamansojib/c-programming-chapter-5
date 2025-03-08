#include<stdio.h>
int main(){

//    Switch statement
//    int day_number;
//    printf("Enter your Date : ");
//    scanf("%d",&day_number);
//    switch (day_number)
//    {
//    case 0:
//     printf("Saturday\n");
//     break;
//    case 1:
//    printf("Sunday\n");
//    break;
//    case 2:
//    printf("Monday\n");
//    break;
//    case 3:
//    printf("Tuesday\n");
//    break;
//    case 4:
//    printf("Wednesday\n");
//    break;
//    case 5:
//    printf("Thursday\n");
//    break;
//    case 6:
//    printf("Friday\n");
//    break;
//    default:
//     printf("Wrong Day\n");
//    }


//    int days_number;
//    printf("Enter your Expression: ");
//    scanf("%d",&days_number);
//    switch (days_number)
//    {
//    case 0:
//     printf("Today is the Saturday.thats the off day.So you take rest.\n");
//     break;
//    case 1:
//     printf("Today is the Sunday.thats the Work day.\n");
//     break;
//    case 2:
//     printf("Today is the Monday.thats the Work day.\n");
//     break;
//    case 3:
//     printf("Today is the Tuesday.thats the Work day.\n");
//     break;
//    case 4:
//     printf("Today is the Wednesday.thats the Work day.\n");
//     break;
//    case 5:
//     printf("Today is the Thursday.thats the Work day.\n");
//     break;
//    case 6:
//     printf("Today is the Friday.thats the off day.So you take rest.\n");
//     break;
   
//    default:
//     printf("you choose wrong day.\n");
//    }

    // int choosing_day;
    // printf("Enter your Expression: ");
    // scanf("%d",&choosing_day);
    // switch(choosing_day){
    //  case 0:
    //  case 6:
    //  printf("Its off day.you feel happy?\n");
    //  break;
    //  case 1:
    //  case 2:
    //  case 3:
    //  case 4:
    //  case 5:
    //  printf("Its work day.you feel sad?\n");
    //  break;
    //  default:
    //  printf("you choose wrong day\n");



    // }

    int a,b;
    char operator;
    printf("Enter your expression (e.g.,5+8): ");
    scanf("%f%c%f",&a,&operator,&b);
    switch (operator)
    {
    case '+':
        printf("Result: %.2f\n",a+b);
        break;
    case '-':
        printf("Result: %.2f\n",a-b);
        break;
    case '*':
        printf("Result: %.2f\n",a*b);
        break;
    case '/':
       if (b!=0)
       {
        printf("result: \n",a/b);
       }else{
         printf("Error: Division by zero is not allowed.\n");
       }
       break;
    default:
        printf("Invalid operator. Please use +, -, *, or /.\n");
    }
    return 0;
}