//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30766
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string input,revers_string;
    while(cin >> input)//cin string
    {
        revers_string = input;
        reverse(revers_string.begin(),revers_string.end());//reverse input
        int mark = 0;
        for(int i=0;i<(int)input.size();i++)
        {
            if(input[i] != revers_string[i])
            {
                mark=1;
                break;
            }
        }
        //check
        if(mark == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
