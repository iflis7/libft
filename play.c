
#include "./includes/libft.h"
#include <stdio.h>

int main()
{
    char *str = get_next_line(0);
    while(str)
    {
        printf("One: %s\n", str);
    }
    return 0;
}
