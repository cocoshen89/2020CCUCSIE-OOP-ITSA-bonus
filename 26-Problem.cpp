//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30782
#include<string>
#include<iostream>
using namespace std;

int main()
{
    string in;
    int pushback;
    getline(cin,in);
    cin >> pushback;
    //do push back
    for(int i=0; i<(int)in.size(); i++)
    {
        if('a' <= in[i] && in[i] <= 'z')
        {
            in[i]=in[i]-'a'+pushback;
            in[i]%=26;
            in[i]+='a';

        }
        else if('A' <= in[i] && in[i] <= 'Z')
        {
            in[i]=in[i]-'A'+pushback;
            in[i]%=26;
            in[i]+='A';
        }
        else if('0' <= in[i] && in[i] <= '9')
        {
            in[i]=in[i]+pushback-'0';
            in[i]%=10;
            in[i]+='0';
        }
    }
    cout << in << endl;
    return 0;
}
