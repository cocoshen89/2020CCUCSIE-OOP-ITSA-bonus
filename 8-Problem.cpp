//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30751
#include<iostream>
using namespace std;

int main()
{
    int nu;
    while(cin >> nu)//cin input
    {
        int longen=nu/3;//count number of numbers % 3 == 0;
        int ans=(3+longen*3)*longen/2; // count total
        cout << ans << "\n";
    }
    return 0;
}

