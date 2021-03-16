#include <iostream>
using namespace std;
int giaithua(int n);
int main()
{
    int n,S=0;
    do {
    cout<<"Nhap n nguyen duong: "; cin>>n;
    } while (n<=0);
    for (int i=1; i<=n; i++) {
    S=S+giaithua(i);
    }
    cout<<"S = "<<S;
    return 0;
}
int giaithua(int n)
{
    if (n==1) return 1;
    else return n*giaithua(n-1);
}
