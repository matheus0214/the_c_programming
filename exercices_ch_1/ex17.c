#include <stdio.h>

#define MAX_LENGTH 1000
#define PRINT_LINE_LENGTH 3

int getFromInput(char line[], int index);

int main()
{
    char line[MAX_LENGTH];
    int len = 0;
    int lastIndexInserted = 0;

    while((len = getFromInput(line, lastIndexInserted)) > 0)
    {
        if (len > PRINT_LINE_LENGTH)
        {
            lastIndexInserted = lastIndexInserted + (len);
            line[lastIndexInserted] = '\n';

            lastIndexInserted = lastIndexInserted + 1;
        }
    }

    printf("\nLines greather than %d characters\n", PRINT_LINE_LENGTH);

    for(int i = 0; i < lastIndexInserted; i++)
        printf("%c", line[i]);

    return 0;
}

int getFromInput(char line[], int index)
{
    int c;
    int i;

    for(i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
    {
        line[index + i] = c;
    }

    return i;
}
