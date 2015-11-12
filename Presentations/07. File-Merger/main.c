#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define BUFFER_SIZE 8192

void kill(const char *);

int main() 
{
    char *files[] = { "Part-1.jpg", "Part-2.jpg", "Part-3.jpg",
        "Part-4.jpg", "Part-5.jpg" };
    
    FILE *resultFile = fopen("merged.jpg", "w");
    if (!resultFile)
        kill(NULL);
    
    char buffer[BUFFER_SIZE];
    size_t i;
    for (i = 0; i < 5; i++)
    {
        FILE *currentPart = fopen(files[i], "r");
        if (!currentPart)
            kill(NULL);
        
        while (!(feof(currentPart) ||
                ferror(resultFile) || 
                ferror(currentPart)))
        {
            size_t readBytes = fread(buffer, 1, BUFFER_SIZE, currentPart);
            fwrite(buffer, 1, readBytes, resultFile);
        }
        
        fclose(currentPart);
    }
    
    fclose(resultFile);
    
    printf("Done!");
    
    return (EXIT_SUCCESS);
}

void kill(const char *msg)
{
    if (errno)
    {
        perror(msg);
    }
    else 
    {   
        fprintf(stderr, "%s\n", msg);
    }
    
    exit(1);
}