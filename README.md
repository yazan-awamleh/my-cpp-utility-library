# My C++ Utility Library

A lightweight C++ header-only utility library I personally developed, designed to simplify common programming tasks.  
This library contains four main header-only modules and a test `main.cpp` demonstrating their usage. All modules are implemented using **pure OOP principles** in modern C++.

---

## 📦 Included Libraries

### 1. `clsString.h`
Provides utilities for string manipulation:
- Splitting strings based on a delimiter.
- Trimming, padding, and formatting strings.
- Other common string operations often needed in C++ projects.

### 2. `clsDate.h`
Handles date-related operations:
- Creating and validating dates.
- Leap year detection.
- Calculating difference between dates, adding/subtracting days, months, years.
- Printing calendars (month and year view).
- Determining business days, weekends, and other date utilities.

### 3. `clsGenericUtilities.h`
Generic helper functions for multiple data types:
- Generating random numbers, characters, words, and keys.
- Shuffling and swapping arrays of different types (int, string, clsDate, etc.).
- Converting numbers to English words.
- Simple text encryption/decryption.
- Random number seeding.

### 4. `clsInputValidate.h`
Input validation utilities:
- Reading numbers safely from console input.
- Ensuring numbers are within a specific range.
- Reading strings with whitespace handling.
- Validating that a date is within a specific range.

---

## ⚙️ Features

- Header-only libraries: no need for separate `.cpp` files.
- Fully OOP-based design for modularity and maintainability.
- Easy integration into existing C++ projects.
- Includes a simple `main.cpp` for testing all four libraries.
- Lightweight, pure C++ (no external dependencies except standard library).

---

## 🛠 Technology

- Language: C++ (modern, C++11 and above compatible)
- Approach: Pure Object-Oriented Programming (OOP)
- Standard Library: `<iostream>`, `<string>`, `<vector>`, `<ctime>`, etc.
- Compiler Compatibility: Works with MSVC, GCC, and Clang.

---
