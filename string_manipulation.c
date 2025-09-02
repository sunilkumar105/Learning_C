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

    /*Search character in a string (1st occurance)*/
    char name[10] = "Suninl";
    char *posOf_n = strchr(name, 'n');
    if (posOf_n)
    {
        printf("n is available at memory address: %p, and at location: %d \r\n", posOf_n, posOf_n - name);
    }
    else
    {
        printf("Couldnt find character n in the string: %s \r\n", name);
    }

    /*Search character in string (last occurance)*/
    char *posOfLast_n = strrchr(name, 'n');
    if (posOfLast_n)
    {
        printf("n is available at memory address of last address: %p, and at location: %d \r\n", posOfLast_n, posOfLast_n - name);
    }
    else
    {
        printf("Couldnt find character n in the string: %s \r\n", name);
    }

    /*Concatenate string*/
    char mainStr[100] = "Sunil";
    char *destStrPointer = strcat(mainStr, " Kumar");
    printf("Concatenated strin is %s \r\n", mainStr);
    if (destStrPointer == mainStr)
    {
        printf("String concatenated \r\n");
    }
    else
    {
        printf("Concatenation failed \r\n");
    }

    /*Compare two string*/
    char str1[100] = "sunil";
    char *str1_addr = strcmp(str1, "sunil");
    if (str1_addr == NULL)
    {
        printf("Both the string are equal\r\n");
    }

    return 0;
}