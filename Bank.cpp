#include <iostream>

class BankAccount {
  public:
    // Constructor to initialize the account with a given balance
    BankAccount(double balance) {
      this->balance = balance;
    }

    // Function to deposit money
    void deposit(double amount) {
      balance += amount;
      std::cout << "Deposited $" << amount << ". Current balance: $" << balance << std::endl;
    }

    // Function to withdraw money
    void withdraw(double amount) {
      if (balance < amount) {
        std::cout << "Error: Insufficient funds" << std::endl;
      } else {
        balance -= amount;
        std::cout << "Withdrew $" << amount << ". Current balance: $" << balance << std::endl;
      }
    }

    // Function to check the current balance
    double checkBalance() {
      return balance;
    }

  private:
    double balance;
};

int main() {
    BankAccount account(100);
    while (true) {
      std::cout << "Menu:" << std::endl;
      std::cout << "1. Deposit money" << std::endl;
      std::cout << "2. Withdraw money" << std::endl;
std::cout << "3. Check balance" << std::endl;
std::cout << "4. Exit" << std::endl;
int choice;
std::cin >> choice;
if (choice == 1) {
double amount;
std::cout << "Enter the amount to deposit: ";
std::cin >> amount;
account.deposit(amount);
} else if (choice == 2) {
double amount;
std::cout << "Enter the amount to withdraw: ";
std::cin >> amount;
account.withdraw(amount);
} else if (choice == 3) {
std::cout << "Current balance: $" << account.checkBalance() << std::endl;
} else if (choice == 4) {
break;
} else {
std::cout << "Invalid choice" << std::endl;
}
}
return 0;
}
