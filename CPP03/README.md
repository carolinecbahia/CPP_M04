# C++ Module 03: Inheritance

*This project has been created as part of the 42 curriculum.*

[![Grade](https://img.shields.io/badge/grade-xx%2F100-brightgreen.svg)]()
[![Language](https://img.shields.io/badge/language-C%2B%2B-blue.svg)]()
[![Standard](https://img.shields.io/badge/standard-C%2B%2B98-blue.svg)]()
[![Status](https://img.shields.io/badge/status-In%20Progress-yellow.svg)]()

## Description

Module 03 explores inheritance and class hierarchies in C++. Students will implement single inheritance, understand constructor and destructor chaining, manage inheritance relationships, and solve the diamond problem using multiple inheritance. This module demonstrates how to effectively organize code through inheritance while maintaining proper object lifecycle management.

**Key Topics:**
- Single inheritance (derived classes inheriting from base classes)
- Constructor and destructor chaining
- Method overriding in derived classes
- Multiple inheritance and virtual inheritance
- Protected and public access modifiers
- The diamond problem and its solutions

## Technical Requirements

| Requirement | Details |
|------------|---------|
| **Language** | C++98 standard |
| **Compiler** | c++ with flags `-Wall -Wextra -Werror -std=c++98` |
| **Build System** | Makefile |
| **Memory Management** | No leaks, proper cleanup in all classes |
| **Design Pattern** | Orthodox Canonical Form (all classes) |
| **Code Style** | Clean, readable C++ with explicit inheritance |

## Compilation

```bash
# Navigate to module directory
cd CPP03

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
CPP03/
├── ex00/                    # Basic single inheritance
│   ├── Makefile
│   ├── main.cpp
│   ├── ClapTrap.hpp
│   ├── ClapTrap.cpp
│   └── [supporting files]
├── ex01/                    # Derived class (ScavTrap)
│   ├── Makefile
│   ├── ClapTrap.hpp
│   ├── ClapTrap.cpp
│   ├── ScavTrap.hpp
│   ├── ScavTrap.cpp
│   └── [supporting files]
├── ex02/                    # Additional derived class (FragTrap)
│   ├── Makefile
│   ├── ClapTrap.hpp
│   ├── ClapTrap.cpp
│   ├── FragTrap.hpp
│   ├── FragTrap.cpp
│   └── [supporting files]
├── ex03/                    # Multiple inheritance (DiamondTrap)
│   ├── Makefile
│   ├── ClapTrap.hpp
│   ├── ClapTrap.cpp
│   ├── ScavTrap.hpp
│   ├── ScavTrap.cpp
│   ├── FragTrap.hpp
│   ├── FragTrap.cpp
│   ├── DiamondTrap.hpp
│   ├── DiamondTrap.cpp
│   └── [supporting files]
└── README.md
```

## Class Hierarchy

```
        ClapTrap
         /    \
    ScavTrap  FragTrap
         \    /
       DiamondTrap
```

## Exercises Overview

### Exercise 00: Aaaaand... OPEN!
Implement the base class `ClapTrap` with fundamental attributes and behaviors.

**Concepts:**
- Base class design
- Member variables (private)
- Public member functions
- Constructors and destructors with diagnostic messages
- Basic class interface

**ClapTrap Attributes:**
- `name`: Robot identifier
- `hitPoints`: Health (initialized to 10)
- `energyPoints`: Energy pool (initialized to 10)
- `attackDamage`: Damage per attack (initialized to 0)

### Exercise 01: Serena, my love!
Create `ScavTrap` derived from `ClapTrap` demonstrating inheritance.

**Concepts:**
- Single inheritance syntax
- Constructor chaining (base class constructor called first)
- Destructor chaining (base class destructor called last)
- Overriding inherited behavior
- Specialized attributes (100 HP, 50 energy, 20 damage)
- Special ability: `guardGate()` method

**Constructor Order:**
```
ScavTrap constructor called
ClapTrap constructor called

--- (ScavTrap lifetime) ---

ClapTrap destructor called
ScavTrap destructor called
```

### Exercise 02: Repetitive work
Create `FragTrap` with similar but distinct characteristics.

**Concepts:**
- Building multiple derived classes from same base
- Different initialization values per derived class
- Derived class-specific abilities (`highFivesGuys()`)
- Proper inheritance implementation pattern

**FragTrap Attributes:**
- Hit Points: 100 (like ScavTrap)
- Energy Points: 100 (more than ScavTrap)
- Attack Damage: 30 (more than ScavTrap)

### Exercise 03: Now it's weird!
Implement multiple inheritance with `DiamondTrap` inheriting from both `ScavTrap` and `FragTrap`.

**Concepts:**
- Multiple inheritance
- The diamond problem (ambiguous base class)
- Virtual inheritance (solving the diamond)
- Attribute shadowing and resolution
- Complex constructor initialization order

**Diamond Problem:**
```
        ClapTrap
         /    \
    ScavTrap  FragTrap
         \    /
       DiamondTrap
```

**Solution Pattern:**
```cpp
class ScavTrap : public virtual ClapTrap { ... };
class FragTrap : public virtual ClapTrap { ... };
```

**DiamondTrap Attributes:**
- `name`: DiamondTrap's own name
- `ClapTrap::name`: Suffixed with "_clap_name"
- HP: From FragTrap (100)
- Energy: From ScavTrap (50)
- Damage: From FragTrap (30)
- Attack: Uses ScavTrap's implementation
- Special ability: `whoAmI()` displays both names

## Key Concepts Covered

### Inheritance Syntax

```cpp
class Derived : public Base
{
    // Derived class inherits from Base
};
```

### Constructor Initialization Order

| Order | Constructor Type | Example |
|-------|-----------------|---------|
| **1st** | Base class | `ClapTrap()` called automatically |
| **2nd** | Current class | `ScavTrap()` body executed |
| **Last (Reverse)** | Destructors | `~ScavTrap()` then `~ClapTrap()` |

### Virtual Inheritance (Solving Diamond Problem)

```cpp
class ScavTrap : virtual public ClapTrap { };
class FragTrap : virtual public ClapTrap { };

// Now DiamondTrap has only ONE ClapTrap base
class DiamondTrap : public ScavTrap, public FragTrap { };
```

### Method Overriding

```cpp
class Base
{
public:
    virtual void method() { std::cout << "Base\n"; }
};

class Derived : public Base
{
public:
    void method() { std::cout << "Derived\n"; }  // Override
};
```

## Important Rules

✅ **Allowed:**
- Public, protected, private inheritance
- Constructor/destructor chaining
- Virtual functions and virtual inheritance
- Method overriding

❌ **Forbidden:**
- C-style `printf()`, `malloc()`, `free()`
- `using namespace std;`
- `friend` keyword (results in -42 grade)
- STL containers

## Execution Examples

```bash
# Exercise 00: Basic ClapTrap
./claptrap00
# Output:
# ClapTrap: scav_if attacks target, causing 0 damage!
# ClapTrap: scav_if is repaired of 10 hit points!

# Exercise 01: ScavTrap inheritance
./claptrap01
# Constructor chaining demonstrated
# ClapTrap constructor called
# ScavTrap constructor called
# (ScavTrap operations)
# ScavTrap destructor called
# ClapTrap destructor called

# Exercise 03: Multiple inheritance (DiamondTrap)
./claptrap03
# Shows complex initialization with virtual inheritance
```

## Testing Strategy

```bash
# Test constructor/destructor order
./program 2>&1 | grep -E "constructor|destructor"

# Verify inherited methods work correctly
./program | grep "attacks\|repaired\|Gate\|fives\|Am"

# Check that DiamondTrap combines attributes correctly
./program | grep "name\|HP\|Energy\|Damage"

# Memory leak detection
valgrind --leak-check=full ./program
```

## Learning Outcomes

After completing this module, you should understand:
- How inheritance enables code reuse
- Constructor and destructor execution order
- The diamond problem and solutions
- Method overriding and virtual functions
- Protected member access
- Multiple inheritance complexity
- Proper class hierarchies

## Common Issues

**Issue:** "Ambiguous base class" compilation error
- **Solution:** Use virtual inheritance: `class Derived : virtual public Base`

**Issue:** Constructor not calling base class constructor
- **Solution:** Explicitly initialize base in initializer list: `Derived() : Base() { }`

**Issue:** Destructor chaining order wrong
- **Solution:** Destructors automatically call base destructors in reverse order—don't manually call them

**Issue:** Method override not working (calls base version)
- **Solution:** Ensure base class method is declared `virtual`

**Issue:** DiamondTrap constructor fails
- **Solution:** With virtual inheritance, must initialize virtual base explicitly in most-derived constructor

## Compiler Flags for Debugging

```bash
# Show compilation details
make clean && make V=1

# Compile with debug symbols
c++ -g -Wall -Wextra -Werror -std=c++98 *.cpp

# Use -Wshadow to detect member shadowing issues
c++ -Wshadow -Wall -Wextra -Werror -std=c++98 *.cpp
```

## Performance Considerations

| Operation | Complexity | Notes |
|-----------|-----------|-------|
| Constructor call | O(n) | Where n = inheritance depth |
| Method call | O(1) | Even with virtual methods |
| Dynamic dispatch | O(1) | Virtual table lookup is constant |

## Resources

- [cppreference - Inheritance](https://en.cppreference.com/w/cpp/language/derived_class)
- [cppreference - Virtual Functions](https://en.cppreference.com/w/cpp/language/virtual)
- [Diamond Problem Explanation](https://en.wikipedia.org/wiki/Multiple_inheritance#The_diamond_problem)
- [Virtual Inheritance](https://en.cppreference.com/w/cpp/language/derived_class#Virtual_base_classes)

## Evaluation Criteria

- ✅ Correct inheritance implementation
- ✅ Proper constructor/destructor chaining
- ✅ All special methods working as specified
- ✅ No memory leaks across all classes
- ✅ Correct attribute values per class
- ✅ Multiple inheritance solved correctly (ex03)
- ✅ Code compiles without warnings
- ✅ Follows C++98 standard strictly

---

**Status:** 🔄 In Progress  
**Difficulty Level:** Medium-High  
**Key Concepts:** Inheritance, Virtual Functions, Multiple Inheritance, Diamond Problem  
**Last Updated:** February 24, 2026
