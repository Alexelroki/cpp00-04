This project has been created as part of the 42 curriculum by adruz-to

# C++ Modules 00-04

### Description

This repository contains my solutions for the C++ modules from 42 School's curriculum. These modules progressively introduce fundamental C++ concepts, from basic syntax to advanced object-oriented programming.

---

### Table of Contents

- [Module 00 - Namespaces, Classes, Member Functions](#module-00)
- [Module 01 - Memory Allocation, Pointers, References](#module-01)
- [Module 02 - Ad-hoc Polymorphism, Operator Overloading](#module-02)
- [Module 03 - Inheritance](#module-03)
- [Module 04 - Subtype Polymorphism, Abstract Classes](#module-04)

---

### Module 00

**Namespaces, Classes, Member Functions, stdio streams, Initialization Lists, Static, Const**

Exercises:
- **ex00**: Megaphone - String manipulation and output
- **ex01**: My Awesome PhoneBook - Contact management system
- **ex02**: The Job Of Your Dreams - Account class implementation (optional)

Key Concepts:
- Basic C++ syntax
- Classes and objects
- Member functions (public/private)
- Constructors and destructors
- `std::string` manipulation
- Static members

---

### Module 01

**Memory Allocation, Pointers to Members, References, Switch Statement**

Exercises:
- **ex00**: BraiiiiiiinnnzzzZ - Pointer vs reference
- **ex01**: Moar brainz! - Dynamic memory allocation
- **ex02**: HI THIS IS BRAIN - Memory addresses
- **ex03**: Unnecessary violence - Weapon class
- **ex04**: Sed is for losers - File manipulation
- **ex05**: Harl 2.0 - Switch statements
- **ex06**: Harl filter - Advanced filtering (optional)

Key Concepts:
- Stack vs Heap memory
- `new` and `delete`
- Pointers vs references
- File streams (`ifstream`, `ofstream`)
- String replacement

---

### Module 02

**Ad-hoc Polymorphism, Operator Overloading, Orthodox Canonical Form**

Exercises:
- **ex00**: My First Class in Orthodox Canonical Form
- **ex01**: Towards a more useful fixed-point number class
- **ex02**: Now we're talking
- **ex03**: BSP (Binary Space Partitioning) (optional)

Key Concepts:
- Orthodox Canonical Form (4 required functions):
  - Default constructor
  - Copy constructor
  - Copy assignment operator
  - Destructor
- Operator overloading (`+`, `-`, `*`, `/`, `<<`, `>>`, etc.)
- Fixed-point arithmetic
- Comparison operators

---

### Module 03

**Inheritance**

Exercises:
- **ex00**: Aaaaand... OPEN! - ClapTrap class
- **ex01**: Serena, my love! - ScavTrap (inheritance)
- **ex02**: Repetitive work - FragTrap
- **ex03**: Now it's weird! - DiamondTrap (multiple inheritance) (optional)

Key Concepts:
- Class inheritance (`class Derived : public Base`)
- Protected members
- Constructor/destructor chaining
- Method overriding
- Multiple inheritance
- Diamond problem

---

### Module 04

**Subtype Polymorphism, Abstract Classes, Interfaces**

Exercises:
- **ex00**: Polymorphism - Animal, Dog, Cat
- **ex01**: I don't want to set the world on fire - Brain class, deep copy
- **ex02**: Abstract class - Pure virtual functions
- **ex03**: Interface & recap - Materia system (optional)

Key Concepts:
- Virtual functions (`virtual`)
- Pure virtual functions (`= 0`)
- Abstract classes
- Polymorphism
- Deep copy vs shallow copy
- Dynamic memory management
- Interfaces

---

### Compilation

Each exercise includes a `Makefile` with the following rules:
```bash
make        # Compile the project
make clean  # Remove object files
make fclean # Remove object files and executable
make re     # Recompile everything
```

**Compiler:** `c++`  
**Flags:** `-Wall -Wextra -Werror -std=c++98`

---

### Notes

**Orthodox Canonical Form**

Every class must implement:
```cpp
class MyClass {
public:
    MyClass();                              // Default constructor
    MyClass(const MyClass &other);         // Copy constructor
    MyClass &operator=(const MyClass &other); // Copy assignment operator
    ~MyClass();                             // Destructor
};
```

**Memory Management**

- Always pair `new` with `delete`
- Always pair `new[]` with `delete[]`
- Check for memory leaks with:
```bash
valgrind --leak-check=full ./program
```

**Virtual Destructors**

When using polymorphism, always make destructors virtual:
```cpp
class Base {
public:
    virtual ~Base();  // Virtual destructor for proper cleanup
};
```

---

### Testing

Each module includes comprehensive tests in `main.cpp`. To verify:

1. **Compilation:** No warnings or errors
2. **Execution:** All tests pass
3. **Memory:** No leaks (check with valgrind)
4. **Behavior:** Correct output and logic

---

### Learning Outcomes

By completing these modules, you will understand:

- ✅ C++ syntax and fundamental concepts
- ✅ Object-oriented programming (OOP)
- ✅ Memory management (stack vs heap)
- ✅ Inheritance and polymorphism
- ✅ Operator overloading
- ✅ Abstract classes and interfaces
- ✅ Deep vs shallow copying
- ✅ Virtual functions and dynamic binding

---

### License

This project is part of the 42 School curriculum. Feel free to reference but please don't copy directly for your own 42 projects.

---

