// Now we a re going to learn Loops which includs for loop while loop and do while loop

/*
# include<stdio.h>

int main(){
    for(int i = 1; i< 5; i = i+1){
    printf("Hello world \n");
    }
    return 0;
}
*/

// print the numbers from 0 to 10 using for loop

/*
# include <stdio.h>

int main(){
    for (int i = 0 ; i <= 10 ; i = i+1){
        printf("%d \n",i);
    }
    return 0;
}
*/

// now lets' learn about the increment operators

// # include <stdio.h>
// int main(){

// increment operator
// i++ post increment operator
// ++i pre increment operator


// decrement operator

// i-- post decrement operator
// --i pre decrement operator

/*

    int i = 1;
    printf("%d \n",i++); // post increment operator
    printf("%d \n", i);

    printf("%d \n",++i); // prefix(pre) increment operator
    printf("%d \n", i);

    printf("%d \n",i--); // post decrement operator
    printf("%d \n", i);

    printf("%d \n",--i); // pre decrement operator
    printf("%d \n", i);


    return 0;

}

*/
// note --- for loops variable type can be float 


/*
# include<stdio.h>

int main(){

    // for (float i = 1.0 ; i <= 5.0; i++){
    //     printf("%f \n",i);
    // }

    for (char ch ='a'; ch<= 'z';ch++){
        printf("%c \n ",ch);
    }
    return 0 ;
}

*/

// now we will work with ---- while loop ---

/*
# include<stdio.h>

int main(){
    int i = 1;
    while (i <= 5){
        printf("Hello world \n");
        i++;
    }
    return 0;
}

*/

//----- print the number from 0 to n given by the user-----


/*
# include<stdio.h>

int main(){

    int n ;
    printf("Enter a positive integer : ");
    scanf("%d",&n);


    int i = 0;
    while (i<=n){
        printf("%d \n",i);
        i++;
    }

    // for (int i = 0; i <= n ; i++){
    //     printf("%d \n",i);
    // }

    return 0;
}
*/

//------------ Now we will learn about the do while loop ----------

/*
# include<stdio.h>

int main(){

    int i = 1;
    do{
        printf("%d \n",i);
        i++;
    } while(i <=5);
    
    return 0;

}

*/

// ----- Print the sum of n natrual numbers and also print them in reverse ------------

/*
# include<stdio.h>

int main(){
    int n ;
    printf("Enter a number : ");
    scanf("%d" , &n );
    int sum = 0;
    for (int i= 0; i<=n ; i++){
        sum = sum +i;

    }
    printf("sum is %d \n ",sum);

    for (int i=n; i>=1; i--){
        printf("%d\n",i);
    }
    return 0;
}
*/

// ----- print the number of the table that is given by the user-----------

/*
# include<stdio.h>

int main(){

    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(int i = 1; i<=10 ; i++){
        printf("%d \n",n*i);
    }
    return 0;

}

*/

// --- Now we will learn about the break statement ---------
/*
# include<stdio.h>

int main(){

    for(int i = 1; i <= 5 ;i++){
        if (i == 3){
            break;
        }
        printf("%d\n",i);
    }
    printf("End");
    
    return 0;
}

*/
// ---- write a program for that keep taking a number from user until user input odd number ----

/*
# include<stdio.h>
int main(){
    int n;
    do {
        printf("Enter an number: ");
        scanf("%d",&n);
        printf("%d \n",n);

        if (n % 2 == 0){
            break;
        }
    }while (1);

    printf("thanks");
    return 0;
   
}
*/

//---- keep taking numbers as input from user until user enters a number which is multiple of 7---

/*
#include<stdio.h>
int main(){
    int n;
    do {
        printf("Enter an number: ");
        scanf("%d",&n);
        printf("%d \n",n);

        if (n % 7 == 0){
            break;
        }
    }while (1);

    printf("thanks");
    return 0;
   
}
*/
// --- now we will learn contune statement----
/*
# include<stdio.h>

int main(){
    for ( int i = 1 ; i <= 5 ; i++){
        if (i == 3){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
     
}
*/

// -- write a program to print all numbers from 1 to 10 except 6
/*
# include<stdio.h>

int main(){
    for (int i = 1 ; i <= 10 ; i++){
        if (i == 6){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}
*/

// -- write a program to print the all odd numbers from 5 to 50 --- 

/*
# include<stdio.h>

int main(){

    for (int i = 5 ; i <= 50 ; i++){

        if (i % 2 != 0){
            printf("%d\n",i);
        }
    }
    return 0; 

}
*/

// --- write a program to print the factorial of  a number----
/*
# include<stdio.h>

int main(){

    int n ;

    printf("enter a number : ");
    scanf("%d",&n);
    int fact = 1;

    for (int i = 1 ; i <= n; i++){
        
        fact = fact * i;
    }
    printf("final factorial  is %d \n :",fact);
    return 0;
}
*/

// print the reverse of the table for a number n 

/*
# include<stdio.h>

int main(){
    
    int n ;

    printf("enter a number : ");
    scanf("%d",&n);

    for (int i = 10 ; i >= 1 ; i--){
        printf("%d\n",n*i);
    }
    return 0;

}
*/

//-- calculate the sum of all numbers between 5 and 50 including 5 and 50 
/*
# include<stdio.h>

int main(){

    int sum = 0;
    for (int i = 5 ; i<= 50 ; i++){
        sum  = sum + i; 
    }
    printf("%d \n", sum );
    return 0;
        

}

*/

//--- write a program to check whether a number is prime or not

/*
# include<stdio.h>

int main(){

    int n ;
    printf("enter a number :");
    scanf("%d",&n);

    if (n % 2 == 0){
        printf("the number is prime ");
    }
    else {
        printf("the number is not prime ");
    }
    return 0;
}
*/

// -- write a program to print the prime number within in a range
/*
# include<stdio.h>

int main(){


    for (int i = 1 ; i <= 20 ; i++){
        if ( i % 2 == 0 ){
            printf("%d\n",i);
        }  
    }  
    return 0;  
    
}
*/

//--- write a program of nested loop in pattern using it-------

# include<stdio.h>

int main(){
    int rows = 4;
    int columns = 5;
    for (int i = 1 ; i<=rows;i++){
        for (int i = 1 ; i <= columns;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
    
}