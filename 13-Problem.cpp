//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30767
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
    vector<char> word;
    map<char,int> record;
    string in;
    int nu=0;
    while(cin >> in)
    {
        //count number of letter
        nu++;
        for(int i=0;i<(int)in.size();i++)
        {
            if(in[i] == ',' || in[i] == '.')
                continue;
            if(in[i] < 'a')
                in[i]=in[i]-'A'+'a';
            if(record.count(in[i]) == 0)
            {
                record.insert({in[i],1});
                word.push_back(in[i]);
            }
            else
                record[in[i]]++;
        }
    }
    //sort letter appear times
    sort(word.begin(),word.end());
    cout << nu << "\n";
    for(int i=0;i<(int)word.size();i++)
    {
        cout << word[i] << " : " << record[word[i]] << "\n";
    }
    return 0;
}
