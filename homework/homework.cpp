#include <iostream>
#include "Date.h"
using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru");
    Date date1(14, 12, 2007);
    Date date2(25, 06, 2008);

    int difference = date1 - date2;
    cout << "Разница в днях: " << difference << :endl;

    return 0;
}