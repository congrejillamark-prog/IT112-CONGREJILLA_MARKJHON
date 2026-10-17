#include <stdio.h>

int main() {
    float balance = 500.00;  
    int choice;
    float amount;

    do {
        printf("\n");
        printf("=====================================\n");
        printf("          🏦 BSIT BANK - ATM         \n");
        printf("=====================================\n");
        printf("  [1] Balance Inquiry\n");
        printf("  [2] Deposit\n");
        printf("  [3] Withdraw\n");
        printf("  [4] View Transaction Rules\n");
        printf("  [5] Exit\n");
        printf("=====================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n💰 Your current balance: ₱%.2f\n", balance);
                break;

            case 2:
                printf("\n💵 Enter amount to deposit: ");
                scanf("%f", &amount);

                if (amount < 100) {
                    printf("❌ Deposit denied! Minimum deposit is ₱100.00\n");
                } else {
                    balance += amount;
                    printf("✅ ₱%.2f deposited successfully!\n", amount);
                    printf("💰 New balance: ₱%.2f\n", balance);
                }
                break;

            case 3:
                printf("\n💸 Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount < 50) {
                    printf("❌ Withdrawal denied! Minimum withdrawal is ₱50.00\n");
                }
                else if (balance - amount < 100) {
                    printf("❌ Withdrawal denied! You must maintain at least ₱100.00 in your account.\n");
                }
                else if (amount > balance) {
                    printf("❌ Withdrawal denied! Insufficient balance.\n");
                }
                else {
                    balance -= amount;
                    printf("✅ You withdrew ₱%.2f successfully!\n", amount);
                    printf("💰 New balance: ₱%.2f\n", balance);
                }
                break;

            case 4:
                printf("\n📋 === TRANSACTION RULES ===\n");
                printf("• Initial Balance: ₱500.00\n");
                printf("• Minimum Deposit: ₱100.00\n");
                printf("• Minimum Withdrawal: ₱50.00\n");
                printf("• Maintaining Balance: ₱100.00\n");
                printf("===========================\n");
                break;

            case 5:
                printf("\n👋 Thank you for using BSIT BANK!\n");
                printf("   Have a great day!\n");
                break;

            default:
                printf("\n⚠️ Invalid choice! Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}
