#include <stdio.h>

int main() {
    int choice;

    printf("Enter a number (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("btech ai\n")
	    break;
	case 2:
	    printf("btech aiml. (about intelligence)\n")
	    break;
	case 3:
	    printf("btech ece. (about electronics)\n")
	    break;
	case 4:
	    printf("btech ME (about mechanical things).\n")
	    break;
	     default:
            printf("Invalid choice.\n");
    }

    return 0;
}

