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
        while(!feof(file))
        {
            int readBytes = fread(buffer, 1, BUFFER_SIZE, file);
            buffer[readBytes] = '\0';
            printf("%s", buffer);
        }
    }


    fclose(file);
    return 0;
}
