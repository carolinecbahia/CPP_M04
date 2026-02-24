# C++ - Milestone 04: Object-Oriented Programming

> A comprehensive series of modules introducing Object-Oriented Programming fundamentals using C++98, building progressively from basic classes to advanced concepts like inheritance, polymorphism, and exception handling.

[![Language](https://img.shields.io/badge/language-C++-blue.svg)]()
[![Standard](https://img.shields.io/badge/standard-C++98-orange.svg)]()
[![Status](https://img.shields.io/badge/status-In%20Development-yellow.svg)]()
[![Modules](https://img.shields.io/badge/modules-5-success.svg)]()

## 📋 Overview

The **C++ Milestone 04** is a series of progressive exercises designed to introduce you to **Object-Oriented Programming (OOP)** using the C++98 standard. You will discover new concepts step-by-step, with exercises that increase in complexity.

This milestone consists of **5 modules** (CPP00 through CPP04), each focusing on specific aspects of C++ and OOP design patterns.

### Learning Path

```
CPP00 → CPP01 → CPP02 → CPP03 → CPP04
 (Intro)  (Memory)  (Inheritance)  (Polymorphism)  (Advanced Concepts)
```

---

## 🎯 Modules Overview

### **Module 00: Introduction to OOP**
**Focus**: Namespaces, classes, member functions, I/O streams, initialization lists, static, const

- **Ex00**: Megaphone - Simple string manipulation to warm up
- **Ex01**: My Awesome PhoneBook - Design your first class-based application
- **Ex02**: The Job Of Your Dreams - Implement Account class from specification

**Key Concepts**: Classes, access modifiers (public/private), constructors, member functions, I/O

---

### **Module 01: Memory Management & Pointers**
**Focus**: Dynamic memory allocation, pointers to members, references, switch statements

- **Ex00**: BraiiiiiiinnnzzzZ - Understand stack vs. heap allocation
- **Ex01**: Moar brainz! - Array allocation with single new statement
- **Ex02**: HI THIS IS BRAIN - Demystify pointers and references
- **Ex03**: Unnecessary violence - References vs. pointers for class members
- **Ex04**: Sed is for losers - File I/O with string manipulation
- **Ex05**: Harl 2.0 - Pointers to member functions
- **Ex06**: Harl filter - Switch statements for filtering (optional)

**Key Concepts**: Memory allocation/deallocation, references, pointers, member function pointers, file operations

---

### **Module 02: Ad-hoc Polymorphism, Operator Overloading, and Orthodox Canonical Form**
**Focus**: Fixed-point arithmetic, operator overloading, Orthodox Canonical Form

- **Ex00**: My First Class in Orthodox Canonical Form
- **Ex01**: Towards a more useful fixed-point number
- **Ex02**: Now we are talking
- **Ex03**: BSP (Binary Space Partition) - More operator overloading
- **Ex04**: The BurningMan - Operator overloading for bitwise operations

**Key Concepts**: Orthodox Canonical Form (constructor, copy constructor, assignment operator, destructor), operator overloading, const correctness

---

### **Module 03: Inheritance**
**Focus**: Inheritance hierarchy, protected members, calling parent constructors

- **Ex00**: Humains
- **Ex01**: Serena Williams
- **Ex02**: Repetitive work
- **Ex03**: Now it gets interesting
- **Ex04**: Ultimate open-source fighting game

**Key Concepts**: Single inheritance, protected access, constructor chaining, method overriding, virtual methods

---

### **Module 04: Subtype Polymorphism**
**Focus**: Virtual functions, abstract classes, interfaces

- **Ex00**: Polymorphism
- **Ex01**: I don't want to set the world on fire
- **Ex02**: Abstract class
- **Ex03**: Interface & recap

**Key Concepts**: Virtual functions, pure virtual functions, abstract classes, dynamic dispatch, RTTI

---

## 📂 Project Structure

```
CPP/
├── README.md                    # This file
├── CPP00/                       # Module 00 - Introduction
│   ├── ex00/                    # Exercise 00
│   ├── ex01/                    # Exercise 01
│   └── ex02/                    # Exercise 02
├── CPP01/                       # Module 01 - Memory Management
│   ├── ex00/
│   ├── ex01/
│   ├── ex02/
│   ├── ex03/
│   ├── ex04/
│   ├── ex05/
│   └── ex06/
├── CPP02/                       # Module 02 - Operator Overloading
│   ├── ex00/
│   ├── ex01/
│   ├── ex02/
│   ├── ex03/
│   └── ex04/
├── CPP03/                       # Module 03 - Inheritance
│   ├── ex00/
│   ├── ex01/
│   ├── ex02/
│   ├── ex03/
│   └── ex04/
└── CPP04/                       # Module 04 - Polymorphism
    ├── ex00/
    ├── ex01/
    ├── ex02/
    └── ex03/
```

---

## 🚀 Getting Started

### Prerequisites

- **Compiler**: `c++` (GCC/Clang)
- **Standard**: C++98
- **Flags**: `-Wall -Wextra -Werror -std=c++98`
- **OS**: Linux / macOS

### Building a Module

Each module has its own exercises with individual Makefiles:

```bash
# Navigate to the module
cd CPP00/ex00

# Compile using Makefile
make

# Run the program
./megaphone "Hello World"

# Clean up object files
make clean

# Remove all compiled files
make fclean

# Rebuild
make re
```

### General Compilation Rules

All exercises must compile with:
```bash
c++ -Wall -Wextra -Werror -std=c++98 *.cpp -o executable_name
```

---

## 📚 Key Concepts Across Modules

### Module 00
✓ Classes and access modifiers  
✓ Member functions and constructors  
✓ Initialization lists  
✓ Input/Output streams  
✓ Static members and const correctness  

### Module 01
✓ Stack vs. heap allocation  
✓ Pointers and references  
✓ Memory management with new/delete  
✓ Pointers to member functions  
✓ File I/O operations  

### Module 02
✓ Operator overloading (arithmetic, comparison, assignment)  
✓ Orthodox Canonical Form (OCF)  
✓ Copy constructor and assignment operator  
✓ Const correctness  

### Module 03
✓ Inheritance and derived classes  
✓ Protected members  
✓ Constructor and destructor chains  
✓ Method overriding  

### Module 04
✓ Virtual functions and polymorphism  
✓ Pure virtual functions (abstract classes)  
✓ Dynamic binding  
✓ Interface design  

---

## 🔑 Important Rules

### Allowed
- ✅ Standard library (except STL in CPP00 & CPP01)
- ✅ C++ member functions and classes
- ✅ References and const correctness
- ✅ Virtual functions (from CPP03)

### Forbidden
- ❌ `printf()`, `malloc()`, `free()` (use `cout` and `new`/`delete`)
- ❌ `using namespace <ns_name>` and `friend` keyword
- ❌ STL containers/algorithms in CPP00 & CPP01 (allowed from CPP08)
- ❌ External libraries (Boost is forbidden)
- ❌ Function implementations in headers (except templates)

### Design Requirements
- Memory must be properly managed (no leaks)
- Classes must follow Orthodox Canonical Form (from CPP02 onwards)
- Header files must have include guards
- Each header must be independently usable

---

## 📖 Resources

### Official References
- [cplusplus.com - C++ Reference](http://www.cplusplus.com/)
- [cplusplus.com - String Reference](http://www.cplusplus.com/reference/string/string/)
- [cplusplus.com - Iomanip Reference](http://www.cplusplus.com/reference/iomanip/)

### Reference Materials
- Bjarne Stroustrup's "The C++ Programming Language"
- "Effective C++" by Scott Meyers

---

---

## 📊 Status & Progress

| Module | Status | Concepts |
|--------|--------|----------|
| CPP00 | 🔄 | Classes, OOP Basics |
| CPP01 | 🔄 | Memory, Pointers, References |
| CPP02 | 🔄 | Operator Overloading, OCF |
| CPP03 | 🔄 | Inheritance |
| CPP04 | 🔄 | Polymorphism, Virtual Functions |

---

## 🔗 Individual Module READMEs

Each module has its own detailed documentation. For specific module details, refer to:
- [CPP00 Subject](../templates/subjects/cpp00_subject.md)
- [CPP01 Subject](../templates/subjects/cpp01_subject.md)

---

---

## 📄 License

These projects are part of the 42 School curriculum.

---

**Repository**: C++ Modules - 42 School Milestone 04  
**Language**: C++98  
**Last Updated**: February 2026

**Start with CPP00 and progress sequentially. Each module builds on the previous one!** 🚀