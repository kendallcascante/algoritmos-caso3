#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h> 

const int ARRAY_LENGHT = 100000;
const int MAX_RANDOM = 100000;
const int MIN_RANDOM = 1;

bool linearSearch(int value, int array[]) {
    bool found = false;
    int index;
    for(index=0; index<ARRAY_LENGHT; index++) { 
        if(array[index]==value) {
            found = true;
            break;
        }
    }
    return found;
}

int main()
{
    time_t timeI = time(NULL);
    
    int array[ARRAY_LENGHT];
    int index;
    
    for(index=0; index<ARRAY_LENGHT; index++) {
        array[index] = rand() % (MAX_RANDOM-MIN_RANDOM+1) + MIN_RANDOM;
    }

    if(linearSearch(200000, array)) {
        printf("Value was found :)\n\n");
    } else {
        printf("Value was not found :(\n\n");
    }
    
    time_t timeF = time(NULL);
    
    printf("Tiempo: %ld\n", timeF-timeI);
    
    return 0;
}
