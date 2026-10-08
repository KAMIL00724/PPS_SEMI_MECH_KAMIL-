#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d\n%d", &a, &b);
    
    char *labels[] = {"one", "two", "three", "four", "five", 
                      "six", "seven", "eight", "nine", "even", "odd"};
    
    for (int i = a; i <= b; i++) {
        if (i <= 9) {
            printf("%s\n", labels[i - 1]);
        } else {
            printf("%s\n", labels[9 + (i % 2)]);
        }
    }
    return 0;
}   
