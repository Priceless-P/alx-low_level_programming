# Doubly Linked Lists - C Programming

This repository contains C programs that demonstrate the implementation of various functions for manipulating doubly linked lists. Doubly linked lists are a type of data structure in which each element contains a data value and two pointers, one pointing to the next element and the other to the previous element in the list.

## Table of Contents

1. [Print List](#print-list)
2. [List Length](#list-length)
3. [Add Node at the Beginning](#add-node-at-the-beginning)
4. [Add Node at the End](#add-node-at-the-end)
5. [Free List](#free-list)
6. [Get Node at Index](#get-node-at-index)
7. [Sum List](#sum-list)
8. [Insert at Index](#insert-at-index)
9. [Delete at Index](#delete-at-index)

### Print List

- **File**: 0-print_dlistint.c
- **Description**: This function prints all the elements of a doubly linked list and returns the number of nodes in the list.

### List Length

- **File**: 1-dlistint_len.c
- **Description**: This function returns the number of elements in a doubly linked list.

### Add Node at the Beginning

- **File**: 2-add_dnodeint.c
- **Description**: This function adds a new node at the beginning of a doubly linked list and returns the address of the new element.

### Add Node at the End

- **File**: 3-add_dnodeint_end.c
- **Description**: This function adds a new node at the end of a doubly linked list and returns the address of the new element.

### Free List

- **File**: 4-free_dlistint.c
- **Description**: This function frees the memory allocated for a doubly linked list.

### Get Node at Index

- **File**: 5-get_dnodeint.c
- **Description**: This function returns the nth node of a doubly linked list, where the index starts at 0.

### Sum List

- **File**: 6-sum_dlistint.c
- **Description**: This function returns the sum of all the data values in a doubly linked list.

### Insert at Index

- **File**: 7-insert_dnodeint.c
- **Description**: This function inserts a new node at a specified index in a doubly linked list and returns the address of the new node.

### Delete at Index

- **File**: 8-delete_dnodeint.c
- **Description**: This function deletes the node at a specified index in a doubly linked list and returns 1 if it succeeds or -1 if it fails.

## Usage

You can compile and run each of the provided C files to test the functionality of the corresponding doubly linked list operations.

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <filename.c> -o <output_executable>
./<output_executable>
```

For example:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-print_dlistint.c -o print_list
./print_list
```
