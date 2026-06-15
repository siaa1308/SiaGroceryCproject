# 🛒 Grocery Store Management System

A command-line Grocery Store Management System built in C that simulates real-world retail operations including inventory management, customer management, billing, and persistent data storage using CSV files.

The project demonstrates software engineering principles such as modular programming, file handling, data management, and build automation using Makefiles.

# 📋 Features

👥 Customer Management

Add new customers
Store customer records
Retrieve customer information
Persistent customer data storage using CSV files
📦 Inventory Management
Add grocery items
Update item information
Manage stock quantities
View available inventory
Store inventory data in CSV format
🧾 Billing System
Generate customer bills
Calculate purchase totals
Display transaction details
Produce formatted receipts
💾 Data Persistence
Customer records stored in customers.csv
Inventory records stored in items.csv
Data retained between program executions
⚙️ Modular Design

The application is split into multiple modules:

Module	-> Responsibility
main.c	-> Program entry point
customerOperations.c -> Customer management
itemOperations.c -> Inventory management
fileOperations.c	-> File handling and storage
printBill.c	-> Bill generation


📁 Project Structure

grocery/
│
├── Makefile
│
├── main.c
│
├── customerOperations.c
├── customerOperations.h
│
├── itemOperations.c
├── itemOperations.h
│
├── fileOperations.c
├── fileOperations.h
│
├── printBill.c
├── printBill.h
│
├── customers.csv
└── items.csv

🏗️ Build Instructions

Compile the project:
make

Run the executable:
./grocery_management_system

Clean generated files:
make clean

🔧 Compiler Configuration

The project is compiled using: gcc


⭐ Why This Project?

This project was developed to strengthen understanding of:

C Programming
Real-world CRUD Operations
Data Persistence
Software Modularity
Build Automation with Makefiles

while implementing a practical retail management system.
