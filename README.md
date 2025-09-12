# C++ Experiment 14: Inheritance in C++
---

## Aim  
To understand the concept of Inheritance in C++ and its applications:
1. Demonstrating reusability of code through inheritance.
2. Studying different types of inheritance (single, multiple, multilevel, hierarchical, hybrid).
3. Understanding modes of inheritance (public, protected, private).
4. Observing how base class constructors and members are accessed in derived classes.


---

## Tool Used  
VS Code or Programiz Online C++ Compiler.

---

## Objectives  
- To learn the concept of base class and derived class.
- To study how properties and methods of one class can be reused in another.
- To explore public, protected, and private inheritance modes.
- To identify advantages of inheritance in terms of reusability and extensibility.
- To classify different types of inheritance in C++.
  
---

## Theory

### Why C++ is More Efficient than C
```
- C++ supports Object-Oriented Programming (OOP), which improves code reusability and maintainability.
- Built-in string class makes string manipulation easier than C-style strings.
- Rich Standard Template Library (STL) reduces coding time.
- Better type safety compared to C.
- Function overloading and templates provide flexibility.
- Memory management tools like RAII help prevent leaks.
- Direct support for function overloading and inline functions improves efficiency.

```

### What is inheritance?  
```

1. Inheritance is a feature of Object-Oriented Programming (OOP) in which a new class (derived/child class) acquires the
properties and functionalities of an existing class (base/parent class).
2. It helps in code reusability, since we don’t have to write the same code multiple times.
3. Inheritance establishes a relationship between classes, enabling hierarchies like parent → child.
4. It forms the basis of polymorphism, where derived classes can redefine behaviors of base classes.

```

### What is inheritance important?  
```

1. Promotes code reusability – existing code can be reused in new applications.
2. Enhances maintainability – changes in base class automatically affect derived classes.
3. Supports polymorphism – allows function overriding and runtime flexibility.
4. Provides logical class hierarchies – represents real-world relationships (e.g., Vehicle → Car → SportsCar).
5. Saves time and effort in development.

```

### Syntax:###  
```
class Base {
    // base members
};

class Derived : access-specifier Base {
    // new or extended members
};

```

### Modes of Inheritance  
---

Inheritance in C++ depends on the access specifier used:

Public Inheritance-
1. Public members of base → Public in derived.
2. Protected members of base → Protected in derived.
3. Private members → Not accessible in derived.

Protected Inheritance-
1. Public and Protected members of base → Protected in derived.
2. Private members → Not accessible in derived.

Private Inheritance-
1. Public and Protected members of base → Private in derived.
2. Private members → Not accessible in derived.

---

### Types of inheritance  
---

Single inheritance-
In single inheritance, a class is allowed to inherit from only one class. i.e. one subclass is inherited by one base class only.

Multiple inheritance-
Multiple Inheritance is a feature of C++ where a class can inherit from more than one class. i.e one subclass is inherited from more than one base class.

---

### Pointer arithmetic rules  
---

- Incrementing a pointer moves it to the next element of its type (ptr++).
- Subtracting two pointers gives the number of elements between them.
- Pointer arithmetic is valid only within the same array or memory block.

---

### Advantages od pointers 
---
- Dynamic Memory Allocation – Helps allocate and free memory at runtime using malloc, calloc, free (in C) or new/delete (in C++).
- Efficient Array & String Handling – Makes it easier to traverse arrays and manipulate strings.
- Function Arguments – Allows functions to modify actual variables (call by reference).
- Data Structures – Essential for implementing linked lists, stacks, queues, trees, and graphs.
- Memory Efficiency – Saves memory in some cases by directly working with memory addresses.
- Hardware Interaction – Useful in system programming (e.g., accessing memory-mapped devices).
- Function Pointers – Allow passing functions as arguments, enabling callbacks and flexibility in code.

---

### Disadvantages od pointers 
---
- Complexity – Pointers make the program logic harder to read and understand.
- Errors & Bugs – Easy to make mistakes like dangling pointers, wild pointers, null dereferencing.
- Security Issues – Improper use can lead to memory leaks, crashes, or vulnerabilities (buffer overflow).
- Hard to Debug – Pointer-related errors are difficult to trace and fix.
- Memory Management Risk – Programmer must manually allocate and deallocate memory; forgetting causes memory leaks.
- Portability Issues – Direct memory manipulation may behave differently on different systems.

---

### Why are pointers better than arrays
---
- Arrays are fixed size, pointers allow dynamic size (runtime allocation).
- Arrays are static & contiguous, pointers allow flexible data structures (linked list, trees).
- Pointers give better memory efficiency and faster traversal/control.

---

### Why are pointers better than strings
---
- Strings in arrays are hard to resize, but pointers allow dynamic strings.
- Pointers make string operations easier (traversal, function calls).
- Pointers use less memory (allocate exact size, no wastage).
- Passing strings via pointers is faster (just passes address).

---

## Algorithms

### Program 1 Increment of pointers
---

- Start
- Declare variables of different data types:

a as int

b as float

c as double

d as bool
- Declare pointers for each variable and store their addresses:

aptr = &a

bptr = &b

cptr = &c

dptr = &d
- For each pointer:
a. Print the address before increment.
b. Increment the pointer by 1 (ptr++).
c. Print the address after increment.
- End.

---

### Program 2 Difference / Addition
---

- Start
- Declare two integer variables x = 100 and y = 50.
- Declare an integer pointer xptr and assign it the address of x.
- Declare another integer pointer yptr and assign it the address of y.
- Dereference both pointers and calculate the sum:

sum = *xptr + *yptr.

- Print the result → "Sum is: sum".
- Dereference both pointers and calculate the difference:
difference = *xptr - *yptr.
- Print the result → "Difference is: difference".
- End 
---

### Program 3 Traversing array using pointer
---

- Start
- Declare an integer array arr[5] = {2, 4, 6, 8, 10}.
- Initialize a pointer ptr to point to the last element of the array (arr + 4).
- Use a for loop that runs from index i = 4 down to 0:
  
  Print the value pointed to by ptr (*ptr).
  
  Decrement the pointer (ptr--) so it moves to the previous element.
- After the loop ends, all elements of the array are printed in reverse order.
- End

---

### Program 4 Printing string using pointers
---

- Start
- Declare a character array str[] = "Hello World".
- Initialize a pointer ptr to point to the first character of the string (ptr = str).
- Begin a while loop that runs until the character pointed to by ptr is the null terminator ('\0').
- 
Print the character at *ptr.

Increment the pointer (ptr++) to move to the next character.
- When *ptr == '\0', exit the loop.
- End

---

## Concepts Used  
---

- Pointer declaration and initialization.
- Dereferencing (* operator).
- Address-of operator (&).
- Pointer arithmetic (increment and decrement).
- Array traversal using pointers.
- Character array traversal.
- Type-dependent pointer incrementation.
- Null pointers and void pointers.
- Memory representation of pointers.

---

## Conclusion
---

- In this experiment, we learned the use of pointers to access and manipulate data using memory addresses. 
- We performed arithmetic operations, array reversal, and string traversal using pointers. 
- This shows that pointers provide efficient memory access, flexibility, and are essential for advanced concepts like dynamic memory allocation.

---
