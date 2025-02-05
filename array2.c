#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    for(int i=0;i<=4;i++){
        printf("%d",a[i]);
    }
}

/*#include<stdio.h>
int main(){
    int i;
    int j;
    int a[2][5];
    printf("enter the two no")

    for(i=0;i<=4;i++){
        for(j=0;j<=1;j++){
            printf("[%d][%d]",a[i][j]);
        }
        return 0;
    }
}
*/

/*#include<stdio.h>
int main(){
    int i,j;
    int a;
    int s=0;
    printf("enter the  no");
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<=a;i++){
        s+=i;


    }
    printf("the sum %d",s);
    
}*/



/*#include<stdio.h>
int main(){
    int a,b;
    printf("enter the values");
    scanf("%d",&a);
    scanf("%d",&b);
    
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a=%d b=%d",a,b);
    return 0;

    
}*/

/*#include<stdio.h>
int main(){
    int a;
    int b;
    int sum;
    printf("enter the value ");
    scanf("%d",&a);
    printf("enter the value ");
    scanf("%d",&b);
    sum=(a+b)/2;
    printf("%d",sum);
}*/

/*#include<stdio.h>
int main(){
    int arr[2][3]={(1,2),(4,5,6)};
    for(int i=0;i<=2;i++){
        for(int j=0;j<=3;j++){
            printf("")
        }
    }
}*/

/*#include <stdio.h>

int main() {
    int rows = 2, cols = 2;
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{5, 6}, {7, 8}};
    int sum[2][2];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Sum of two matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;*/

#include <stdio.h>

int main() {
    int n, i, max, min;

    
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }


    max = arr[0];
    min = arr[0];

    
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    
    printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d\n", min);

    return 0;
}
