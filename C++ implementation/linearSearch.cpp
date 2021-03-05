#include <iostream>
#include <stdlib.h>
#include <array>

using namespace std;

const int ARRAY_LENGHT = 500000;
const int MAX_RANDOM = 100000;
const int MIN_RANDOM = 1;

bool linearSearch(int value, int array[], int lenght) {
    bool found = false;
    for(int index=0; index<lenght; index++) { 
        cout << "In for " << index << " " << array[index] << endl;
        if(array[index]==value) {
            cout << "In function " << index << array[index] << endl;
            found = true;
            break;
        }
    }
    return found;
}

int main() {
    int array[ARRAY_LENGHT];

    for(int index=0; index<(sizeof array / sizeof array[0]); index++) {
        array[index] = MIN_RANDOM + rand() % (MAX_RANDOM - MIN_RANDOM + 1);
    }

    if(linearSearch(200000, array, (sizeof array / sizeof array[0]))) {
        cout << "Value was found :)" << endl;
    } else {
        cout << "Value was not found :(" << endl;
    }
}
