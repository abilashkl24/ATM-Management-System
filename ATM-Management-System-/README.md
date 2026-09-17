# 🏧 ATM Management System in C

## 📌 Project Overview

The **ATM Management System** is a console-based application developed using the **C programming language**. It simulates basic ATM operations such as PIN verification, balance inquiry, cash withdrawal, cash deposit, and account management.

This project is designed to practice fundamental **C programming concepts and problem-solving logic**.

## 🎯 Features

* 🔐 PIN verification
* 💰 Check account balance
* 💵 Cash withdrawal
* 💳 Cash deposit
* 🚫 Insufficient balance checking
* 🔄 Multiple transactions
* 🚪 Exit option
* 📋 Menu-driven interface

## 🛠️ Technologies Used

* **Language:** C
* **Compiler:** GCC / Code::Blocks / Turbo C
* **Platform:** Console / Terminal

## ⚙️ How It Works

1. The program starts by asking the user to enter their PIN.
2. The entered PIN is verified.
3. If the PIN is correct, the ATM menu is displayed.
4. The user can select an operation:

   * Check Balance
   * Withdraw Money
   * Deposit Money
   * Exit
5. The program processes the selected operation.
6. The updated balance is displayed after the transaction.

## 🧠 C Concepts Used

* Variables and data types
* `if-else` statements
* `switch-case`
* `while` / `do-while` loops
* Functions
* User input using `scanf()`
* Output using `printf()`
* Conditional validation
* Basic arithmetic operations

## 📋 ATM Menu

```text
=========================
       ATM SYSTEM
=========================

1. Check Balance
2. Withdraw Money
3. Deposit Money
4. Exit

Enter your choice:
```

## 💻 Sample Output

```text
Enter PIN: ****

PIN Verified Successfully!

1. Check Balance
2. Withdraw
3. Deposit
4. Exit

Enter choice: 2

Enter withdrawal amount: 500

Please collect your cash.

Remaining Balance: 4500
```

## 🚫 Validation

The program checks:

* Incorrect PIN
* Invalid menu choice
* Withdrawal amount greater than available balance
* Invalid transaction amount

## 📂 Project Structure

```text
ATM-Management-System/
│
├── atm.c
└── README.md
```

## 🚀 Future Improvements

* Add multiple bank accounts
* Add account number verification
* Add transaction history
* Add PIN change option
* Store account data using files
* Add file handling for permanent data storage

## 👨‍💻 Author

**Abilash S**

Embedded Systems | C | Embedded C | Microcontrollers

## ⭐ About This Project

This project was developed to strengthen my **C programming fundamentals, logical thinking, menu-driven programming, and problem-solving skills**.
