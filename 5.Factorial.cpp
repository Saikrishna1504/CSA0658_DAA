#include <stdio.h>
int fact(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

int main() {
    int num;
    printf("enter the number");
    scanf("%d",&num);
    printf("The factorial of %d is %d\n", num, fact(num));
    return 0;
}
