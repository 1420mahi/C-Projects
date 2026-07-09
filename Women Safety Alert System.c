#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[5];
    int count = 0, choice, i;

    while (1) {
        printf("\n===== Women Safety Alert System =====\n");
        printf("1. Add Emergency Contact\n");
        printf("2. View Contacts\n");
        printf("3. Send SOS Alert\n");
        printf("4. Emergency Helpline Numbers\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < 5) {
                    printf("Enter Contact Name: ");
                    scanf("%s", contacts[count].name);

                    printf("Enter Phone Number: ");
                    scanf("%s", contacts[count].phone);

                    count++;
                    printf("Contact Added Successfully!\n");
                } else {
                    printf("Contact List is Full!\n");
                }
                break;

            case 2:
                if (count == 0) {
                    printf("No Contacts Found!\n");
                } else {
                    printf("\nSaved Contacts:\n");
                    for (i = 0; i < count; i++) {
                        printf("%d. %s - %s\n",
                               i + 1,
                               contacts[i].name,
                               contacts[i].phone);
                    }
                }
                break;

            case 3:
                if (count == 0) {
                    printf("No emergency contacts available!\n");
                } else {
                    printf("\n*** SOS ALERT ACTIVATED ***\n");
                    for (i = 0; i < count; i++) {
                        printf("Alert sent to %s (%s)\n",
                               contacts[i].name,
                               contacts[i].phone);
                    }
                }
                break;

            case 4:
                printf("\nEmergency Helpline Numbers:\n");
                printf("112 - National Emergency\n");
                printf("1091 - Women Helpline\n");
                printf("181 - Women Helpline\n");
                break;

            case 5:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}