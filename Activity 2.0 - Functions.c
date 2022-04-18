#include <stdio.h>

void CalcGrade(int n1, int n2, int n3, int n4, int n5) {
    int total, average;
    total = n1 + n2 + n3 + n4 + n5;
    average = total / 5;
    printf("\nAverage: %d\n", average);
}
int main() {
    int n1, n2, n3, n4, n5;
    printf("Enter 5 numbers:\n");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
    CalcGrade(n1, n2, n3, n4, n5);
    return 0;
}