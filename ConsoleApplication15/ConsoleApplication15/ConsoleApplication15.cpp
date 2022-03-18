#include<iostream> 
#include<string> 
#include <array> 
#include <algorithm>

const int ten = 10000;
using namespace std;

array<int, ten> Array(int size) { 
    array<int, ten> ary;
    array<int, ten>::iterator ptr = ary.begin();
    array<int, ten>::iterator ftr = ary.end();
    for (auto it = ptr; it != ftr -10000 + size; it++) //uglycode
    {
        cout << "element ";
        cin >> *it;
    }
   // for (int i = 0; i < size; i++) { //could be more readable code
   //     cout << "Element ";
   //     int x;
   //     cin >> x;
   //     ary[i] = x;
   // }
    return ary;
}

array<int, ten> ArrayEven( int size, int &n) {
    array<int, ten> arr = Array(size);
    array<int, ten>::iterator ptr = arr.begin();
    array<int, ten>::iterator ftr = arr.end();
    array<int, ten> ary;
    int count = 0;
    for (auto it = ptr; it != ftr - 10000 + size; it++) {
        if (*it % 2 == 0) {
            ary[count] = *it;
            count++;
        }
    }
    n = count;
   // cout << endl << n << endl;

    return ary;
}

int main() {
    cout << "Enter size: ";
    int size;
    cin >> size;
    int n = 0;
    array<int, ten> earray = ArrayEven(size, n);
    cout << "Even array:- " << endl;
    for (int i = 0; i < n; i++) {
        cout << earray[i] << endl;
    }

    return 0;
}


/*
const int ten = 10;
using namespace std;

array<int, ten> Array(int size) {
    array<int, ten> ary;
    for (int i = 0; i < size; i++) {
        cout << "Element ";
        int x;
        cin >> x;
        ary[i] = x;
    }
    return ary;
}

array<int, ten> ArrayEven( int size, int &n) {
    array<int, ten> arr = Array(size);
    array<int, ten>::iterator ptr; //iterator since it must be used
    array<int, ten> ary;
    int count = 0;
    for (ptr = arr.begin(); ptr < arr.end(); ptr++) {
        if (*ptr % 2 == 0) {
            ary[count] = *ptr;
            count++;
        }
    }
    n = count;
    cout << endl << n << endl;

    return ary;
}

int main() {
    cout << "Enter size: ";
    int size;
    cin >> size;
    int n = 0;
    array<int, ten> earray = ArrayEven(size, n);
    cout << "Even array:- ";
    for (int i = 0; i < n; i++) {
        cout << earray[i] << endl;
    }

    return 0;
}*/