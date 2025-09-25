#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *filePointer = fopen("a.txt", "w");
    if (filePointer == NULL)
    {
        printf("failed to open file \r\n");
        return -1;
    }

    char *text_to_be_written = "I am sunil kumar";

    size_t numberOfObjectWritten = fwrite(text_to_be_written, sizeof(char), strlen(text_to_be_written), filePointer);
    if (numberOfObjectWritten != strlen(text_to_be_written))
    {
        printf("Failed to write text into the file \r\n");
        return -1;
    }
    else
    {
        printf("File written successfully \r\n");
    }
    return 0;
}