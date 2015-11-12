#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 4096

void copy(const char *srcPath, const char *destPath);

int main()
{
    char path[BUFFER_SIZE];
    char destPath[BUFFER_SIZE];
    printf("Please enter path to file: ");
    scanf("%s", path);
    printf("Please enter path to modified file:");
    scanf("%s", destPath);
    FILE *file = fopen(path , "r");
    FILE *destFile = fopen(destPath, "w+");
    char buffer[BUFFER_SIZE + 1];
    if(file)
    {
        copy(path, destPath);
        int lineNumber = 0;
        int length = 0;
        char *line;
        while(!feof(file))
        {
            ssize_t readBytes = getline(&line, &length, file);
            if(readBytes <= 0)
            {
                break;
            }
            fprintf(destFile, "%d %s", lineNumber, line);
            lineNumber++;
        }
        printf("Done!\n");
    }

    return 0;
}

void copy(const char *srcPath, const char *destPath)
{
    FILE *srcFile = fopen(srcPath, "r");
    FILE *destFile = fopen(destPath, "w");
    char buffer[BUFFER_SIZE];
    while (!feof(srcFile))
    {
        size_t readBytes = fread(buffer, 1, BUFFER_SIZE, srcFile);
        fwrite(buffer, 1, readBytes, destFile);
    }
    fclose(destFile);
    fclose(srcFile);
}
