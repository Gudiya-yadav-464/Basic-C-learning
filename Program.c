// write a program to check the average of three numbers

/*
# include<stdio.h>
#include<math.h>

int main(){

    int x , y , z ;
    printf("Enter three numbers :");
    scanf("%d" "%d" "%d",&x,&y,&z);
    float avg = (float)(x + y + z)/3;
    printf("The average of three numbers : %f",avg);

    return 0;

}
*/
// write a program to check whether a character is digit or not

 /*
# include <stdio.h>

int main(){

    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if (ch >= '0' && ch<= '9')
    {
    printf("It is a Digit");
    }
    else
    {
        printf("it is not  digit");
    }
    return 0;

}
*/
// write a program to print the smallest number 

/*
# include<stdio.h>

int main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("the smallest number %d",a<b ? a:b);
    return 0;

}

*/
// write  a program to calculate the permiter of rectangle take side a & b from the user

/*
# include<stdio.h>

int main(){

    int a, b;
    printf("Enter the length of a rectangle : ");
    scanf("%d", &a);

    printf("Enter the width of a rectnagle  :");
    scanf("%d", &b);

    printf("The permiter of a rectangle  : %d ",2*(a+b));
    return 0;

}
*/

// write a program to take a number input from the user and cube it (n*n*n)

/*
#include<stdio.h>

int main(){

    int a;
    printf("enter a number : ");
    scanf("%d",&a);
    printf("the cude of a is %d", a*a*a);
    return 0;

    }
*/

// write a program that a person can voe or not

/*
#include<stdio.h>

int main(){

    int age;

    printf("Enter the age :");
    scanf("%d",&age);
    if (age<18){
        printf("They are not adult so they can not vote \n");
    }
    else{
        printf("They are adult so they can vote  \n ");
    }
    printf("Thank you");
    return 0;

}
*/

// Use else if in above program

/*
# include<stdio.h>

int main(){
    int age;

    printf("enter the age : ");
    scanf("%d",&age);

    if (age >= 18){
        printf("Tey are adult they can vote ");
    }
    else if (age > 13 && age < 18){
        printf("They are teenager but thye can not vote ");
    }
    else {
        printf("They are child");
    }
    return 0;
}
*/

/*
// write the same program using ternary operator

# include<stdio.h>
int main(){
    int age ;
    printf("Enter age : ");
    scanf("%d",&age);
    age >= 18 ? printf("Adult \n") : printf("Not adult \n");
    return 0;
}

*/

// write a program using condittional statements using swithch

/*
# include<stdio.h>

int main(){

    int day;
    printf("Enter day (1-7): ");
    scanf("%d", &day);

    switch (day){

        case 1 : printf("Sunday");
                break;
        case 2 : printf("Monday");
                break;
        case 3 : printf("Tuesday");
                break;
        case 4 : printf("Wednesday");
                break;
        case 5 : printf("Thursday");
                break;
        case 6 : printf("Friday");
                break;
        case 7 : printf("Saturday");
                break;
        default : printf("enter a valid day");
    }
    return 0;
}

*/

// write a program to work with nested if 

/*
# include<stdio.h>

int main(){

    int number;

    printf("Enter a number :");
    scanf("%d", &number);

    if(number>= 0){
        printf("number is positive \n");
        if (number % 2 == 0){
            printf("number is even also");
        }
        else{
            printf("Odd \n");
        }
    }
    else{
        printf("number is negative \n");
    }

    return 0;

}
*/

/*
program excercise 
*/

// write a program to check whether the student is fail or pass

/*
# include<stdio.h>

int main(){

    int marks;

    printf("Enter your marks \n");
    scanf("%d" , & marks);

    // if (marks > 30 && marks <= 100){
    //     printf("you are passed");
    // }
    // else{
    //     printf("You are failed");
    // }
   

   // write in ternary 
    marks >= 30 ? printf("passed \n"):printf("Failed \n");

    return 0;
}
*/
/*
# include<stdio.h>

int main(){
    int marks;
    printf("Enter your Marks (1-100) : \n");
    scanf("%d",&marks);

    if (marks < 30){
        printf("You got grade C");
    }
    else if(marks >= 30 && marks < 70){
        printf("You got grade B");
    }
    else if(marks >= 70 && marks < 90){
        printf("You got grade A");
    }
    else {
        printf("A+");
    }
    return 0;

}
*/

/*
# include <stdio.h>
int main(){

    int x = 2 ;
     
     if (x = 1){
        printf("X is equal to 1");
}
     else{
        printf("x is not equal to 1");
     }
     return 0;
}
*/

// write a program to check char that is take input from the user is upper case or lower case
/*
# include<stdio.h>

int main(){

    char ch ;
    printf("Enter a Character \n");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z'){
        printf("Uppercase \n");
    }
    else if (ch >= 'a' && ch <= 'z'){
        printf("Lowercase \n");
    }
    else {
        printf("not english letter");
        }
    return 0;
}

*/

// write a program to check whether given numbers is natrual number or not


/*
# include<stdio.h>

int main(){

    int num1 ;
    float num2 ;

    printf("Enter a number : \n ");
    scanf("%f",&num2);
    num1 = num2;
    if (num2<=0){
        printf("number is not natural");
         return 0;
    }
   
    if (num1 != num2){
        printf("The number is not natural number");
    }
    else{
        printf("The number is natural number");
    }
    return 0;
}

*/

// write a program to check whether a number is Arm's strong number or not 


# include<stdio.h>

int main(){


    int num , remainder , result = 0,temp ;
    printf("Enter a three digit number :  ");
    scanf("%d",&num);
    temp = num;

    while (num >0)
    {

    remainder  = num % 10;
    result = result+( remainder*remainder*remainder);
    num= num  / 10;
    }

    if (temp = result)
    {
        printf("\n The Number is an armstrong number");
    }
    else {
        printf("\n The Number is not an armstrong number");
    }
    return 0;

}