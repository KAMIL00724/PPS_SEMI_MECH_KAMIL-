# Sum and Difference of Two Numbers

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array, of size $n$, reverse it.

Example: If array, $arr = [1, 2, 3, 4, 5]$, after reversing it, the array should be, $arr = [5, 4, 3, 2, 1]$.

**Input Format**

The first line contains an integer, $n$, denoting the size of the array.
The next line contains $n$ space-separated integers denoting the elements of the array.

**Constraints**

$ 1 \le n \le 1000$  
$ 1 \le arr_i \le 1000$, where $arr_i$ is the $i^{th}$ element of the array.

**Output Format**

The output is handled by the code given in the editor, which would print the array.

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-03T04:47:36.738Z  

```c
#include <stdio.h>

int main() {
    int int1, int2;
    float float1, float2;
    
    scanf("%d %d", &int1, &int2);
    scanf("%f %f", &float1, &float2);
    
    printf("%d %d\n", int1 + int2, int1 - int2);
    
    printf("%.1f %.1f\n", float1 + float2, float1 - float2);
    
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/reverse-array-c/problem)