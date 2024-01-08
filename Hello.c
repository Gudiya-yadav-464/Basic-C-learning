/*
# include<stdio.h>

int main(){

    int a , b ;

    printf("Print a : ");
    scanf("%d",& a);

    printf("print b :  ");
    scanf("%d", &b);

    printf("Sum is : %d",a+b); 
    
    return 0;
}
*/

/*
# include<stdio.h>

int main () {

    float radious;

    printf("Enter side : ");
    scanf("%f" ,&radious);

    printf("area is : %f" , 3.14*radious*radious);
    return 0;

}
*/

/*
# include<stdio.h>
# include<math.h>

int main(){
    
    int a = 5+2/2*3;
    printf("%d \n", a);
    return 0;
}
*/


// write a program to check whether a number is divisible by two  or not

/*
# include<stdio.h>
#include<math.h>


int main(){
    // even - 1 
    // odd - 0
    int a ;
    printf("enter a number :");
    scanf("%d" , &a);
    printf("%d ", a%2 == 0);
    return 0 ;

}
*/

/*
// its sunday or snowing hthen its true and its monday or its raining 
# include<stdio.h>
# include<math.h>

int main(){

    int ismonday = 0;
    int israining = 1;
    printf("%d",ismonday || israining);
    return 0;
}

*/

// check  anumber is greater than 9 and less than 100

# include<stdio.h>

int main(){
    int x ;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("%d \n", x>9 && x<100);
    return 0;
}
