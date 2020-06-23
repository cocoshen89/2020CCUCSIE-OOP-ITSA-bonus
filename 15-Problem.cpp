//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30769
#include<iostream>
#include<string>
#include<set>
#include<vector>
using namespace std;

int main()
{
    string in;
    vector<string> out;
    set<string> record;
    while(cin >> in) //cin input
    {
        //uppercase -> lowercase
        for(int i=0;i<(int)in.size();i++)
        {
            if('A' <= in[i] && in[i] <= 'Z')
                in[i]=in[i]-'A'+'a';
        }
        //check this string appear
        if(record.count(in) == 0)
        {
            out.push_back(in);
            record.insert(in);
        }
    }
    //cout ans
    for(int i=0;i<(int)out.size();i++)
    {
        if(i == 0)
            cout << out[i];
        else
            cout << " " << out[i];
    }
    cout << "\n";
    return 0;
}
