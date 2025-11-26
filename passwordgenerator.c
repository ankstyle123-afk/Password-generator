#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>   // for usleep()

int main() {
    int length;
    printf("Enter password length: ");
    if (scanf("%d", &length) != 1 || length <= 0) return 0;

    const char set[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                       "abcdefghijklmnopqrstuvwxyz"
                       "0123456789"
                       "!@#$%^&*()-_=+[]{};:,.<>/?";

    int setSize = sizeof(set) - 1;
    char password[length + 1];
    srand((unsigned)time(NULL));

    // Loading animation
    printf("\nGenerating password");
    for (int i = 0; i < 6; ++i) {
        printf("."); fflush(stdout);
        usleep(180000); // 0.18s
    }

    // Generate password
    for (int i = 0; i < length; ++i) {
        password[i] = set[rand() % setSize];
    }
    password[length] = '\0';

    // Strength evaluation (simple heuristic)
    int hasUpper=0, hasLower=0, hasDigit=0, hasSym=0;
    for (int i = 0; i < length; ++i) {
        if (password[i] >= 'A' && password[i] <= 'Z') hasUpper = 1;
        else if (password[i] >= 'a' && password[i] <= 'z') hasLower = 1;
        else if (password[i] >= '0' && password[i] <= '9') hasDigit = 1;
        else hasSym = 1;
    }
    int typeCount = hasUpper + hasLower + hasDigit + hasSym;
    int score = typeCount * 2 + length / 4; // basic scoring

    const char *strength;
    if (score <= 3) strength = "Very Weak";
    else if (score <= 5) strength = "Weak";
    else if (score <= 8) strength = "Medium";
    else if (score <= 11) strength = "Strong";
    else strength = "Very Strong";

    printf("\n\nGenerated Password: %s\n", password);
    printf("Length: %d  |  Types: %d (U:%d L:%d D:%d S:%d)\n",
           length, typeCount, hasUpper, hasLower, hasDigit, hasSym);
    printf("Estimated Strength: %s\n", strength);

}
