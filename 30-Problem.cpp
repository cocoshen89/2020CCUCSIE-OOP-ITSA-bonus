//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=50102
#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;

int main()
{
    int n,tmp,a,k;
    cin >> n;
    pair<int,int> A[n];
    for(int i=0;i<n;i++)
    {
        cin >> a;
        tmp=a;
        k=0;
        while(tmp>0)
        {
            k+=tmp%10;
            tmp/=10;
        }
        A[i]={k,a};
    }
    sort(A,A+n);
    for(int i=0;i<n-1;i++)
    {
        cout << A[i].second << " ";
    }
    cout << A[n-1].second <<"\n";
    return 0;
}
