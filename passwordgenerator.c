#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int length;
    printf("Enter password length: ");
    scanf("%d", &length);

   
    char set[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                 "abcdefghijklmnopqrstuvwxyz"
                 "0123456789"
                 "!@#$%^&*()_+";

    int setSize = sizeof(set) - 1; 
    char password[length + 1];

    srand(time(NULL)); 

    for (int i = 0; i < length; i++) {
        int index = rand() % setSize;
        password[i] = set[index];
    }

    password[length] = '\0';

    printf("\nGenerated Password: %s\n", password);
}
