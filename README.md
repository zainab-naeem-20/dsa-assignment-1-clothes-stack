# 👕 Clothes Pile Management System

<div align="center">

### 💻 Data Structures & Algorithms (DSA) Assignment

<p>
  <img src="https://img.shields.io/badge/Language-C++-blue?style=for-the-badge&logo=cplusplus" />
  <img src="https://img.shields.io/badge/Concept-Stack-purple?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Implementation-Linked%20List-green?style=for-the-badge" />
</p>

<p>
  <img src="https://visitor-badge.laobi.icu/badge?page_id=zainab-naeem-20.dsa-assignment-1-clothes-stack&left_color=purple&right_color=blue" alt="Repository Views" />
</p>

</div>

---

## 🚀 Project Overview

The **Clothes Pile Management System** is a C++ project that implements a **Stack Data Structure using a Linked List**.

It follows the **LIFO (Last In, First Out)** principle, which means the last clothing item added will be the first one removed.

The program also uses the last digit of the Virtual University ID (VUID: `BC250439760`) to perform dynamic clothing insertion according to the given assignment requirements.

---

## ✨ Key Features

- 🔗 **Dynamic Memory Allocation:** Uses Linked List pointers instead of fixed-size arrays.
- 📥 **Push Operation:** `pushCloth()` adds a new clothing item to the top of the stack.
- 📤 **Pop Operation:** `popCloth()` removes the top clothing item safely.
- 🔢 **VUID-Based Logic:** Implements dynamic insertion according to the last digit of the VUID.
- ⚠️ **Underflow Handling:** Handles attempts to remove items from an empty stack.
- 🧹 **Memory Management:** Uses a destructor (`~Stack()`) to release dynamically allocated memory.

---

## 🛠️ Code Architecture

The project consists of two main classes:

### 1. Node Class
- Stores the clothing item.
- Maintains a pointer to the next node.

### 2. Stack Class
- Manages the top pointer.
- Implements stack operations.
- Handles memory cleanup.

### 💻 Code Structure

```cpp
class Node {
    string cloth;
    Node* next;
};

class Stack {
    Node* top;

public:
    void pushCloth(string c);
    string popCloth();
    void displayClothStack() const;
    ~Stack();
};
```

---

## 📚 Concepts Used

- Stack Data Structure
- Linked Lists
- LIFO Principle
- Pointers
- Dynamic Memory Allocation
- Classes and Objects
- Constructors and Destructors
- Memory Management

---

## 💡 Developer Note

Building this project helped me understand how Stack works internally using Linked Lists. It improved my knowledge of pointers, dynamic memory allocation, and memory management through a practical C++ implementation.

---

## 👩‍💻 Developed By

**Zainab Naeem**

*Engineering Student | C++ & DSA Learner*

🔗 **GitHub:** [@zainab-naeem-20](https://github.com/zainab-naeem-20)

📂 **Project Repository:** [dsa-assignment-1-clothes-stack](https://github.com/zainab-naeem-20/dsa-assignment-1-clothes-stack)

---

<div align="center">

### 💜 Learning • Building • Growing

**One project at a time! 🚀**

</div>
