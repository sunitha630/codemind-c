#include <stdio.h>
int isUniqueNumber(int num) {
    int digits[num];
    int digit,c=0;
    while (num> 0) {
        digit = num % 10;
        digits[digit]++;
        c++;
        num/= 10;
    }
    for (int i = 0; i < c; i++) {
        if (digits[i] > 1) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int num; 
    scanf("%d",&num);
    if (isUniqueNumber(num)) {
        printf("Unique Number");
    } else {
        printf("Not Unique Number");
    }
    
    return 0;
}
