#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define BUFFER_SIZE 4096

void kill(const char *);

int main() 
{
    const size_t parts = 5;
    const char *srcFilePath = "babe.jpg";
    
    FILE *srcFile = fopen(srcFilePath, "r");
    if (!srcFile)
        kill(srcFilePath);
    
    fseek(srcFile, 0, SEEK_END);
    long long position = ftell(srcFile);
    fseek(srcFile, 0, SEEK_SET);
    
    long long partSize = (position / parts) + 1;
    char buffer[BUFFER_SIZE];
    size_t i;
    for (i = 0; i < parts; i++)
    {
        char name[11];
        sprintf(name, "Part-%lu.jpg", i + 1);
        
        FILE *currentDestFile = fopen(name, "w");
        if (!currentDestFile)
            kill("Could not create a part");
        
        size_t writtenBytes = 0;
        while (writtenBytes <= partSize && !feof(srcFile))
        {
            size_t readBytes = fread(buffer, 1, BUFFER_SIZE, srcFile);
            fwrite(buffer, 1, readBytes, currentDestFile);
            writtenBytes += readBytes;
        }
        
        fclose(currentDestFile);
    }
    
    fclose(srcFile);
    
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