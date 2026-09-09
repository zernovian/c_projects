#include <stdio.h>

int main() {
    int roll_no;
    char name[50];
    char father_name[50];
    char mother_name[50];
    char board[50];
    float percentage;
    float jee_percentile;
    char phone[15];
    char email[50];

    printf("What is your roll number?\n");
    scanf("%d", &roll_no);

    printf("What is your name?\n");
    scanf(" %[^\n]", name);

    printf("What is your father's name?\n");
    scanf(" %[^\n]", father_name);

    printf("What is your mother's name?\n");
    scanf(" %[^\n]", mother_name);

    printf("What is your education board?\n");
    scanf(" %[^\n]", board);

    printf("What is your 12th percentage?\n");
    scanf("%f", &percentage);

    printf("What is your JEE percentile?\n");
    scanf("%f", &jee_percentile);

    printf("What is your phone number?\n");
    scanf("%s", phone);

    printf("What is your email address?\n");
    scanf("%s", email);

    printf("\n--- Chitkara University Registration Details ---\n");
    printf("Roll No: %d\n", roll_no);
    printf("Name: %s\n", name);
    printf("Father's Name: %s\n", father_name);
    printf("Mother's Name: %s\n", mother_name);
    printf("Board: %s\n", board);
    printf("Percentage: %.2f%%\n", percentage);
    printf("JEE Percentile: %.2f\n", jee_percentile);
    printf("Phone: %s\n", phone);
    printf("Email: %s\n", email);

    return 0;
}
