# C++ Modules Project

## Overview

This project is a comprehensive exploration of C++ programming, structured into multiple modules. Each module focuses on specific aspects of the language, gradually building up from fundamental concepts to advanced features. The project is designed to provide hands-on experience with object-oriented programming, memory management, templates, and other core competencies of C++.

## Structure

The project is divided into modules, each containing exercises (`ex00`, `ex01`, etc.) and subject files (`en.subject.pdf`, `es.subject.pdf`) that describe the objectives and requirements. The modules are organized as follows:

- **Module 00**: Introduction to C++ basics, including classes, member functions, and basic Makefile usage.
- **Module 01**: Memory management, pointers, references, and dynamic allocation.
- **Module 02**: Ad-hoc polymorphism, operator overloading, and fixed-point arithmetic.
- **Module 03**: Inheritance and encapsulation.
- **Module 04**: Abstract classes, interfaces, and deep copying.
- **Module 05**: Exception handling and bureaucratic forms simulation.
- **Module 06**: Type identification and serialization.
- **Module 07**: Templates and generic programming.
- **Module 08**: Containers and algorithms.
- **Module 09**: Advanced algorithms and data structures.

Each module includes a `Makefile` for compilation and testing, ensuring adherence to C++98 standards and best practices.

## Competencies Developed

By completing this project, you will develop the following competencies:

1. **Object-Oriented Programming**: Understanding and applying principles such as encapsulation, inheritance, and polymorphism.
2. **Memory Management**: Mastering dynamic allocation, pointers, references, and RAII (Resource Acquisition Is Initialization).
3. **Code Organization**: Writing modular, maintainable, and reusable code.
4. **Error Handling**: Implementing robust exception handling mechanisms.
5. **Templates and Generic Programming**: Creating flexible and reusable code using templates.
6. **Algorithm Design**: Developing efficient algorithms and understanding their complexity.
7. **Debugging and Testing**: Using tools and techniques to debug and test C++ applications.
8. **Makefile Proficiency**: Automating compilation and linking processes with Makefiles.

## How to Use

1. Navigate to the desired module directory.
2. Review the subject files (`en.subject.pdf` or `es.subject.pdf`) for instructions.
3. Compile the code using the provided `Makefile`:
```bash
make
```
4. Execute the compiled program to test its functionality:
```bash
./<executable_name>
```
5. Use the `make clean` command to remove compiled files and keep the workspace tidy:
```bash
make clean
```