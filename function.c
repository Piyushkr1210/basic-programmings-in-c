/*include<stdio.h>  //question1
int value(int );
int value(int x){
    printf("the value =%d",x);

    
}
int main(){
    int a=15;
    value(a);
    return 0;
}*/

/*#include<stdio.h>//question2
#include<math.h>

int square(int a){
    printf("squre of number %f",pow(a,2));
    
}
int main(){
    int a;
    printf("enter the value");
    scanf("%d",&a);
    square(a);
    return 0;
}*/

/*#include<stdio.h>//question 3
int prime(int);
int prime(int a){
    int i;
    int s=0;
    
    printf("enter the value");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        if(a%i==0){
            s+=1;
        }
    }
    if(s==2){
        printf("%d is a prime number\n",a);
    }
    else{
        printf("%d is not a prime number\n",a);
    }
}
int main(){
    int a;
    printf("enter the no");
    scanf("%d",& a);
    prime(a);
    return 0;
}*/


/*#include <stdio.h> //question 4

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

double sum_series(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += (double)factorial(i) / i;
    }
    return sum;
}

int main() {
    int n = 5; 
    double result = sum_series(n);
    printf("The sum of the series is: %.2f\n", result);
    return 0;
}
*/

/*#include <stdio.h>

// Function to find the largest element in an array
int findLargest(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Test data
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest = findLargest(arr, n);
    printf("The largest element in the array is: %d\n", largest);
    return 0;
}
*/

/*#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum, remainder, n = 0;
    double result = 0.0;

    originalNum = num;

    // Find the number of digits
    for (originalNum = num; originalNum != 0; ++n) {
        originalNum /= 10;
    }

    originalNum = num;

    // Calculate the sum of the nth power of each digit
    for (originalNum = num; originalNum != 0; originalNum /= 10) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
    }

    // Check if the number is an Armstrong number
    return (int)result == num;
}

// Function to check if a number is a Perfect number
int isPerfect(int num) {
    int sum = 0;

    // Calculate the sum of divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the number is a Perfect number
    return sum == num;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    if (isPerfect(num)) {
        printf("%d is a Perfect number.\n", num);
    } else {
        printf("%d is not a Perfect number.\n", num);
    }

    return 0;
}
*/

/*#include <stdio.h>

// Function to check if a number is a Perfect number
int isPerfect(int num) {
    int sum = 0;

    // Calculate the sum of divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the number is a Perfect number
    return sum == num;
}

// Function to print all perfect numbers in a given range
void printPerfectNumbers(int start, int end) {
    printf("Perfect numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int start, end;

    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printPerfectNumbers(start, end);

    return 0;
}*/

/*#include <stdio.h>
#include <string.h>

// Function to check if two strings are anagrams
int areAnagrams(char str1[], char str2[]) {
    int count[256] = {0};

    // If lengths of both strings are not the same, they cannot be anagrams
    if (strlen(str1) != strlen(str2)) {
        return 0; // false
    }

    // Count characters in str1 and subtract counts for str2
    for (int i = 0; str1[i] && str2[i]; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0; // false
        }
    }

    return 1; // true
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}*/


/*#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = factorial(num);
    printf("The factorial of %d is %d\n", num, result);

    return 0;
}
*/

#include <stdio.h>
void decimalToBinary(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    int binary[32];
    int index = 0;

    while (num > 0) {
        binary[index++] = num % 2;
        num /= 2;
    }

    // Print the binary number in reverse order
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("The binary representation of %d is: ", num);
    decimalToBinary(num);

    return 0;
}



