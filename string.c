#include<stdio.h> //question 1
int main(){
    char str[100];
    int i =0;
    printf("enter a string");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++){
        
    }
        
    printf("the length of string %d\n",i);
    return 0;


}

#include <stdio.h> // question 2
#include <string.h>
int main() {
    char str[100];
    char charToRemove;
    int i, j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Enter the character to remove: ");
    scanf("%c", &charToRemove);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != charToRemove) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    printf("String after removal: %s\n", str);
    return 0;
}

#include <stdio.h> // question 3
#include <string.h>
int main() {
char str1[100], str2[100], result[200];
printf("Input String 1: ");
scanf("%s", str1);
printf("Input String 2: ");
scanf("%s", str2);
if (str1 [strlen(str1)-1] = str2[0]) {
    sprintf(result, "%s%s", str1, str2 + 1);
} else {
    sprintf(result, "%s%s", str1, str2);
}
printf("Output: %s\n", result);
return 0;
}*/

/*#include<stdio.h> //question 4
#include<string.h>
int main(){
    char str[100];
    
    printf("enter a string");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        str[i]= tolower(str[i]);
    }
    printf("lower case string %s\n",str);
    return 0;
}
    */

 



/*#include <stdio.h>
#include<string.h>
#include <ctype.h> 

int main() {
    char str[100];
    int i = 0;
    char ch;
 
    printf("Enter a lowercase string: ");
    while ((ch = getchar()) != '\n' && i < 99) {
        str[i] = ch;
        i++;
    }
    str[i] = '\0';

    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = toupper(str[i]);
        }
    }

    
    printf("Uppercase string: %s", str);

    return 0;
}*/


/*#include <stdio.h>

int main() {
    char str[100], result[100];
    int i = 0, j = 0;
    char ch;
    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n' && i < 99) {
        str[i] = ch;
        i++;
    }
    str[i] = '\0'; 

    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0'; 

    
    printf("Sentence without spaces: %s", result);

    return 0;
}
*/


/*#include <stdio.h>
#include <string.h>

void bubbleSort(char str[]) {
    int n = strlen(str);
    int i, j;
    char temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (str[j] > str[j + 1]) {
                
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99s", str); 
    bubbleSort(str);
    printf("Sorted string: %s\n", str);
    return 0;
}*/

/*#include <stdio.h>
#include <string.h>

int main(){
    char a[50],b[50];
    int d,e;
    printf("Enter the string :");
    gets(a);
    printf("Enter the position to start extraction :");
    scanf("%d",&d);
    printf("Enter the length of substring :");
    scanf("%d",&e);
    int i,j=0;
    int s = strlen(a);
    for(i=d-1; i<d+e-1 ;i++){
        b[j++]=a[i];
    }
    b[j]='\0';
    printf("The substring retrieve from the string is : %s",b);
}
*/

/*#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main(){
    char a[50];
    int j=0;
    printf("Enter a string :");
    gets(a);
    for(int i=0;i<=strlen(a)-1;i++){
        int k = islower(a[i])?toupper(a[i]):tolower(a[i]);
        putchar(k);
    }
}*/

/*#include <stdio.h>
#include <string.h>
int main(){
    char a[50];
    char b[50];
    int c = 0;
    char *p;
    printf("Enter a string :");
    gets(a);
    printf("Enter the string to check :");
    gets(b);
    p = strstr(a,b);
    while(p!=0){
        c++;
        p=strstr(p+1,b);
    }
    printf("%d is the nuo. of times\n",c);
    return 0;
}
*/

/*#include <stdio.h>
#include<string.h>
int main() {
    char str1[100], str2[100], result[200];
    int i , j;
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    
     while (str1[i] != '\0') {
        result[i] = str1[i];
         i++;
     }

     while (str2[j] != '\0') {
         result[i] = str2[j];
         i++;
         j++;
     }

    result[i] = '\0'; 
    printf("merged string: %s\n", result);

    return 0;
}*/

#include<stdio.h>
#include<string.h>
int main(){
    char s1[10],s2[10],s3[20];
    printf("Enter a 1st string :");
    gets(s1);
    printf("Enter a 2nd string :");
    gets(s2);
    int j = 0,i;
    for(i=0;i<strlen(s1);i++){
        s3[j++]=s1[i];
    }
    s3[j++]=' ';
    for(i=0;i<strlen(s2);i++){
        s3[j++]=s2[i];
    }
    s3[j]='\0';
    printf("Combined String :");
    puts(s3);
}


