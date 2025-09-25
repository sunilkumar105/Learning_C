#include <stdio.h>

int main()
{

    FILE *file_ptr = fopen("a.txt", "r");
    if (file_ptr == NULL)
    {
        printf("Failed to open the file \r\n");
        return -1;
    }
    else
    {
        printf("File opened successfully \r\n");
    }

    //Close the file
    fclose(file_ptr);
    return 0;
}