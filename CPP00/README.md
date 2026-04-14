# C++ Module 00: Introduction to Object-Oriented Programming


*This project has been created as part of the 42 curriculum.*

[![Grade](https://img.shields.io/badge/grade-80%2F100-orange.svg)]()
[![Language](https://img.shields.io/badge/language-C%2B%2B-blue.svg)]()
[![Standard](https://img.shields.io/badge/standard-C%2B%2B98-blue.svg)]()
[![Status](https://img.shields.io/badge/status-Completed-brightgreen.svg)]()

## Description

Module 00 introduces the fundamentals of Object-Oriented Programming (OOP) in C++. This module covers the basic concepts required to transition from procedural C programming to object-oriented design. Students will learn about classes, member functions, constructors, and destructors while adhering to the C++98 standard.

**Key Topics:**
- Class definition and member variables
- Constructors and destructors
- Member functions and methods
- Introduction to encapsulation
- Input/output with C++ streams

## Technical Requirements

| Requirement | Details |
|------------|---------|
| **Language** | C++98 standard |
| **Compiler** | c++ with flags `-Wall -Wextra -Werror -std=c++98` |
| **Build System** | Makefile |
| **Memory Management** | No memory leaks allowed |
| **Code Style** | Clean, readable C++ code (no Norminette enforcement) |

## Compilation

```bash
# Navigate to module directory
cd CPP00

# Compile all exercises
make

# Clean object files
make clean

# Full cleanup (removes executable)
make fclean

# Rebuild
make re
```

## Project Structure

```
CPP00/
├── ex00/                    # First exercise
│   ├── Makefile
│   ├── main.cpp
│   ├── ClassName.hpp        # Class definition
│   └── ClassName.cpp        # Class implementation
├── ex01/                    # Additional exercises
│   ├── Makefile
│   └── [class files]
├── ex02/
│   ├── Makefile
│   └── [class files]
└── README.md
```

## Exercises Overview

### Exercise 00: Megaphone
Create a simple class that transforms input to uppercase and displays it. Introduces basic class structure and member functions.

### Exercise 01: My Awesome PhoneBook
Implement a basic phonebook using a class with member variables and functions. Learn about data encapsulation and class methods.

### Exercise 02: The Job of Your Dreams
Build a more complex class demonstrating constructors, destructors, and proper resource management.

## Key Concepts Covered

| Concept | Purpose |
|---------|---------|
| **Classes** | Fundamental OOP construct for bundling data and behavior |
| **Constructors** | Initialize objects with default or provided values |
| **Destructors** | Clean up resources when objects are destroyed |
| **Member Functions** | Methods that operate on class data |
| **std::string** | C++ string class (preferred over C strings) |
| **std::cin / std::cout** | Standard input/output streams |

## Important Rules

✅ **Allowed:**
- Standard library features (except STL containers)
- C++ stream operations (`<iostream>`, `<fstream>`)
- String operations (`<string>`)

❌ **Forbidden:**
- C-style `printf()`, `malloc()`, `free()`
- `using namespace std;`
- External libraries (Boost, C++11 features)

## Execution Examples

```bash
# Example for Megaphone
./megaphone "hello"
# Output: HELLO

# Example for PhoneBook
./phonebook
# Interactive phonebook interface
```

## Testing

Test your implementations with:
- Valid inputs (normal cases)
- Edge cases (empty input, special characters)
- Boundary conditions (maximum contacts, etc.)
- Memory management (verify with valgrind if applicable)

## Learning Outcomes

After completing this module, you should understand:
- How to structure code using classes
- Object initialization and cleanup
- Member variable access and modification
- Basic OOP design principles
- C++ syntax and conventions

## Compilation Flags Explained

| Flag | Purpose |
|------|---------|
| `-Wall` | Enable all common compiler warnings |
| `-Wextra` | Enable additional warnings beyond -Wall |
| `-Werror` | Treat warnings as errors (fail compilation) |
| `-std=c++98` | Enforce C++98 standard compliance |

## Common Issues

**Issue:** Compilation fails with C++11 features used
- **Solution:** Verify you're not using auto, nullptr, range-based for loops, etc.

**Issue:** Header file circular dependencies
- **Solution:** Use include guards (`#ifndef`, `#define`, `#endif`)

**Issue:** Constructor/destructor messages not displaying
- **Solution:** Ensure constructors/destructors use `std::cout` with `std::endl`

## Resources

- [C++ Reference - Classes](https://en.cppreference.com/w/cpp/language/class)
- [C++ Input/Output](https://en.cppreference.com/w/cpp/io)
- [cppreference - Constructors and Destructors](https://en.cppreference.com/w/cpp/language/constructor)

## Evaluation Criteria

- ✅ All exercises compile without warnings/errors
- ✅ Correct output for all test cases
- ✅ No memory leaks
- ✅ Clean, readable code
- ✅ Proper constructor/destructor implementation
- ✅ Follows C++98 standard strictly

---

**Status:** ✅ Completed  
**Last Updated:** April 14, 2026
