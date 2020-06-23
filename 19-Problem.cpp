//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30756
#include<iostream>
using namespace std;

int main()
{
    int nt,a1,a2,a3;
    char tmp;
    //cin input
    cin >> nt;
    cin >> tmp >> a1;
    cin >> tmp >> a2;
    cin >> tmp >> a3;
    //check he has enough money
    nt=nt-a1*15-a2*20-a3*30;
    if(nt<0)
    {
        cout << "0\n";
        return 0;
    }
    //count ans and cout
    int one,five,fifty;
    fifty=nt/50;
    nt%=50;
    five=nt/5;
    nt%=5;
    one=nt;
    cout << one << "," << five << "," << fifty << "\n";
    return 0;
}
