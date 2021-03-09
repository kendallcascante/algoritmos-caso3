#include <iostream>
#include <time.h> 

using namespace std;

const int ARRAY_LENGHT = 100000;
const int MAX_RANDOM = 100000;
const int MIN_RANDOM = 1;

bool linearSearch(int value, int array[]) {
    bool found = false;
    
    for(int index=0; index<ARRAY_LENGHT; index++) { 
        if(array[index]==value) {
            found = true;
            break;
        }
    }
    return found;
}

int main()
{ 
    //time_t timeI = time(NULL);

    int array[ARRAY_LENGHT];
    
    for(int index=0; index<ARRAY_LENGHT; index++) {
    	cout << "Delay" << endl;
        array[index] = rand() % (MAX_RANDOM-MIN_RANDOM+1) + MIN_RANDOM;
    }

    if(linearSearch(200000, array)) {
        cout << "Value was found :)" << endl;
    } else {
        cout << "Value was not found :(" << endl;
    }
    
    //time_t timeF = time(NULL);
    //cout << "Tiempo: " << timeF-timeI << " segundos";
    
    return 0;
}
