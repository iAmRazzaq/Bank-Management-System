# 🏦 Bank Management System (C++)

A simple **Bank Management System** built using **C++** and **Object-Oriented Programming (OOP)** principles.  
This console-based application allows users to **create bank accounts**, **deposit and withdraw money**, and **view account details**.


## 📘 Overview

The **Bank Management System** simulates basic banking operations like creating accounts, depositing, withdrawing, and displaying account information.  
Each account is represented as an object of the `BankAccount` class, and all accounts are stored in a dynamic `vector`.

---

## ⚙️ Features

✅ **Create Account**  
    Input account holder name, account number, and initial balance.  
    Automatically stores account in the system.

✅ **Deposit Amount**  
    Deposit money into an account.  
    Displays previous balance, deposited amount, and new total balance.

✅ **Withdraw Amount**  
    Withdraw money from an account.  
    Displays previous balance, withdrawn amount, and remaining balance.

✅ **Display Account Details**  
    Shows complete account information (Name, Number, and Current Balance).

✅ **Exit Option**  
    Safely exits the application.



## 💻 Technologies Used
- **Language:** C++  
- **Concepts:**  
  Classes & Objects  
  Encapsulation  
  Constructors  
  Vectors (`std::vector`)  
  Loops and Conditional Statements  



## 🧮 Example Usage

     text
==== Bank Management System ====
1. Create Account
2. Deposit Amount
3. Withdraw Amount
4. Display Account Details
5. Exit
Enter your choice: 1

Enter Account Holder Name: Ali
Enter Account Number: 12345
Enter Initial Balance: 5000
✅ Account Created Successfully!

Enter your choice: 2
Enter Account Number: 12345
Enter Deposit Amount: 1000

--- Deposit Transaction ---
Previous Balance : Rs. 5000
Deposited Amount  : Rs. 1000
Total Balance     : Rs. 6000
----------------------------
