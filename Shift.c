#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
    string message = get_string("Enter your message: ");
    int n = get_int("Enter encryption constant: ");
    printf("Encrypted message: ");

    for(int i = 0, m = strlen(message); i < m; i++)
    {
        printf("%c",message[i]-n);
    }
    printf("\n");
}
