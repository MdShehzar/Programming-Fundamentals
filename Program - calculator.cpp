#include <stdio.h>
int main() {
    float num1, num2, result;
    int choice ;
    while(1) {
        // display the menu 
        printf("\nsimple calculator\n");
        printf("1. add\n");
        printf("2. subtract\n");
        printf("3. multiply\n");
        printf("4. divide\n");
        printf("5. exit\n");

        // take user input for operation choice
        printf("enter your choice: ");
        scanf("%d", &choice);

        //exit the program if the user chooses 5
        if (choice == 5){
            printf("exiting the calculator.\n");
            break;
        }

        // take user input for numbers 
        printf("enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        // perform the chosen operation
        switch(choice) {
            case 1:
                 result = num1 + num2;
                 printf("result: %.2f\n, result");
                 break;
            case 2:
                result = num1 - num2;
                printf("result: %.2f\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("result: %.2f\n", result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("result: %.2f\n", result);
                } else {
                    printf("error: division by zero is not allowed.\n");
                }
                break;
              default:
                printf("invalid choice. please try again.\n");

                



        } 
        

    }
    return 0;
} 

