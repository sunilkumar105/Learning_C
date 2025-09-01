#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "This is a string";

    /*Finding a sub-string in a string*/
    char *subStrPtr = strstr(str, "is");
    if (subStrPtr == NULL)
    {
        printf("Couldn't find the sub-string in the string");
    }
    else
    {
        printf("Sub-string found at location: %p, Complete other string after it is: %s \r\n", subStrPtr, subStrPtr);
    }

    /*Constructing a JSON string, using sprintf*/
    int bytesWritten = 0;
    char JSONstr[200] = {0};
    bytesWritten += sprintf(JSONstr + bytesWritten, "{");
    bytesWritten += sprintf(JSONstr + bytesWritten, "\"Key1\":");
    bytesWritten += sprintf(JSONstr + bytesWritten, "3,");
    bytesWritten += sprintf(JSONstr + bytesWritten, "\"Key2\":");
    bytesWritten += sprintf(JSONstr + bytesWritten, "4");
    bytesWritten += sprintf(JSONstr + bytesWritten, "}");
    printf("Construted JSON is: %s \r\n", JSONstr);

    /*Tokeninsing string based on delimintors*/
    char *ptr = strtok(JSONstr, "\"");
    if (ptr == NULL)
    {
        printf("Couldn't tokeninse string \r\n");
    }
    else
    {
        do
        {
            printf("Token: %s\n", ptr);
            ptr = strtok(NULL, "\"");
        } while (ptr != NULL);
    }

    return 0;
}