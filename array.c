


#include<stdio.h> //question 1
int main()
{
    int arr[20],i;
    printf("Enter the Elements: ");
    for(int i=0;i<20;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<20;i++)
    {
        printf("%d\t",arr[i]);
    }
}


//question 2
/*#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("enter the elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter %d elements in the array:\n", n); 
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of all elements stored in the array is : %d\n", sum);
}*/




/*#include <stdio.h>    //qs 3
int main()
{
    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int matrix[r][c];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

//question 4
/*#include <stdio.h>

int main() {
    int i, j;

    int a[5];
    printf("Enter the elements of the first array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    int b[5];
    printf("Enter the elements of the second array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &b[i]);
    }

    int c[10];

    for (i = 0; i < 5; i++) {
        c[i] = a[i];
    }

    for (j = 0; j < 5; j++) {
        c[i + j] = b[j];
    }

    printf("Merged array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}*/


/*#include <stdio.h> //question 5

int main() {
    int n, i, max, min;

    
    printf("enter the number of elements : ");
    scanf("%d", &n);

    int arr[n];

    
    printf("enter %d elements in the array:\n", n);
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
}*/


/*#include<stdio.h>  //question6
int main(){


}
  */  

/*#include <stdio.h>     //question 8
int main(){
    int arr[100],n,i,pos,value;
    printf("enter the value");
    scanf("%d",&n);
    printf("enter element in array:\n");
    for(i=0;i<=n;i++){
        scanf("%d",&arr[i]);

    }
    printf("enter the position");
    scanf("%d",&pos);
    printf("enter the value to be inserted");
    scanf("%d",&value);
    for(i=n;i>=pos;i--){
        arr[i]=arr[i-1];

    }
    arr[pos-1]=value;
    n++;
    printf("array after insertion");
    for(i=0;i<=n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}*/



/*#include <stdio.h> //question 9

int main() {
    int rows, columns, i, j;
    int a[10][10], b[10][10], result[10][10];

    
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    
    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }

    
    printf("Resultant matrix after subtraction:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/


/*#include <stdio.h>

int main() {
    int rows, columns, i, j;
    int matrix[10][10], transpose[10][10];

    
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

   
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    
    printf("Transpose of the matrix:\n");
    for (i = 0; i < columns; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/