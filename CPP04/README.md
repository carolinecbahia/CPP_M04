# C++ Module 04: Subtype Polymorphism, Abstract Classes and Interfaces

*This project has been created as part of the 42 curriculum.*

[![Language](https://img.shields.io/badge/language-C%2B%2B-blue.svg)]()
[![Standard](https://img.shields.io/badge/standard-C%2B%2B98-blue.svg)]()
[![Status](https://img.shields.io/badge/status-In%20Progress-yellow.svg)]()

## Description

Module 04 introduces polymorphism, abstract classes, and interface design patterns in C++. Students will implement virtual functions to enable runtime polymorphism, create abstract classes that define contracts for derived classes, and implement the factory pattern. This module demonstrates professional object-oriented design practices through real-world examples inspired by game development patterns.

**Key Topics:**
- Subtype polymorphism and virtual functions
- Abstract classes and pure virtual functions
- Interface design using pure abstract classes
- The factory pattern for object creation
- Deep copying in polymorphic hierarchies
- Template patterns through inheritance

## Technical Requirements

| Requirement | Details |
|------------|---------|
| **Language** | C++98 standard |
| **Compiler** | c++ with flags `-Wall -Wextra -Werror -std=c++98` |
| **Build System** | Makefile |
| **Memory Management** | Strict: no leaks, proper cleanup in virtual hierarchies |
| **Design Pattern** | Orthodox Canonical Form + Virtual Destructors |
| **Code Style** | Clean, professional C++ with interface design |

## Compilation

```bash
# Navigate to module directory
cd CPP04

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
CPP04/
├── ex00/                    # Basic polymorphism
│   ├── Makefile
│   ├── main.cpp
│   ├── Animal.hpp
│   ├── Animal.cpp
│   ├── Dog.hpp
│   ├── Dog.cpp
│   ├── Cat.hpp
│   ├── Cat.cpp
│   └── [supporting files]
├── ex01/                    # Polymorphism with deep copy
│   ├── Makefile
│   ├── Brain.hpp
│   ├── Brain.cpp
│   ├── [Animal classes]
│   └── [supporting files]
├── ex02/                    # Abstract classes
│   ├── Makefile
│   ├── AAnimal.hpp          # Abstract Animal
│   ├── [derived classes]
│   └── [supporting files]
├── ex03/                    # Interfaces and factory pattern
│   ├── Makefile
│   ├── AMateria.hpp         # Abstract interface
│   ├── AMateria.cpp
│   ├── Ice.hpp              # Concrete implementation
│   ├── Ice.cpp
│   ├── Cure.hpp
│   ├── Cure.cpp
│   ├── Character.hpp        # Concrete implementation
│   ├── Character.cpp
│   ├── ICharacter.hpp       # Interface
│   ├── MateriaSource.hpp    # Factory pattern
│   ├── MateriaSource.cpp
│   ├── IMateriaSource.hpp
│   ├── main.cpp
│   └── [supporting files]
└── README.md
```

## Polymorphism Hierarchy

```
Exercise 00-02:        Exercise 03:
    Animal              AMateria
    /    \              /      \
   Dog   Cat           Ice     Cure
  /   \               
WrongAnimal        ICharacter   IMateriaSource
   |                   |              |
WrongCat         Character      MateriaSource
```

## Exercises Overview

### Exercise 00: Polymorphism
Implement a polymorphic hierarchy demonstrating virtual function dispatch.

**Concepts:**
- Base class with virtual methods
- Derived classes overriding virtual methods
- Polymorphic behavior through pointers/references
- Demonstrating incorrect behavior without virtual functions

**Key Classes:**
- `Animal`: Base class with `makeSound()` virtual method
- `Dog`: Derived class making dog sounds
- `Cat`: Derived class making cat sounds
- `WrongAnimal` / `WrongCat`: Demonstrate non-virtual behavior

```cpp
// Virtual function dispatch
const Animal* dog = new Dog();
dog->makeSound();  // Calls Dog::makeSound(), not Animal::makeSound()
```

### Exercise 01: I don't want to set the world on fire
Add complexity with deep copying and Brain class.

**Concepts:**
- Composed objects (Animal contains Brain)
- Deep copy semantics (copy constructor and assignment)
- Array members and proper memory management
- Polymorphic deletion and proper cleanup

**Brain Class:**
- Contains array of 100 ideas (`std::string`)
- Properly managed by Dog and Cat
- Deep copied on assignment

**Testing Deep Copy:**
```cpp
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;  // Should not leak, proper cleanup
delete i;
```

### Exercise 02: Abstract Class
Transform `Animal` into an abstract class preventing direct instantiation.

**Concepts:**
- Pure virtual functions (`= 0`)
- Abstract classes as contracts
- Derived classes must implement pure virtual methods
- Preventing misuse through type system

```cpp
class Animal
{
    virtual void makeSound() const = 0;  // Pure virtual
};

// Error: Cannot instantiate abstract class
// const Animal* meta = new Animal();

// Correct: Only concrete derived classes work
const Animal* dog = new Dog();
```

### Exercise 03: Interface & Recap
Implement a complete system using interfaces and factory pattern.

**Concepts:**
- Interface design (pure abstract classes)
- Factory pattern for object creation
- Inventory system and resource management
- Complex member relationships

**Key Classes:**

**AMateria Interface:**
- Pure abstract base for all material types
- Methods: `clone()`, `use()`, `getType()`

**Concrete Materia Classes:**
- `Ice`: Shoots ice bolt at target
- `Cure`: Heals target's wounds

**ICharacter Interface:**
- Contract for characters
- Methods: `getName()`, `equip()`, `unequip()`, `use()`

**Character Implementation:**
- Inventory of 4 slots for materias
- Deep copy on assignment
- Proper cleanup

**IMateriaSource Interface:**
- Methods: `learnMateria()`, `createMateria()`

**MateriaSource Implementation:**
- Learns up to 4 materia templates
- Creates new instances by type
- Factory pattern for materia creation

## Key Concepts Covered

### Virtual Functions

```cpp
class Base
{
public:
    virtual ~Base() { }  // Always virtual in base classes!
    virtual void method() = 0;  // Pure virtual (abstract)
};

class Derived : public Base
{
public:
    void method() { /* implementation */ }
};
```

### Abstract Classes

```cpp
class Abstract
{
public:
    virtual ~Abstract() { }
    virtual void pure_method() = 0;  // Must be implemented by derived
    virtual void regular_method() { /* default impl */ }
};

// Error: Cannot instantiate Abstract
// Abstract obj;

// Correct: Must derive and implement pure methods
class Concrete : public Abstract
{
public:
    void pure_method() { /* implementation */ }
};
```

### Factory Pattern

```cpp
class Factory
{
private:
    Object* templates[4];  // Store templates
public:
    void learn(Object* obj) { ... }
    Object* create(std::string type)
    {
        // Find matching template
        // Return copy (clone)
    }
};
```

## Important Rules

✅ **Allowed:**
- Virtual functions and virtual destructors
- Pure virtual functions (abstract methods)
- Multiple interfaces implementation
- Factory patterns
- Deep copying in polymorphic classes

❌ **Forbidden:**
- C-style `printf()`, `malloc()`, `free()`
- `using namespace std;`
- `friend` keyword
- STL containers/algorithms (except in Modules 08-09)
- Non-virtual destructors in polymorphic classes

## Execution Examples

```bash
# Exercise 00: Polymorphism demonstration
./animal00
# Output:
# Dog sound: Woof!
# Cat sound: Meow!
# Generic animal sound (or nothing)

# Exercise 01: Deep copy with Brain
./animal01
# Creates animals with brain objects
# Verifies proper copying and cleanup

# Exercise 02: Abstract class
./animal02
# Demonstrates that Animal cannot be instantiated
# Only derived classes work

# Exercise 03: Materia system
./materia
# Output:
# * shoots an ice bolt at bob *
# * heals bob's wounds *
```

## Testing Strategy

```bash
# Test polymorphic behavior
./animal00 | grep -E "Woof|Meow"

# Verify deep copy independence
./animal01
# Modify one animal's brain
# Verify other animal unaffected

# Test abstract class prevention
./animal02 2>&1 | grep -i "cannot instantiate"

# Test factory pattern
./materia | wc -l
# Should output exactly 2 lines

# Comprehensive memory check
valgrind --leak-check=full --show-leak-kinds=all ./animal01
```

## Learning Outcomes

After completing this module, you should understand:
- How virtual functions enable runtime polymorphism
- The difference between virtual and non-virtual methods
- Abstract classes as design contracts
- When to use interfaces vs. base classes
- Factory pattern for object creation
- Deep copy semantics in polymorphic hierarchies
- Proper virtual destructor design

## Common Issues

**Issue:** "Error: unimplemented pure virtual method"
- **Solution:** Implement all pure virtual methods in derived class

**Issue:** Memory leak with virtual destructors
- **Solution:** Always declare virtual destructors in base classes: `virtual ~Base() { }`

**Issue:** Factory returns wrong type
- **Solution:** Verify `clone()` method returns correct derived type

**Issue:** Deep copy not working correctly
- **Solution:** Copy constructor must deep-copy all pointers and containers

**Issue:** Assignment operator doesn't clean old resources
- **Solution:** In assignment: delete old resources, copy new, return *this

## Performance Considerations

| Operation | Complexity | Notes |
|-----------|-----------|-------|
| Virtual call | O(1) | VTable lookup constant time |
| Factory creation | O(n) | Linear search through templates |
| Deep copy | O(n) | Depends on object size |
| Polymorphic cleanup | O(n) | Destructor chain depends on hierarchy depth |

## Professional Design Patterns

### Factory Pattern Example

```cpp
class MateriaSource : public IMateriaSource
{
private:
    AMateria* templates[4];  // Template storage
    int learned_count;
    
public:
    void learnMateria(AMateria* m)
    {
        templates[learned_count++] = m->clone();
    }
    
    AMateria* createMateria(const std::string& type)
    {
        for (int i = 0; i < learned_count; i++)
        {
            if (templates[i]->getType() == type)
                return templates[i]->clone();
        }
        return NULL;
    }
};
```

## Resources

- [cppreference - Virtual Functions](https://en.cppreference.com/w/cpp/language/virtual)
- [cppreference - Abstract Classes](https://en.cppreference.com/w/cpp/language/abstract_class)
- [Factory Pattern](https://refactoring.guru/design-patterns/factory-method)
- [SOLID Principles](https://en.wikipedia.org/wiki/SOLID)

## Evaluation Criteria

- ✅ Correct virtual function behavior
- ✅ Abstract classes prevent instantiation
- ✅ Factory pattern implemented correctly
- ✅ Deep copy works properly in all classes
- ✅ No memory leaks with virtual destructors
- ✅ All interfaces properly implemented
- ✅ Polymorphic deletion works correctly
- ✅ Code compiles without warnings
- ✅ Follows C++98 standard strictly

---

**Status:** 🔄 In Progress  
**Difficulty Level:** High  
**Key Concepts:** Polymorphism, Virtual Functions, Abstract Classes, Factory Pattern  
**Estimated Completion:** CPP04 completes the core C++ curriculum  
**Last Updated:** February 24, 2026
