#include<stdio.h>   // program1 first programm
int main(){
    printf("Welcome to c programming!");
    return 0;

}
//question 2 
#include<stdio.h>
int main(){
    printf("name:- YOUR NAME\n");
    printf("regd no:- .......\n");
    printf("Address:- YOUR ADDRESS\n");
    printf("QUALIFICATION:- YOUR CHOICE");
    return 0;

}

#include <stdio.h> //question 3
int main(){
   int a= 5; float b = 3.14; char c = 'A';
   printf("integer  = %d\n",a);
   printf("float = %f \n",b);
   printf("character = %c",c);
   return 0;
}

#include<stdio.h> // question 4
int main(){
    float a = 3.14159;
    printf("value %.2f",a);
    return 0;


}

#include<stdio.h> // Question 5
int main(){
    char A;
    printf("enter a character.");
    scanf("%c",&A);
    printf("the ASCII value %c=%d",A,A);

    return 0 ;
}
#include<stdio.h> //question 6
int main(){
    

    printf("NUMBER\t SQUARE\n");
    printf("%d\t %d\n",1,1*1);
    printf("%d\t %d\n",2,2*2);
    printf("%d\t %d\n",3,3*3);
    printf("%d\t %d\n",4,4*4);
    printf("%d\t %d\n",5,5*5);
    return 0;
}






#include<stdio.h>   //question 7
int main(){
    printf("\"Hello World!\"\n");
    printf("This is a new line.\n");
    printf("Let's tab\t here.");
    return 0;
}

#include<stdio.h> // question 8
int main(){
    int a = 255;
    printf("decimal value = %d \n",a);
    printf("hexadecimal value = %X",a);
    return 0;
}
#include<stdio.h> // question 9
int main(){
    float a = 3.14159;
    printf("the default width is %f \n",a);
    printf("width 10 %10f \n",a);
    printf("width 10 with 2 decimal places %10.2f \n",a);
    return 0;

}

#include<stdio.h> //question 10
int main(){
    int a;
    int b;
    printf("the first value\n");
    scanf("%d",&a);
    printf("the second value \n");
    scanf("%d",&b);
    printf("Addition: %d \n",a+b);
    printf("Substraction: %d \n",a-b);
    printf("multiplication: %d \n",a*b);
    printf("Division: %d  \n",a/b);
    return 0;


}
#include<stdio.h>
int main(){
    int length;
    int breadth;
    printf("Enter the length \n");
    scanf("%d",&length);
    printf("Enter the breadth \n");
    scanf("%d",&breadth);
    printf("area of rectangle : %d\n",length*breadth);
    printf("perimerter of rectangle: %d \n",2*(length+breadth));
    return 0;

}