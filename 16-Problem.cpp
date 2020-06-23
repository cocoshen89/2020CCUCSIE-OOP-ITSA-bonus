//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30777
#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

int main()
{
    int nu,go,comeback;
    cin >> nu;
    vector<pair<int,int> > box;
    vector<int> re[nu];
    //cin >> input
    for(int i=0;i<nu;i++)
    {
        cin >> go >> comeback;
        box.push_back(make_pair(go,comeback));
    }
    //sort every cars go and back time
    sort(box.begin(),box.end());
    //find how many car can go
    for(int i=0;i<nu;i++)
    {
        for(int j=0;j<nu;j++)
        {
            if((int)re[j].size() == 0)
            {
                re[j].push_back(box[i].second);
                break;
            }
            else if(re[j][(int)re[j].size()-1] <= box[i].first)
            {
                re[j].push_back(box[i].second);
                break;
            }
        }
    }
    int ct=0;
    for(int i=0;i<nu;i++)
    {
        if((int)re[i].size()>0)
            ct++;
    }
    cout << ct << "\n";
    return 0;
}
