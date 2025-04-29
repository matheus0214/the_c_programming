#include <stdio.h>

#define MAX_LENGTH 1000

int getFromInput(char line[], int index);
int removeTrailing(char line[], int index);
int shouldRemoveBlankLine(int begin, int end, char line[]);

int main()
{
    char line[MAX_LENGTH];
    int len = 0;
    int lastIndexInserted = 0;

    while((len = getFromInput(line, lastIndexInserted)) > 0)
    {
        /* verify if is a blank line */
        int cpLastIndex = lastIndexInserted;
        lastIndexInserted = lastIndexInserted + (len);

        if(shouldRemoveBlankLine(cpLastIndex, lastIndexInserted, line) == -1)
        {
            lastIndexInserted = cpLastIndex;
            continue;
        }
                        
        lastIndexInserted = removeTrailing(line, lastIndexInserted) ;

        /* add break line */
        line[lastIndexInserted] = '\n';
        lastIndexInserted = lastIndexInserted + 1;
    }

    printf("\n-----\n");

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
        if (c != '\t')
            line[index + i] = c;
    }

    return i;
}

int removeTrailing(char line[], int index)
{
    if (line[index - 1] == ' ')
    {
        index--;
    }

    return index;
}


int shouldRemoveBlankLine(int begin, int end, char line[])
{
    int shouldRemove = -1;

    for(int i = begin; i < end; i++)
    {
        if(line[i] != ' ')
        {
            shouldRemove = 1;
            break;
        }
    }

    return shouldRemove;
}
