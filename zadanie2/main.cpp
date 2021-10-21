#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int random(int a, int b)
{
    int x;
    srand (time(NULL));

    x= rand() % b+a;

    return x;
}

int main()
{
    int a,b;
    cout << "podaj koniec i początek przedziału \n" << endl;
    cin >> a;
    cin >> b;

    cout << "randomowa liczba z przedzialu = " << random(a,b) << endl;

    return 0;
}


