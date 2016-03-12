#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[])
{
    char c;
    while (1)
    {
        c = getchar();
        if (c == EOF)
            return EXIT_SUCCESS;
        else if (c == '<')
        {
            c = getchar();
            if (c == 'P')
                printf("Pros\n");
            else if (c == 'C')
                printf("Cons\n");
            else if (c == 'L')
                printf("0\n");
            else
                getchar();
        }
        else
            getchar();

    }
}
