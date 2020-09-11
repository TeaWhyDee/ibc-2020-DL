#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    printf("WRITE STRING RIGHT NOW \n");

    char str[1024];
    scanf("%s", str);
    printf("\n");
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c", str[strlen(str) - i - 1]);
    }
    printf("\n");

    return 0;
}

    