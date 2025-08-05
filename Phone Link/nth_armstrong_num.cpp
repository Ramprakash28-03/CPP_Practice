#include <stdio.h>
#include <math.h>

// Function to count the number of digits in a number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int sum = 0, temp, remainder, n = countDigits(num);
    temp = num;
    
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }
    
    return (sum == num);
}

// Function to find the nth Armstrong number
int findNthArmstrong(int n) {
    int count = 0, num = 1;
    
    while (1) {
        if (isArmstrong(num)) {
            count++;
            if (count == n) {
                return num;
            }
        }
        num++;
    }
}

int main() {
    int n;
    printf("Enter the value of n to find the nth Armstrong number: ");
    scanf("%d", &n);
    
    int nthArmstrong = findNthArmstrong(n);
    printf("The %dth Armstrong number is %d\n", n, nthArmstrong);
    
    return 0;
}

