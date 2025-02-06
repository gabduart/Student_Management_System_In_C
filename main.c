#include <stdio.h>
#include <stdlib.h>

void printChar(char ch, int n);
void title();
void menu();
void display();


int main() {
    display();
    
    return 0;
}

void printChar(char ch, int n) {
    while(n--) {
        putchar(ch);
    }
}

void title() {
    system("cls");
    printf("\n\n\t");
    printChar('=', 19);
    printf(" Student Management System ");
    printChar('=', 19);
    printf("\n");
}

void menu() {
    int choice;

    do {
        system("cls");
        printf("\n\n\t");
        printChar('=', 19);
        printf(" Main Menu ");
        printChar('=', 19);
        printf("\n");

        printf("\n\t[1] Add Student");
        printf("\n\t[2] Modify Student");
        printf("\n\t[3] Show All Student");
        printf("\n\t[4] Individual View");
        printf("\n\t[5] Remove Student");
        printf("\n\n\t[0] Logout\n\n\t");

        printChar('=', 49);
        
        printf("\n\tEnter your option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // addStudent();
                break;
            case 2:
                // modifyStudent();
                break;
            case 3:
                // showAllStudents();
                break;
            case 4:
                // individualView();
                break;
            case 5:
                // removeStudent();
                break;
            case 0:
                printf("\n\tLogging out...\n");
                break;
            default:
                printf("\n\tInvalid choice, try again!\n");
                sleep(1);
        }
    } while (choice != 0);
    getchar();
    
}

void display() {
    title();

    printf("\n\t\t\t      Gabriel H. D. Pereira\n");
    printf("\n\t\t\t            Sao Paulo");
    printf("\n\t\t\t              2025\n\t");
    printChar('=', 65);
    printf("\n\n\t\t\t   Press any key to continue...");
    getchar();

    sleep(1);
    menu();
}