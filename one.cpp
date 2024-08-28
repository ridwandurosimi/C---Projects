#include <iostream>
using namespace std;

template <class DT>

void printThis(DT x){

    cout << "The value is " << x << endl;

}

int main(){

    float r = 999.10;

    printThis<float>(r);
    cout << "This value in the box r is " << r << endl;

    return 0;

}