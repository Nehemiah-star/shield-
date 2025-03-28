#include <stdio.h>

int main() {
    int choice;

    printf("Enter a number (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("You selected One.\n")
	    break;
	case 2:
	    printf("btech aiml.\n")
	    break;
	case 3:
	    printf("btech ece.\n")
	    break;
	case 4:
	    printf("btech ME.\n")
	    break;
	     default:
            printf("Invalid choice.\n");
    }

    return 0;
}

