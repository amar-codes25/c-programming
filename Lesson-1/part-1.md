# Lesson 1 — Part 1: C Basics, Program Structure, Variables & Input/Output
 
**Subject:** BCA101T — Programming for Problem Solving using C
**Date:** 21 June 2026
 
---
 
## 1. What is C?
 
C is a **medium-level language** — it's readable like high-level languages (unlike raw machine/assembly code), but it still allows direct access to memory through **pointers**, unlike high-level languages such as Python or Java which hide memory access entirely. This is why C is still used for operating systems, drivers, and embedded systems.
 
---
 
## 2. Building Blocks Covered today
 
- **C character set** — the set of valid characters C recognizes (letters, digits, special symbols, whitespace).
- **Identifiers** — names given to variables, functions, etc. (e.g. `age`, `main`).
- **Keywords** — reserved words with special meaning in C (e.g. `int`, `return`, `if`) — cannot be used as identifiers.
- **Basic program structure** — `#include`, `main()`, semicolons, `printf`/`scanf`.
- **Core data types** — `int`, `float`, `double`, `char`.
---
 
## 3. The Standard "Hello World" Program
 
```c
#include <stdio.h>
 
int main() {
    printf("Hello, World!\n");
    return 0;
}
```
 
**Line by line:**
 
| Line | What it does |
|---|---|
| `#include <stdio.h>` | Preprocessor directive — tells the compiler to bring in the Standard Input/Output library, since `printf`/`scanf` live there, not in core C. |
| `int main()` | Every C program has exactly one `main` function — this is the entry point where execution starts. `int` means it returns a whole number when done. |
| `{ }` | Curly braces mark the body of the function. |
| `printf("Hello, World!\n");` | Prints the text to the screen. `\n` is an escape sequence meaning "new line" (like pressing Enter). |
| `return 0;` | Ends `main`, returns `0` to the OS — by convention, `0` means "program finished successfully." |
| `;` | Every statement ends with a semicolon (except preprocessor directives like `#include`). |
 
---
 
## 4. `int main()` vs `void main()` — Important Clarification
 
Older Indian textbooks / Turbo C era material often shows:
 
```c
#include <stdio.h>
#include <conio.h>
 
void main() {
    clrscr();
    printf("Hello, World!");
    getch();
}
```
 
This is **outdated Turbo C style**, not standard C:
- `conio.h` — Turbo C-only library, doesn't exist in modern compilers.
- `clrscr()` — cleared the old DOS-style screen, not needed today.
- `getch()` — waited for a keypress so the DOS window wouldn't vanish instantly, not needed today.
- `void main()` — was never part of the official C standard; the standard requires `main` to return `int`.
**Rule going forward:** always use `int main()` with `return 0;` at the end. Even if old IPU notes or exam material show `void main()`, write the correct standard version — it compiles everywhere and is never marked wrong for being correct.
 
---
 
## 5. Variables
 
A variable is a **named location in memory** that holds a value of a specific type.
 
```c
int age;       // declare — reserves memory, no meaningful value yet
age = 16;      // assign separately
 
int age = 16;  // declare + assign in one line
```
 
---
 
## 6. Reading Input — `scanf` and the `&` symbol
 
```c
scanf("%d", &age);
```
 
- `%d` — format specifier telling `scanf` to expect an integer.
- `&` — means "address of." Every variable lives at some location in memory (like a numbered locker). `&age` tells `scanf` *where* to store the typed value, not what value to use.
Compare with `printf` — no `&` needed, since it only *reads* the value already stored:
 
```c
printf("%d", age);
```
 
---
 
## 7. Format Specifiers
 
| Specifier | Type |
|---|---|
| `%d` | int |
| `%f` | float |
| `%lf` | double (for `scanf` input — `%f` is fine for `printf` output even with doubles) |
| `%c` | char |
 
---
 
## 8. Practice Task
 
**Task:** Write a C program that declares an integer variable for age, takes it as input via `scanf`, and prints it via `printf`.
 
**Final working version:**
 
```c
#include <stdio.h>
 
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("%d", age);
    return 0;
}
```
 
**Output:**
```
Enter your age: 10
10
```
 
**Optional polish** — for more readable output:
```c
printf("Your age is: %d", age);
```
 
---
 
## 9. Common Mistake Caught Today
 
Writing this:
```c
printf("%d, &age");
```
...does **not** work, because everything inside the quotes is literal text — `&age` is read as literal characters, not as the variable. `printf` needs the variable passed as a **separate argument** outside the quotes:
```c
printf("%d", age);
```
 
---
 
## Next Up
Unit I continues with **Operators** (arithmetic, relational, logical, assignment) and **Control Structures** (if-else, loops).
