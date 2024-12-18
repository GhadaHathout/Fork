# Process Management in C

This repository contains C programs demonstrating various process management concepts, such as `fork()`, `exec()`, and `wait()`. The following files are included:

## File Descriptions

### 1. `fork.c`

This program demonstrates the use of the `fork()` system call to create a child process. 
- The parent process increments a global variable `globe` every 2 seconds, while the child process decrements the same variable every 6 seconds.
- Both processes print the current value of `globe` along with their respective process IDs.

#### Compilation and Execution:
To compile and run `fork.c`, use the following commands:
```bash
gcc fork.c -o fork
./fork
```

### 2. `program.c`

This program demonstrates how to use the `fork()` and `execvp()` system calls:
- The parent process waits for the child process to finish using `wait()`.
- The child process uses `execvp()` to execute the `ls` command with the `-l` argument, listing files in long format.

#### Compilation and Execution:
To compile and run `program.c`, use the following commands:
```bash
gcc program.c -o program
./program
```

### 3. `program2.c`

This program demonstrates how command-line arguments are passed to a C program:
- It iterates over the `argv[]` array and prints each argument passed to the program.

#### Compilation and Execution:
To compile and run `program2.c`, use the following commands:
```bash
gcc program2.c -o program2
./program2 arg1 arg2 arg3
```
Example output:
```
argv[0] = ./program2
argv[1] = arg1
argv[2] = arg2
argv[3] = arg3
```

### 4. `program3.c`

This program extends the functionality of `program2.c` and demonstrates both process creation and execution:
- It first prints the command-line arguments like `program2.c`.
- Then, it creates a child process using `fork()` and executes the command passed as an argument using `execvp()`.

#### Compilation and Execution:
To compile and run `program3.c`, use the following commands:
```bash
gcc program3.c -o program3
./program3 <command> <arguments>
```
Example:
```bash
./program3 ls -l
```
The program will execute the `ls -l` command in the child process.

## Dependencies
- GCC or another C compiler that supports POSIX system calls.
