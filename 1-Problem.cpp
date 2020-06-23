//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30747
#include<iostream>
#include<cstdio>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
    int mile; //input
    while(cin >> mile) // cin input != EOF
    {
        cout << fixed  <<setprecision(1) << (double)mile*1.6 << endl; //cout 小數點後一位
       // printf("%.1f\n",(double)mile*1.6);
    }
    return 0;
}
