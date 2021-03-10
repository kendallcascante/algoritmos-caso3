#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h> 
 
const int SIZE = 50000;
 
const long int ARRAY_LENGHT = 100000;
const int MAX_RANDOM = 100000;
const int MIN_RANDOM = 1;
 
bool linearSearch(int value, int array[]) {
    bool found = false;
    int index;
    for(index=0; index<ARRAY_LENGHT; index++) { 
        printf(" ");
        if(array[index]==value) {
            found = true;
            break;
        }
    }
    return found;
}
 
int main()
{
    time_t start = time(NULL);
    int array[ARRAY_LENGHT];
 
 	int index;
    for(index=0; index<ARRAY_LENGHT; index++) {
        array[index] = rand() % (MAX_RANDOM-MIN_RANDOM+1) + MIN_RANDOM;
    }
 
    if(linearSearch(200000, array)) {
        printf("\nValue was found :)\n\n");
    } else {
        printf("\nValue was not found :(\n\n");
    }
    
    time_t end = time(NULL);
    
    const int* memoryI = &SIZE;
    int* memoryF = &array[ARRAY_LENGHT];
    
    printf("Time elapsed is %d seconds\n", (end - start));
    printf("Memory elapsed is %d", (memoryF - memoryI));
    
    return 0;
}

