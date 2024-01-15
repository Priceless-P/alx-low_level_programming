#  0x1E-search_algorithms

## Tasks
1. [Linear search](./0-linear.c)
Write a function that searches for a value in an array of integers using the Linear search algorithm.

**Prototype**: `int linear_search(int *array, size_t size, int value);`

- `array`: Pointer to the first element of the array to search in.
- `size`: Number of elements in the array.
- `value`: Value to search for.

The function must return the first index where the value is located. If the value is not present in the array or if the array is NULL, the function must return -1.

Every time a value in the array is compared to the value being searched, print the value.


2. [Binary search](./1-binary.c)

Write a function that searches for a value in a sorted array of integers using the Binary search algorithm.

**Prototype**: `int binary_search(int *array, size_t size, int value);`

- `array`: Pointer to the first element of the array to search in.
- `size`: Number of elements in the array.
- `value`: Value to search for.

The function must return the index where the value is located. If the value is not present in the array or if the array is NULL, the function must return -1.
Print the array being searched every time it changes.

3. [Big O #0](./2-O)
Answer the question: What is the time complexity (worst case) of a linear search in an array of size n?

4. [Big O #1](./3-O)
Answer the question: What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

5. [Big 0 #2](./4-O)
Answer the question: What is the time complexity (worst case) of a binary search in an array of size n?

6. [Big 0 #3](./5-O)
Answer the question: What is the space complexity (worst case) of a binary search in an array of size n?

7. [Big 0 #4](./6-O)
Answer the question: What is the space complexity of this function / algorithm?
```c
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```
