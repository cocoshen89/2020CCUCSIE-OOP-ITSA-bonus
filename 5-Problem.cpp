//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30754
#include<iostream>
using namespace std;

int main()
{
    int month;
    while(cin >> month) // cin input
    {
        if(3 <= month && month <= 5) //3~5 Spring
            cout << "Spring\n";
        else  if(6 <= month && month <= 8) // 6~8 Summer
            cout << "Summer\n";
        else  if(9 <= month && month <= 11) //9~11 Autumn
            cout << "Autumn\n";
        else //12~2 Winter
            cout << "Winter\n";
    }
    return 0;
}
