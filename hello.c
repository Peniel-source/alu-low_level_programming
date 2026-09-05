#include <stdio.h>

int main(void)
{
    int age = 2147483648;
    float height = 5.9;
    int nop = 5;
    //printf("Hello WOrld!\n");
    printf("Age: %d nop: %d\n", age, nop);
    printf("%zu\n",sizeof(age));
    printf("%p\n", &age);
    return (0);
}