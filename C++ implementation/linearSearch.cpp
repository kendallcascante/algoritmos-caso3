#include <iostream>
#include <time.h>
 
using namespace std;

const int SIZE = 50000;
 
const long int ARRAY_LENGHT = 100000;
const int MAX_RANDOM = 100000;
const int MIN_RANDOM = 1;
 
bool linearSearch(int value, int array[]) {
    bool found = false;
    for(int index=0; index<ARRAY_LENGHT; index++) { 
        cout << " " ;
        if(array[index]==value) {
            found = true;
            break;
        }
    }
    return found;
}
 
int main() {
 
    time_t start, end; 
    time(&start); 
    int array[ARRAY_LENGHT];
 
    for(int index=0; index<ARRAY_LENGHT; index++) {
        array[index] = MIN_RANDOM + rand() % (MAX_RANDOM - MIN_RANDOM + 1);
    }
 
    if(linearSearch(200000, array)) {
        cout << "\nValue was found :)" << endl;
    } else {
        cout << "\nValue was not found :(" << endl;
    }
    
    time(&end); 
    double time_taken = double(end - start); 
    
    const int* memoryI = &SIZE;
    int* memoryF = &array[ARRAY_LENGHT];
    
    cout << "Time taken by program is : " << fixed << time_taken << "sec" << endl;
    cout << "Memory taken by program is : " << memoryF - memoryI;
    
    return 0;
}

