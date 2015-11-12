#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define BUFFER_SIZE 4096

void slice(const char *sourceFile, const char *destinationFile, size_t parts);
void kill(const char *msg);
void assemble(const char **parts, const char *destinationDirectory);

int main()
{
    int parts = 5;
    char sourceFile[BUFFER_SIZE];
    char destFile[BUFFER_SIZE];
    printf("Please enter the path of the file you want to be splitted: ");
    scanf("%s", sourceFile);
    slice(sourceFile, destFile, parts);

    char *files[] = { "Part-1.jpg", "Part-2.jpg", "Part-3.jpg",
        "Part-4.jpg", "Part-5.jpg" };
    assemble(&files, "merged.jpg");

    return 0;
}

void slice(const char *sourceFile, const char *destinationFile, size_t parts)
{

    FILE *srcFile = fopen(sourceFile, "r");
    if (!srcFile)
        kill(sourceFile);

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
}
void assemble(const char **parts, const char *destinationDirectory)
{

    FILE *resultFile = fopen(destinationDirectory, "w");
    if (!resultFile)
        kill(NULL);

    char buffer[BUFFER_SIZE];
    size_t i;
    for (i = 0; i < 5; i++)
    {
        FILE *currentPart = fopen(parts[i], "r");
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
