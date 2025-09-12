# C++ Experiment 14: Inheritance in C++
---

## Aim  
To understand pointers and its uses:  
1. Performing arithmetic operations between values using pointers.
2. Reversing an array using pointers.
3. Demonstrating pointer arithmetic for different data types.
4. Traversing a character array (string) using pointers.


---

## Tool Used  
VS Code or Programiz Online C++ Compiler.

---

## Objectives  
- To learn the concept of pointers in C++.
- To perform arithmetic operations on values accessed via pointers.
- To traverse and reverse arrays using pointers.
- To demonstrate pointer arithmetic for int, float, double, and bool types.
- To iterate through a character array using pointers.

  
---

## Theory

### Why C++ is More Efficient than C
- C++ supports Object-Oriented Programming (OOP), which improves code reusability and maintainability.

- Built-in string class makes string manipulation easier than C-style strings.

- Rich Standard Template Library (STL) reduces coding time.

- Better type safety compared to C.

- Function overloading and templates provide flexibility.

- Memory management tools like RAII help prevent leaks.

- Direct support for function overloading and inline functions improves efficiency.

### What is inheritance?  

```
1. Reusability is the main feature of OOP.
2. The capability of a class to derive properties and characteristics from another class is called Inheritance. 
3. Inheritance is one of the most important features of Object-Oriented Programming.
4. Inheritance is a feature or a process in which, new classes are created from the existing classes.
5. The new class created is called “derived class” or “child class” and the existing class is known as the “base class” or “parent class”. The derived class now is said to be inherited from the base class.

```

### Syntax:###  
```
Syntax:
data_type *pointer_name;

Examples:
int *ptr; → Pointer to an integer.
float *fptr; → Pointer to a float.
char *cptr; → Pointer to a character.

The data type of the pointer must match the type of variable it points to.

```

### How is pointer stored?  
---
1. A pointer itself is stored like any other variable in memory.
2. It occupies a fixed number of bytes (4 bytes in 32-bit systems, 8 bytes in 64-bit systems).
3. The value stored inside a pointer is an address, not actual data.
4. When dereferenced (*pointer), the CPU accesses the value located at that address.

---

### Types of pointers  
---
1. Null Pointer – Points to nothing (int *ptr = NULL;).
2. Void Pointer (Generic Pointer) – Can hold the address of any data type (void *ptr;).
3. Dangling Pointer – Points to memory that has been freed/deallocated.
4. Wild Pointer – An uninitialized pointer (points to random memory).
5. Constant Pointer – Pointer cannot change the address it holds, but the value at that address can change (int * const ptr).
6. Pointer to Constant – Pointer can change the address it holds, but cannot change the value (const int *ptr).
7. Constant Pointer to Constant – Neither the pointer’s address nor the value can change (const int * const ptr).
8. Function Pointer – Holds the address of a function (void (*fptr)()).
9. Pointer to Pointer (Double Pointer) – Stores the address of another pointer (int **pp).
10. Array Pointer – Points to the first element of an array (int *ptr = arr;).

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
