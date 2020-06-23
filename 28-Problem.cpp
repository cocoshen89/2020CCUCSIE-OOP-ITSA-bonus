//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30753
#include <iostream>
using namespace std;

int main()
{
    int year;
    while(cin >> year)
    {
        if(year%4 == 0)
        {
            if(year%400 != 0 && year%100 == 0)
               cout << "Common Year\n";
            else
                cout << "Bissextile Year\n";
        }
        else
            cout << "Common Year\n";
    }
    return 0;
}
