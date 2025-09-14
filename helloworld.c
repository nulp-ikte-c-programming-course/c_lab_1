#include "stdio.h"
int main()
{
    char *msg[] = {"Hello", "World", "from VS Code!", NULL};
    for (int i = 0; msg[i] != NULL; i++) {
        printf("%s\n", msg[i]);
    }
    return 0;
}
