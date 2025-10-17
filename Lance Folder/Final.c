#include <stdio.h>

int main(){

    char name[] = "Lance Adrian B. Paalisbo";  
    int schoolID = 2025306367;
    int num1 = 10, num2 = 20;

    // Use natag Arithmetic Operations
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    float quotient = (float)num1 / num2;

    //Imo nang e display ang nasa guide katong name nimo 
    // ID number sab nimo
    printf("Your Complete Name: %s\n", name);
    printf("Your ID number: %d\n", schoolID);

    //Display Arithmetic Result nga naa sa Operations

    printf("Basic Arithmetic Operations: \n");
    
    printf("Result: The sum of 10 and 20 is 30\n");
    printf("%d + %d = %d\n", num1, num2, sum);
    
    printf("Result: The difference of 10 and 20 is -10\n");
    printf("%d - %d = %d\n", num1, num2, difference);
    
    printf("Result: The product of 10 and 20 is 200\n");
    printf("%d * %d = %d\n", num1, num2, product);

    printf("Result The quotient of 10 and 20 is 0.50\n");
    printf("%d / %d = %.2f\n", num1, num2, quotient);

    return 0;
}