#include <stdio.h>
#include <string.h>

// Define constants for menu item prices
#define BURGER 5.00
#define PIZZA 8.00
#define PASTA 7.00
#define SODA 1.50
#define SALAD 4.00

// Function to display the menu
void display_menu() {
    printf("\nMenu:\n");
    printf("1. Burger - $%.2f\n", BURGER);
    printf("2. Pizza - $%.2f\n", PIZZA);
    printf("3. Pasta - $%.2f\n", PASTA);
    printf("4. Soda - $%.2f\n", SODA);
    printf("5. Salad - $%.2f\n", SALAD);
    printf("\n");
}

// Function to get the price of a menu item based on user choice
double get_price(int choice) {
    switch (choice) {
        case 1: return BURGER;
        case 2: return PIZZA;
        case 3: return PASTA;
        case 4: return SODA;
        case 5: return SALAD;
        default: return 0.0;
    }
}

// Function to get a valid quantity from the user
int get_quantity() {
    int quantity;
    while (1) {
        printf("Enter the quantity: ");
        if (scanf("%d", &quantity) == 1 && quantity > 0) {
            return quantity;
        } else {
            printf("Invalid input. Please enter a positive number.\n");
            while (getchar() != '\n'); // Clear invalid input
        }
    }
}

int main() {
    int choice;
    int quantity;
    double total_bill = 0.0;
    char more_items[4];

    while (1) {
        // Display the menu
        display_menu();
        
        // Get user's choice
        printf("Enter the food item number you want to order (1-5): ");
        while (1) {
            if (scanf("%d", &choice) == 1 && choice >= 1 && choice <= 5) {
                break;
            } else {
                printf("Invalid choice. Please enter a number between 1 and 5: ");
                while (getchar() != '\n'); // Clear invalid input
            }
        }
        
        // Get quantity of the chosen food item
        quantity = get_quantity();
        
        // Calculate the cost
        double cost = get_price(choice) * quantity;
        total_bill += cost;
        printf("Added %d x %d to the bill. Cost: $%.2f\n", quantity, choice, cost);
        
        // Ask if the user wants to order more
        printf("Do you want to select more items? (yes/no): ");
        while (1) {
            scanf("%s", more_items);
            if (strcmp(more_items, "yes") == 0 || strcmp(more_items, "no") == 0) {
                break;
            } else {
                printf("Invalid input. Please enter 'yes' or 'no': ");
            }
        }
        
        if (strcmp(more_items, "no") == 0) {
            break;
        }
    }
    
    // Display the final bill
    printf("\nFinal Bill: $%.2f\n", total_bill);
    printf("Thank you for ordering!\n");

    return 0;
}
