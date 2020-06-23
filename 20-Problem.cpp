//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30785
#include<iostream>
#include<algorithm>
#include<utility>
#include<string>
using namespace std;

int main()
{
    int n,nu;
    cin >> n;
    pair<int,int> A[n];
    for(int i=0;i<n;i++)
    {
        cin >> nu; //cin input
        int tmp=nu,k=0;
        //count a1+a2+a3+...
        while(tmp>0)
        {
            k+=tmp%10;
            tmp/=10;
        }
        //put into A
        A[i]={k,nu};
    }
    //sort
    sort(A,A+n);
    for(int i=0;i<n-1;i++)
        cout << A[i].second << " ";
    cout << A[n-1].second << "\n";
    return 0;
}
