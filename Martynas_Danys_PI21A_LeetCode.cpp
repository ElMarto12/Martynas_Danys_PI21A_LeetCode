#include <iostream>

using namespace std;


int SumNum(int a, int b)
{
    if (b > 0) { // when b is positive number
        while (b > 0) {
            a++; // adding a by one number while b is less than 0 
            b--; // reducing b by one until loop stops
        }
    }
    else if (b < 0) { // when b is negative 
        while (b < 0) {
            a--; // reducing a until b becomes equal to 0
            b++; // adding b every loop iteration, until it becomes equal to 0 
        }
    }

    return a; 
}

int main()
{
    cout << "1 + 2 = " << SumNum(1, -2) << endl;
    cout << "2 + 3 = " << SumNum(2, 3) << endl;
    return 0;
}
