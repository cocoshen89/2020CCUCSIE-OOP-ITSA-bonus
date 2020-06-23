//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=41018
#include<iostream>
using namespace std;

int main()
{
    int input,ans,n;
    cin >> n;//cin number of input
    while(n--)
    {
        cin >> input; // cin input
        //delete all not 3 or 5 number
        for(int i=2; i<=input; i++)
        {
            if(i%3 == 0 || i%5 == 0)
                continue;
            while(input % i == 0)
            {
                input/=i;
            }
        }
        //cout ans
        cout << input << "\n";
    }
    return 0;
}
