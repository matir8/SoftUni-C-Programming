#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 4096

int main()
{
    char path[BUFFER_SIZE];
    printf("Please enter path to file: ");
    scanf("%s", path);
    FILE *file = fopen(path , "r");
    char buffer[BUFFER_SIZE + 1];
    if(file)
    {
        char *line;
        size_t length = 0;
        int isOdd = 1;
        while(!feof(file))
        {
            ssize_t readBytes = getline(&line, &length, file);
            if(readBytes <= 0)
            {
                break;
            }

            if(isOdd)
            {
                printf("%s", line);
            }
            isOdd = !isOdd;
        }
        free(line);
    }


    fclose(file);
    return 0;
}
