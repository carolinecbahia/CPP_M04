# C++ Module 02: Ad-hoc Polymorphism, Operator Overloading and Orthodox Canonical Form

*This project has been created as part of the 42 curriculum.*

[![Language](https://img.shields.io/badge/language-C%2B%2B-blue.svg)]()
[![Standard](https://img.shields.io/badge/standard-C%2B%2B98-blue.svg)]()
[![Status](https://img.shields.io/badge/status-In%20Progress-yellow.svg)]()

## Description

Module 02 introduces operator overloading and the Orthodox Canonical Form (OCF), fundamental concepts for creating robust C++ classes. This module covers creating the four required special member functions, overloading various operators to enable intuitive class usage, and working with fixed-point numbers for practical mathematical applications. Students will master the techniques needed to make custom classes behave like built-in types.

**Key Topics:**
- Orthodox Canonical Form (Default Constructor, Copy Constructor, Assignment Operator, Destructor)
- Operator overloading (arithmetic, comparison, increment/decrement)
- Fixed-point number representation and arithmetic
- Static member functions
- Method overloading and const correctness
- Binary Space Partitioning (BSP) algorithms

## Technical Requirements

| Requirement | Details |
|------------|---------|
| **Language** | C++98 standard |
| **Compiler** | c++ with flags `-Wall -Wextra -Werror -std=c++98` |
| **Build System** | Makefile |
| **Memory Management** | No leaks, proper resource cleanup |
| **Design Pattern** | Orthodox Canonical Form mandatory |
| **Code Style** | Clean, readable C++ |

## Compilation

```bash
# Navigate to module directory
cd CPP02

# Compile all exercises
make

# Clean object files
make clean

# Full cleanup (removes executables)
make fclean

# Rebuild
make re
```

## Project Structure

```
CPP02/
├── ex00/                    # Fixed-point numbers intro
│   ├── Makefile
│   ├── main.cpp
│   ├── Fixed.hpp
│   ├── Fixed.cpp
│   └── [supporting files]
├── ex01/                    # Constructors and conversions
│   ├── Makefile
│   ├── Fixed.hpp
│   ├── Fixed.cpp
│   └── [supporting files]
├── ex02/                    # Operator overloading
│   ├── Makefile
│   ├── Fixed.hpp
│   ├── Fixed.cpp
│   └── [supporting files]
├── ex03/                    # BSP point-in-triangle
│   ├── Makefile
│   ├── Point.hpp
│   ├── Point.cpp
│   ├── bsp.cpp
│   └── [supporting files]
└── README.md
```

## Exercises Overview

### Exercise 00: My First Class in Orthodox Canonical Form
Implement the `Fixed` class representing fixed-point numbers. Covers the four essential member functions and basic member access methods.

**Concepts:**
- Default constructor initialization
- Copy constructor for deep copying
- Assignment operator for safe assignment
- Destructor for cleanup
- Private member variables and static constants

### Exercise 01: Towards a More Useful Fixed-point Number Class
Extend the `Fixed` class with type conversion constructors and conversion functions. Enable integration with standard C++ types.

**Concepts:**
- Constructor overloading
- Implicit type conversions (int to Fixed, float to Fixed)
- Conversion methods (toFloat, toInt)
- Operator overloading (stream insertion `<<`)

### Exercise 02: Now We're Talking
Implement comprehensive operator overloading for comparison, arithmetic, and increment/decrement operations. Add static utility functions.

**Concepts:**
- Comparison operators (`>`, `<`, `>=`, `<=`, `==`, `!=`)
- Arithmetic operators (`+`, `-`, `*`, `/`)
- Pre/post increment and decrement operators
- Static member functions with const and non-const variants
- min/max functions for Fixed objects

### Exercise 03: BSP (Binary Space Partitioning)
Create a `Point` class and implement the binary space partitioning algorithm to determine if a point lies within a triangle.

**Concepts:**
- Const member variables in classes
- Custom constructors with multiple parameters
- Algorithm implementation (cross product for point-in-triangle)
- Geometric computations

## Key Concepts Covered

### Orthodox Canonical Form (OCF)

Every class must implement four special member functions:

```cpp
class MyClass
{
public:
    MyClass();                              // Default constructor
    MyClass(const MyClass& other);          // Copy constructor
    MyClass& operator=(const MyClass& rhs); // Assignment operator
    ~MyClass();                             // Destructor
};
```

| Member Function | Purpose | When Called |
|-----------------|---------|------------|
| **Default Constructor** | Initialize object with default values | `MyClass obj;` |
| **Copy Constructor** | Create copy of existing object | `MyClass obj2(obj1);` |
| **Assignment Operator** | Assign one object's value to another | `obj1 = obj2;` |
| **Destructor** | Clean up resources | When object goes out of scope |

### Fixed-Point Numbers

Fixed-point representation provides consistent precision for financial and graphical applications:

- **Precision:** 8 fractional bits (value × 256)
- **Advantage:** No floating-point rounding errors
- **Storage:** Single integer value

```cpp
// Internal representation
private:
    int _value;           // Stores value × 256
    static const int _bits = 8;  // Number of fractional bits
```

### Operator Overloading

| Category | Operators | Example |
|----------|-----------|---------|
| **Comparison** | `>`, `<`, `>=`, `<=`, `==`, `!=` | `if (a > b)` |
| **Arithmetic** | `+`, `-`, `*`, `/` | `c = a + b;` |
| **Increment** | `++a`, `a++`, `--a`, `a--` | Advance value by epsilon |
| **Stream** | `<<` | `std::cout << fixed;` |

## Important Rules

✅ **Allowed:**
- `roundf()` from `<cmath>` (for ex01 and ex02)
- All operator overloading
- Static member functions

❌ **Forbidden:**
- C-style `printf()`, `malloc()`, `free()`
- `using namespace std;`
- `friend` keyword
- Function implementation in header files (except templates)
- STL containers/algorithms

## Execution Examples

```bash
# Exercise 00: Basic fixed-point operations
./fixed00
# Output:
# Default constructor called
# Copy constructor called
# Copy assignment operator called
# 0 0 0

# Exercise 02: Operator demonstration
./fixed02
# Output:
# 0
# 0.00390625
# 0.00390625
# 0.00390625
# 0.0078125
# 10.1016
# 10.1016

# Exercise 03: Point in triangle test
./bsp
# Returns true/false for point inclusion
```

## Testing Strategy

```bash
# Test basic fixed-point arithmetic
./fixed00 | grep "constructor"

# Verify operator overloading
./fixed02 | head -5

# Test BSP algorithm with various points
# Points on vertices (should return false)
# Points on edges (should return false)
# Points inside triangle (should return true)
# Points outside triangle (should return false)

# Check for memory leaks
valgrind --leak-check=full ./fixed00
```

## Learning Outcomes

After completing this module, you should understand:
- How to implement the Orthodox Canonical Form correctly
- When and how to overload operators
- The difference between pre and post-increment
- Static member functions and their uses
- Mathematical concepts (fixed-point, BSP)
- Const correctness in C++

## Performance Characteristics

| Operation | Complexity | Notes |
|-----------|-----------|-------|
| Arithmetic | O(1) | Fixed-point operations are fast |
| Comparison | O(1) | Direct integer comparison |
| Point-in-Triangle | O(1) | Constant time geometric test |

## Common Issues

**Issue:** Compiler error "cannot bind non-const reference"
- **Solution:** Use `const` references in copy constructor: `const MyClass& other`

**Issue:** Assignment operator doesn't chain correctly
- **Solution:** Return `*this` by reference: `return *this;`

**Issue:** Post-increment doesn't work as expected
- **Solution:** Create temporary, increment object, return temporary

**Issue:** Static functions can't access member variables
- **Solution:** Static functions operate on class level, not instance level

**Issue:** Fixed-point arithmetic produces incorrect results
- **Solution:** Remember to account for 8 fractional bits in calculations

## Debugging Tips

```cpp
// Add diagnostic output to verify OCF calls
std::cout << "Copy constructor called" << std::endl;
std::cout << "Assignment operator called" << std::endl;

// Verify operator chain
Fixed a, b, c;
c = b = a;  // Should work if operator= returns *this

// Test edge cases
Fixed zero;              // Default: 0
Fixed small(0.01f);      // Very small value
Fixed large(1024);       // Large value
Fixed negative(-42.5f);  // Negative number
```

## Resources

- [cppreference - Operator Overloading](https://en.cppreference.com/w/cpp/language/operators)
- [cppreference - Special Member Functions](https://en.cppreference.com/w/cpp/language/member_functions)
- [Fixed-Point Number Arithmetic](https://en.wikipedia.org/wiki/Fixed-point_arithmetic)
- [Binary Space Partitioning](https://en.wikipedia.org/wiki/Binary_space_partitioning)

## Evaluation Criteria

- ✅ Correct implementation of OCF in all classes
- ✅ All operators behave correctly
- ✅ No memory leaks
- ✅ Fixed-point arithmetic is accurate
- ✅ BSP algorithm correctly identifies point location
- ✅ Const correctness throughout
- ✅ Code compiles without warnings
- ✅ Follows C++98 standard strictly

---

**Status:** 🔄 In Progress  
**Difficulty Level:** Medium-High  
**Key Concepts:** Orthodox Canonical Form, Operator Overloading, Fixed-Point Arithmetic  
**Last Updated:** February 24, 2026
