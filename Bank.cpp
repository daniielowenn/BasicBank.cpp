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
      std::cout << "2.
