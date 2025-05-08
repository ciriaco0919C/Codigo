#include <stdio.h>

int main() {
    for (int i = 1; i <= 500; i++) {
        printf("%d, %d, %d\n", i, i * i, i * i * i);
    }
    return 0;
}
