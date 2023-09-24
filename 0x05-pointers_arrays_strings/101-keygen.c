#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates a random valid password for the program 101-crackme
 * Return: 0 on success, 1 on error
 */
int main(void)
{
    int sum = 0;
    char c, password[100];

    srand(time(NULL));
    while (sum < 2772)
    {
        c = rand() % 128;
	if (sum + c > 2772)
		break;
        password[sum] = c;
	sum += c;
    }
    password[sum] = 2772 - sum;
    printf("%s\n", password);
    return (0);
}
