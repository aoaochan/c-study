#include <stdio.h>
#include <stdbool.h>

int main(void) { // int main(int argc, char **argv) {
    // if (argc != 1) printf("(argc: %d, argv: %s)\n", argc, argv[0]);
    // printf("Hello, world!\n");

    // printf("I like pizza!\n");
    // printf("It's really good!\n");

    // int age = 5521;
    // int year = 2025;
    // int quantity = 2; // 1;
    // printf("age: %d\nyear: %d\nquantity: %d\n", age, year, quantity);

    // float gpa = 2.5;
    // float price = 19.99;
    // float temp = -10.1;
    // printf("gpa: %.1f\n", gpa);
    // printf("price: $%.2f\n", price);
    // printf("temp: %f", temp);

    // double pi = 3.14159265359;
    // double e = 2.7182818284590;
    // printf("pi: %.15lf\n", pi); // lf = long float
    // printf("e: %.15lf\n", e);

    // char grade = 'F';
    // char symbol = '!';
    // char currency = '$';
    // printf("grade: %c\n", grade);
    // printf("symbol: %c\n", symbol);
    // printf("currency: %c\n", currency);

    // char name[] = "aoaochan";
    // char food[] = "pizza";
    // char email[] = "asdf@asdf.com";
    // printf("name: %s\n", name);
    // printf("food: %s\n", food);
    // printf("email: %s\n", email);

    // #include <stdbool.h>
    bool isOnline = false;
    printf("isOnline: %d\n", isOnline); // 0 == false, 1 == true
    if (isOnline) printf("You are online.\n");
    else printf("You are offline.\n");
    

    return 0;
}
