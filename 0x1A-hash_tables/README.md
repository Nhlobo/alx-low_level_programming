# Hash Tables in C

This repository contains a set of C programs implementing basic operations for a hash table data structure. The implementation follows the specifications provided.

## Table of Contents

- [Files](#files)
- [Compilation](#compilation)
- [Usage](#usage)
- [Tests](#tests)

## Files

- `0-hash_table_create.c`: Function to create a hash table.
- `1-djb2.c`: Implementation of the djb2 hash function.
- `2-key_index.c`: Function to get the index of a key in the hash table array.
- `3-hash_table_set.c`: Function to add an element to the hash table.
- `4-hash_table_get.c`: Function to retrieve a value associated with a key.
- `5-hash_table_print.c`: Function to print the hash table.
- `6-hash_table_delete.c`: Function to delete a hash table.
- `hash_tables.h`: Header file containing data structures and function prototypes.

## Compilation

All the files can be compiled using the provided `gcc` command. For example:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-hash_table_create.c -o a
```

## Usage

After compilation, you can run the executable to test the implemented hash table functions. For example:

```bash
./a
```

## Tests

The repository includes test files (`0-main.c`, `1-main.c`, ..., `6-main.c`) to check the correctness of each implemented function. You can compile and run these test files to verify the functionality.

## Author
Nhlovo Mathebula
