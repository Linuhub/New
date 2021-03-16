#include <iostream>

using namespace std;

int fibonaci(int n);

int main()
{
    int n;
    do {
        cout<<"Nhap n nguyen duong: "; cin>>n;
    } while (n<=0);
    cout<<"\nSo hang thu "<<n<<" trong day Fibonaci la : "<<fibonaci(n);
    return 0;
}

int fibonaci (int n)
{
    if (n==1) return 1;
    if (n==2) return 1;
    if (n>=3) return fibonaci(n-1)+ fibonaci(n-2);
}
