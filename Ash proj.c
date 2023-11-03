#include <stdio.h>

int main() {
    int a, f, g;
    char answer;
    
    printf("\tMathematical Approach to read minds!\n\n");
    printf("Step 1:\n");
    printf("Choose a number between 0 to 100 and remember it in your mind!\n");
    
    printf("Answer Y/N: ");
    scanf(" %c", &answer); 
    
    if (answer == 'y' || answer == 'Y') {
    printf("step2:\n");
        printf("Now, double the number you choose, press Y when ready.\n");
    } else {
        printf("Sorry! You cannot proceed any further!\n");
        return 0; 
    }
    
    
    printf("Answer Y/N: ");
    scanf(" %c", &answer); 
    
    if (answer == 'y' || answer == 'Y') {
        printf("step 3:\n");
        printf("Now add any random number of your choice to the answer you got.\n");
        printf("Enter the random number which you have added: ");
    } else {
        printf("Sorry! You cannot proceed further.\n");
        return 0; 
    }
    float b,e;
    scanf("%f", &b);
    printf("step 4:\n");
    printf("Divide the answer you got by 2.\n");
    printf("If you are done, then press Y to proceed further. Y/N: ");
    scanf(" %c", &answer); 
    
    if (answer == 'y' || answer == 'Y') {
        printf("step 5:\n");
        printf("Now, subtract the original number, the one you assumed in the beginning, from the current number in your mind.\n");
    } else {
        printf("Sorry! You cannot proceed further.\n");
        return 0; 
    }
    
    printf("If you are ready to proceed further1y, then answer Y/N: ");
    scanf(" %c", &answer); 
    
    if (answer == 'y' || answer == 'Y') {
        e = b / 2;
        printf("Finally, the number in your mind is: %f\n\n", e);
    } else {
        printf("Sorry! This is the last step. You will not get your answer.\n\n");
    }
    
    return 0;
}
