# WahabLib

> **🚧 Under Construction:** This library is currently in active development and will be fully ready to use in **2 to 3 months** with expanded features, optimizations, and additional functionalities.

A custom, modular C++ library featuring reusable components for input/output, core utilities, data structures, algorithms, mathematical operations, and string manipulation. Built to explore modular programming, object-oriented design, and C++ development from scratch.

---

## Key Highlights

* **Zero Boilerplate:** Once you include `WahabLib.h`, you do **not** need to `#include <iostream>` or other standard headers for the defined I/O and utility operations provided by the library.
* **Plug-and-Play Compilation:** You do **not** need to compile the library's `.cpp` files separately—just compile your own `main.cpp` file directly.
* **Modular Architecture:** Cleanly separated headers and source files organized by functionality.

---

## Features & Modules

### 1. Containers & Data Structures (`Include/Wahab/Containers/`)
A comprehensive collection of custom-built data structures:
* **Array (`Array.h`)**: Fixed-size contiguous array wrapper.
* **DynamicArray (`DynamicArray.h`)**: Resizable dynamic array implementation.
* **Vector (`Vector.h`)**: Feature-rich dynamic sequence container.
* **LinkedList (`LinkedList.h`)**: Singly linked list with standard node operations.
* **DoublyLinkedList (`DoublyLinkedList.h`)**: Bidirectional linked list for forward and backward traversal.
* **CircularLinkedList (`CircularLinkedList.h`)**: Loop-connected linked list structure.
* **Stack (`Stack.h`)**: LIFO (Last-In, First-Out) container.
* **Queue (`Queue.h`)**: FIFO (First-In, First-Out) container.
* **CircularQueue (`CircularQueue.h`)**: Ring-buffer based queue for efficient memory reuse.
* **Deque (`Deque.h`)**: Double-ended queue supporting insertion and deletion from both ends.
* **PriorityQueue (`PriorityQueue.h`)**: Heap/priority-based queue for ordered element retrieval.

### 2. Core (`Include/Wahab/Core/`)
* **Input & Output (`Input.h`, `Output.h`)**: Built-in console input and output operations—eliminating the need to manually `#include <iostream>` in your project files.
* **Types (`Types.h`)**: Custom type definitions and aliases for cleaner code.
* **Error Handling (`Error.h`)**: Standardized error reporting and handling utilities.
* **General Utilities (`Utility.h`)**: Helper functions for common programming tasks.

### 3. Algorithms (`Include/Wahab/Algorithms/`)
* **Sorting (`Sorting.h`)**: Reusable sorting routines.
* **Searching (`Searching.h`)**: Element lookup and search algorithms.
* **Comparison (`Comparison.h`)**: Custom comparison utilities.

### 4. Mathematics (`Include/Wahab/Math/`)
* **Basic Math (`BasicMath.h`)**: Core arithmetic and algebraic operations.
* **Number Theory (`NumberTheory.h`)**: Prime checks, GCD/LCM, and number-theoretic functions.
* **Random (`Random.h`)**: Random number generation utilities.

### 5. String Manipulation (`Include/Wahab/String/`)
* **String (`String.h`)**: Custom string handling and manipulation utilities.

---

## Project Structure

```text
WahabLib/
├── Include/
│   └── Wahab/
│       ├── Algorithms/     # Comparison.h, Searching.h, Sorting.h
│       ├── Containers/     # Array, DynamicArray, Vector, LinkedLists, Stack, Queues, Deque, PriorityQueue
│       ├── Core/           # Error.h, Input.h, Output.h, Types.h, Utility.h
│       ├── Math/           # BasicMath.h, NumberTheory.h, Random.h
│       └── String/         # String.h
├── src/                    # Corresponding implementation files
|    ├── Algorithms/        # Comparison.cpp, Searching.cpp, Sorting.cpp
│    ├── Containers/        # Array, DynamicArray, Vector, LinkedLists, Stack, Queues, Deque, PriorityQueue
│    ├── Core/              # Error.cpp, Input.cpp, Output.cpp, Types.cpp, Utility.cpp
│    ├── Math/              # BasicMath.cpp, NumberTheory.cpp, Random.cpp
│    └── String/            # String.cpp
├── WahabLib.h              # Master header file (include this in your projects)
├── WahabLib.cpp            # Master source file
├── example.cpp             # Example usage and testing
└── LICENSE                 # MIT License
```

---

## Getting Started

### Prerequisites
* A C++ compiler supporting C++11 or later (e.g., `g++`, `clang++`, or MSVC).

### Usage
1. Clone the repository:
   ```bash
   git clone https://github.com
   ```
   ```bash
   HTTPS (without .git): git clone https://github.com/wahabkhan000/WahabLib
   ```
   ```bash
   SSH (if you have SSH keys configured): git clone git@github.com:wahabkhan000/WahabLib.git
   ```
   ```bash
   GitHub CLI: gh repo clone wahabkhan000/WahabLib
   ```
2. Include `WahabLib.h` at the top of your C++ file (no `<iostream>` required for defined library operations):
   ```cpp
   #include "WahabLib.h"

   int main() {
       // Use WahabLib's built-in I/O, data structures, math, and algorithms directly
       return 0;
   }
   ```
3. Compile **only your own file**:
   ```bash
   g++ example.cpp -o output
   ./output
   ```

---

## Roadmap

* [x] Core I/O, Types, Error, and Utility modules
* [x] Linear & Non-linear Data Structures (Arrays, Linked Lists, Stacks, Queues)
* [ ] Full testing, edge-case hardening, and performance optimizations *(In Progress)*
* [ ] Trees, Graphs, Hash Maps, and additional algorithms *(Planned — ETA: 2–3 months)*

---

## License

This project is licensed under the **MIT License** — see the [LICENSE](LICENSE) file for details.
