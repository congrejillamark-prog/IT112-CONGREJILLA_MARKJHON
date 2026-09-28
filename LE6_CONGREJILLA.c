#include <stdio.h>
 
 float add(float num1, float num2);
 float subtract(float num1, float num2);
 float multiply(float num1, float num2);
 float divide(float num1, float num2);
 int main() {
     float firstNum, secondNum, result;
     int choice;
     
     while (1) { 
         printf("Multiple functions to perform Arithmetic Operations\n\n");
         
       
         printf("Enter first number: ");
         scanf("%f", &firstNum);
         
         printf("Enter second number: ");
         scanf("%f", &secondNum);
         
        
         printf("\nChoose Operation:\n");
         printf("[1] Addition\n");
         printf("[2] Subtraction\n");
         printf("[3] Multiplication\n");
         printf("[4] Division\n");
         printf("[5] Exit Program\n");
         
         printf("\nEnter choice [1-5]: ");
         scanf("%d", &choice);
         printf("\n");
         
      
         switch (choice) {
             case 1:
                 result = add(firstNum, secondNum);
                 printf("%.0f + %.0f = %.0f\n", firstNum, secondNum, result);
                 break;
             case 2:
                 result = subtract(firstNum, secondNum);
                 printf("%.0f - %.0f = %.0f\n", firstNum, secondNum, result);
                 break;
             case 3:
                 result = multiply(firstNum, secondNum);
                 printf("%.0f * %.0f = %.0f\n", firstNum, secondNum, result);
                 break;
             case 4:
                 if (secondNum == 0) {
                     printf("Error! Division by zero is not allowed.\n");
                 } else {
                     result = divide(firstNum, secondNum);
                     printf("%.0f / %.0f = %.2f\n", firstNum, secondNum, result);
                 }
                 break;
             case 5:
                 printf("Exiting program ...\n");
                 return 0; // End program
             default:
                 printf("Invalid choice! Please select 1-5 only.\n");
         }
         
         printf("\n----------------------------------------\n\n");
     }
 }
 // Function Definitions
 float add(float num1, float num2) {
     return num1 + num2;
 }
 float subtract(float num1, float num2) {
     return num1 - num2;
 }
 float multiply(float num1, float num2) {
     return num1 * num2;
 }
 float divide(float num1, float num2) {
     return num1 / num2;
 }