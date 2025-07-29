#include<stdio.h>

      int add(int x, int y);      
      int subtract(int x, int y);    
      int multiply(int x, int y); 
	  int division(int x, int y)
	  {
	  	return x/y;
		 }   
      void showMenu(); 
      int main() {
      
	  
	  int choice;
      int number1, number2, ans;
      char again;

   do {
        showMenu();

        printf("\nEnter your choice (1-6): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 6) 
		{
            printf("Enter first number: ");
            scanf("%d", &number1);
            printf("Enter second number: ");
            scanf("%d", &number2);
            switch (choice){
                case 1:
                    ans= add(number1, number2);
                    printf("ans: %d + %d = %d\n", number1, number2, ans);
                    break;
                    
                case 2:
                    ans = subtract(number1, number2);
                    printf("ans: %d - %d = %d\n", number1, number2, ans);
                    break;
                    
                case 3:
                    ans= multiply(number1, number2);
                    printf("ans: %d * %d = %d\n", number1, number2, ans);
                    break;
                    
                case 4:
                    if (number2 != 0) {
                        ans = division(number1, number2);
                        printf("Result: %.2f / %.2f = %.2f\n", number1, number2, ans);
                    } else {
                        printf("Error: Division by zero is not allowed!\n");
                    }
                    break;
            }
            
        } else {
      
         printf("Invalid choice! Please select a number between 1 and 4.\n");
         
        }

        printf("\nDo you want to perform another operation? (x/y): ");
        scanf(" %c", &again);

        } while (again == 'y' || again == 'Y');

         printf("\nThank you for using the calculator!\n");

         return 0;
        }

        void showMenu()
  {
    printf("\n******************************\n");
    printf("     Simple Calcuator\n");
    printf("**************************\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("*****************************\n");
}

    int add(int x, int y) {
    return x + y;
}

    int subtract(int x, int y) {
    return x - y;
}

    int multiply(int x, int y) {
    return x * y;

}


