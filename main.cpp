#include <iostream>

using namespace std;

int main()
{
    int firstElemrnt, secondElement;

    cout << "Enter the first element: ";
    cin >> firstElemrnt;
    cout << "Enter the second element: ";
    cin >> secondElement;

    if ( firstElemrnt < secondElement ){
        firstElemrnt = secondElement - firstElemrnt;
        secondElement -= firstElemrnt;
        firstElemrnt = secondElement + firstElemrnt;
    }
    else{
        secondElement = firstElemrnt - secondElement;
        firstElemrnt -= secondElement;
        secondElement = firstElemrnt + secondElement;
    }

    cout << "First element : " << firstElemrnt << endl;
    cout << "Second element : " << secondElement << endl;

    return 0;
}
