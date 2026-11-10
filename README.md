# Bubble Sort Algorithms in C++

This repository contains different implementations of the **Bubble Sort Algorithm** using C++.

## Sorting Implementations

| No. | File Name | Description |
|---|---|---|
| 1 | `bubble_sort_asc_desc.cpp` | Sort in Ascending and Descending Order |
| 2 | `bubble_sort_abs.cpp` | Sort Based on Absolute Values |
| 3 | `bubble_sort_freq.cpp` | Sort Based on Frequency |
| 4 | `bubble_sort_first_half.cpp` | Sort Only the First Half |
| 5 | `bubble_sort_second_half.cpp` | Sort Only the Second Half |

## 1. Ascending and Descending Order
- Ascending: Sorts elements from smallest to largest.
- Descending: Sorts elements from largest to smallest.

## 2. Absolute Value Sorting
Sorts array elements based on their absolute values in ascending order.

## 3. Frequency-Based Sorting
Sorts elements based on their frequency in the array. Elements with lower frequency appear first.

## 4. First Half Sorting
Sorts only the first half of the array in ascending order.

## 5. Second Half Sorting
Sorts only the second half of the array in ascending order.

**Note:** For first-half and second-half sorting, this implementation assumes an even number of elements. Both halves contain `n / 2` elements.

## Example Input

```cpp
int arr[] = {33, 22, 55, 11, 44, 77, 66};
int n = 7;
```

## Technologies Used
- Programming Language: C++
- Concepts: Arrays, Functions, Loops, Conditional Statements, Swapping
- Algorithm: Bubble Sort

## Time Complexity

| Case | Time Complexity |
|---|---|
| Best Case | O(n²) |
| Average Case | O(n²) |
| Worst Case | O(n²) |

## Author
Yusuf Siyam
