#include<stdio.h>

int main() {
    int value;
    scanf("%d", &value);
    if (value == 0) return 0;
    else if (value < 0) return 1;
    else if (value > 0) return 2;
    else return 255;
}