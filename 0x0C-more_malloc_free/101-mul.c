#include <stdio.h>
#include <stdlib.h>

int multiply(int num1, int num2)
{
return (num1 * num2);
}

int main(int argc, char *argv[])
{
int num1, num2;
if (argc != 3)
{
printf("Error \n");
return (98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

if (num1 <= 0 || num2 <= 0)
{
printf("Error\n");
return (98);
}

printf("%d\n", multiply(num1, num2));

return (0);
}
