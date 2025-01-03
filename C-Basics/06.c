#include <stdio.h>

int main() {
    int sum = 0;
    int n;
    
    // Taking input from the user for 'n'
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    // Loop to calculate the sum of first n natural numbers
    for(int i = 1; i <= n; i++) {
        sum += i;  // Adding i to sum
    }
    
    // Printing the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    
    return 0;
}
