#include <iostream>

using namespace std;
int cnk(int n, int k);
int main()
{
    int n,k;
     do {
    cout<<"Nhap n nguyen duong: "; cin>>n;
    } while (n<0);
    do {
    cout<<"Nhap k nguyen duong: "; cin>>k;
    } while (k<0);
    cout<<"C ("<<n<<", "<<k<<") = "<<cnk(n,k);
    return 0;
}
int cnk(int n, int k)
{
    if (k==0 || k==n) return 1;
    else if (k>n) return 0;
         else if (0<k && k<n) return cnk(n-1,k) + cnk(n-1, k-1);
}
