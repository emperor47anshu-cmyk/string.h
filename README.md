# Mini String Library (`mini_string.h`)

A beginner-friendly C programming project to recreate functions from the standard C `string.h` library from scratch.

The goal of this project is to understand how strings work internally in C, especially through pointers, pointer arithmetic, arrays, and null terminators.

## 🎯 Project Goals

- Understand how C strings are stored in memory.
- Practise pointer arithmetic and dereferencing.
- Reimplement common string manipulation functions.
- Understand how standard library functions work internally.
- Improve problem-solving and debugging skills.

## 🛠️ Functions

| Function | Description | Status |
|---|---|---|
| `my_strlen()` | Calculates the length of a string | ✅ Completed |
| `my_strcpy()` | Copies one string into another | ⬜ Planned |
| `my_strcat()` | Concatenates two strings | ⬜ Planned |
| `my_strcmp()` | Compares two strings | ⬜ Planned |
| `my_strchr()` | Finds a character in a string | ⬜ Planned |
| `my_strstr()` | Finds a substring | ⬜ Planned |
| `my_strncpy()` | Copies a specified number of characters | ⬜ Planned |
| `my_strrev()` | Reverses a string (custom extension) | ⬜ Planned |

## 📚 Concepts Practised

- Character arrays
- Pointers and dereferencing
- Pointer arithmetic
- String traversal
- Null terminator (`'\0'`)
- Loops and conditional statements
- Functions in C

## 📂 Project Structure

```text
mini-string-library/
│
├── mini_string.h
├── main.c
├── README.md
└── tests/
    └── test_strings.c
```

*The structure will evolve as the project grows.*

## 🚀 Current Progress

### `my_strlen()`

The first implemented function calculates string length using pointer arithmetic.

**Approach:**
1. Start traversing the string from the first character.
2. Access characters using pointer arithmetic.
3. Continue until the null terminator is encountered.
4. Count each character.
5. Return the final length.

## 🔧 Technologies

- Language: C
- Compiler: GCC
- Editor: Visual Studio Code

## 🌱 Learning Approach

This project is being developed incrementally. Each function is implemented and tested individually, with an emphasis on understanding the underlying logic rather than simply reproducing existing library implementations.

## 📌 Note

This is an educational project, not a replacement for the standard C library.

More functions and tests will be added as development progresses.

---

**Built while learning C, one pointer at a time.**
