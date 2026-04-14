# C++ Module 01: Memory Allocation, Pointers to Members, References and Switch Statements


*This project has been created as part of the 42 curriculum.*

[![Grade](https://img.shields.io/badge/grade-100%2F100-brightgreen.svg)]()
[![Language](https://img.shields.io/badge/language-C%2B%2B-blue.svg)]()
[![Standard](https://img.shields.io/badge/standard-C%2B%2B98-blue.svg)]()
[![Status](https://img.shields.io/badge/status-Completed-brightgreen.svg)]()

## Description

Module 01 deepens knowledge of memory management in C++. This module covers dynamic memory allocation with `new` and `delete`, pointers to members, references as an alternative to pointers, and control flow statements. Students will learn the differences between pointers and references, proper resource management, and effective use of switch statements.

**Key Topics:**
- Dynamic memory allocation (`new` and `delete`)
- Pointers and member pointers
- References and their properties
- Switch statements and control flow
- File input/output operations
- String manipulation and streams

## Technical Requirements

| Requirement | Details |
|------------|---------|
| **Language** | C++98 standard |
| **Compiler** | c++ with flags `-Wall -Wextra -Werror -std=c++98` |
| **Build System** | Makefile |
| **Memory Management** | Strict: no leaks, proper cleanup required |
| **Code Style** | Clean, readable C++ code |

## Compilation

```bash
# Navigate to module directory
cd CPP01

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
CPP01/
├── ex00/                    # Memory and references
│   ├── Makefile
│   ├── main.cpp
│   └── [class files]
├── ex01/                    # Pointers and memory allocation
│   ├── Makefile
│   └── [class files]
├── ex02/                    # More complex memory management
│   ├── Makefile
│   └── [class files]
├── ex03/                    # File I/O and strings
│   ├── Makefile
│   └── [class files]
├── ex04/
│   ├── Makefile
│   └── [class files]
├── ex05/                    # Advanced concepts
│   ├── Makefile
│   └── [class files]
├── ex06/
│   ├── Makefile
│   └── [class files]
└── README.md
```

## Exercises Overview

### Exercise 00: Zombie Class
Implement a `Zombie` class that demonstrates constructors, destructors, and memory management. Learn the difference between stack and heap allocation.

### Exercise 01: Zombie on the Heap
Extend the zombie concept with dynamic memory allocation. Implement functions that allocate and deallocate zombie objects.

### Exercise 02: Pointers and References
Understand the differences between pointers and references through practical examples and comparisons.

### Exercise 03: Weapons and Humans
Create classes with member pointers. Learn about complex member relationships and initialization.

### Exercise 04: File Operations
Implement file reading and string replacement. Practice C++ file I/O with streams.

### Exercise 05: Harl Logger V2.0
Build a message filter using switch statements and string handling.

### Exercise 06: Harl Filter
Extend the logger with filtering capabilities based on log levels.

## Key Concepts Covered

| Concept | Purpose |
|---------|---------|
| **new / delete** | Dynamic memory allocation and deallocation |
| **Pointers** | Store memory addresses, allow dynamic behavior |
| **References** | Safer alternative to pointers, cannot be null |
| **Member Pointers** | Pointers to class members for complex relationships |
| **switch Statement** | Efficient branching on enumerated values |
| **File Streams** | Read/write files using `std::ifstream`, `std::ofstream` |
| **String Operations** | Manipulate text with `std::string` methods |

## Memory Management Rules

```cpp
// Correct: Always match new with delete
Type* ptr = new Type();
delete ptr;

// Correct: Arrays need special handling
Type* arr = new Type[size];
delete[] arr;  // Note the [] for arrays

// Always check for successful allocation
Type* ptr = new Type();
if (ptr == NULL) {
    // Handle allocation failure
}
```

## Important Rules

✅ **Allowed:**
- Dynamic memory with `new` / `delete`
- References (`&`)
- Stream operations (`<iostream>`, `<fstream>`)
- String operations (`<string>`)

❌ **Forbidden:**
- C-style `malloc()`, `free()`, `printf()`
- `using namespace std;`
- External libraries (Boost, C++11)
- STL containers (vector, list, map) - allowed only in Modules 08-09

## Execution Examples

```bash
# Example for Zombie class
./zombie
# Creates and destroys zombies on stack and heap

# Example for Harl Filter
./harlFilter
# Filters messages based on log level
```

## Testing Strategy

Test your implementations with:
- Normal allocation and deallocation
- Memory leak detection (valgrind)
- Edge cases (null pointers, invalid operations)
- File I/O with various file formats
- String replacement with edge cases

```bash
# Test for memory leaks
valgrind --leak-check=full ./program
```

## Learning Outcomes

After completing this module, you should understand:
- Proper dynamic memory management
- Distinction between pointers and references
- Safe pointer practices
- File I/O in C++
- String manipulation techniques
- Control flow with switch statements

## Common Issues

**Issue:** Memory leaks detected by valgrind
- **Solution:** Ensure every `new` has a corresponding `delete`. Use destructors for cleanup.

**Issue:** "Invalid read" or segmentation fault
- **Solution:** Verify pointers are valid before dereferencing. Initialize pointers to NULL.

**Issue:** File not found or read fails
- **Solution:** Verify file path is correct. Check file permissions and existence.

**Issue:** String find/replace not working correctly
- **Solution:** Remember string positions are 0-indexed. Use `std::string::npos` for "not found".

## Performance Considerations

| Operation | Complexity | Notes |
|-----------|-----------|-------|
| `new` allocation | O(1) average | Can be slow if memory fragmented |
| `delete` | O(1) average | Necessary for cleanup |
| String find | O(n×m) | Depends on string length and search pattern |

## Resources

- [cppreference - new and delete](https://en.cppreference.com/w/cpp/memory)
- [cppreference - References](https://en.cppreference.com/w/cpp/language/reference)
- [C++ File I/O](https://en.cppreference.com/w/cpp/io/basic_fstream)
- [std::string methods](https://en.cppreference.com/w/cpp/string/basic_string)

## Evaluation Criteria

- ✅ All exercises compile without warnings
- ✅ No memory leaks (verified with valgrind)
- ✅ Correct pointer and reference usage
- ✅ Proper file I/O implementation
- ✅ Effective use of switch statements
- ✅ Clean destructor implementation
- ✅ Follows C++98 standard

## Debugging Tips

```bash
# Check memory leaks in detail
valgrind --leak-check=full --show-leak-kinds=all ./program

# Use GDB for stepping through code
gdb ./program
(gdb) break main
(gdb) run

# Print all symbols to verify
nm ./program | grep -E "^[0-9a-f]+.*new|delete"
```

---

**Status:** ✅ Completed  
**Difficulty Level:** Medium  
**Last Updated:** April 14, 2026
