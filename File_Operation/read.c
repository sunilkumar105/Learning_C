#include <stdio.h>

int main(void)
{
    FILE *filePtr = fopen("a.txt", "r");
    if (filePtr == NULL)
    {
        printf("Error opening file \r\n");
        return 0;
    }
    char textBuff[1024] = {0};
    size_t sizeReadFromFile = fread(textBuff, sizeof(char), 17, filePtr);
    printf("Read file is: %s\r\n", textBuff);

    return 0;
}