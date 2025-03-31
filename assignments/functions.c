#include <stdio.h>
// void CalculateProduct() {
//     int x=5;
//     int y = 10;
//     int product = x * y;
//     printf("The product of %d and %d is %d\n", x, y, product);
// }

// int main() {
//     CalculateProduct();
//     return 0;
// }

// void myFunction(char name[], int age) {
//     printf("Hello, %s! You are %d years old.\n", name, age);
// }
// int main() {
//     myFunction("Alice", 18);
//     myFunction("Jack", 25);
//     myFunction("Charlie", 35);

//     return 0;
// }

void myFunction(int myNumbers[5]) {
    for (int i = 0; i < 5; i++) {
        printf("%d\n", myNumbers[i]);
    }
}
int main() {
    int myNumbers[5] = {10, 25, 30, 46, 58};
    myFunction(myNumbers);
    return 0;
}