#include <stdio.h>

#define MAX_LENGTH 1000

void reverse(char line[], int length);

/* create a function to reverse the input line */
int main()
{
    int c, current;
    char line[MAX_LENGTH];
    
    current = 0;
    while((c = getchar()) != EOF)
    {
        line[current] = c;
        if(c == '\n')
        {
            reverse(line, current-1);
            printf("\n");
        }
        current++;
    }

    return 0;
}

void reverse(char line[], int length)
{
    printf("Reversed: ");
    for (int i = length; i >= 0 && line[i] != '\n'; i--) 
    {
           printf("%c", line[i]);
    }
}
