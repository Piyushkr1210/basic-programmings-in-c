/*#include <stdio.h>   //question 1

int main() {
    FILE *file;
    char filename[100], ch;
    printf("Enter the filename to open: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("there is no file %s\n", filename);
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
     fclose(file);

    return 0;
}*/

/*#include <stdio.h>  //question 2

int main() {
    FILE *file;
    char filename[100];
    char data[1000];
    printf("Enter the file ");
    scanf("%s", filename);

    file = fopen(filename, "a");
    if (file == NULL) {
        printf("there is no file %s\n", filename);
        return 1;
    }

    printf("Enter data to append: ");
    getchar(); 
    fgets(data, sizeof(data), stdin);

    
    fprintf(file, "%s", data);

    
    fclose(file);

    printf("Data appended successfully.\n");

    return 0;
}*/

/*#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int count = 0;

    
    printf("Enter the filename to open: ");
    scanf("%s", filename);

    
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s for reading.\n", filename);
        return 1;
    }

    
    while ((ch = fgetc(file)) != EOF) {
        count++;
    }

    
    fclose(file);

    
    printf("The number of characters in the file is: %d\n", count);

    return 0;
}*/

#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char buffer[1024];
    size_t bytesRead;

    
    printf("Enter the filename to open: ");
    scanf("%s", filename);

    
    file = fopen(filename, "rb");
    if (file == NULL) {
        printf("Could not open file %s for reading.\n", filename);
        return 1;
    }

    
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), file)) > 0) {
        for (size_t i = 0; i < bytesRead; i++) {
            printf("%c", buffer[i]);
        }
    }

   
    fclose(file);

    return 0;
}



