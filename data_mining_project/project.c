#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[])
{
    char c;
    int result;
    while (1)
    {
        c = getchar();
        if (c == EOF)
            return EXIT_SUCCESS;
        else if (c == '<')
            {
                c = getchar();
                if (c == 'P')
                    result = 1;
                else if (c == 'C')
                    result = 0;
                else if (c == 'L')
                    ;
                else
                {
                    getchar();
                    result = 2;
                }
                getchar();
                getchar();
                getchar();
                getchar();
            }
        else if (c == '\"')
            printf("\'");
        else
            printf("%c", c);
    }
}
