//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30752
#include<iostream>
using namespace std;

int main()
{
    int nu,mark;
    while(cin >> nu)//cin input
    {
        mark=0;
        for(int i=2;i*i<=nu;i++)//if number%i == 0 mean it is not prime
        {
            if(nu%i == 0)
            {
                mark=1;
                break;
            }
        }
        if(mark == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

