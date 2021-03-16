#include <iostream>

using namespace std;
int UCLN(int x, int y);
int main()
{
    int x,y;
    do {
    cout<<"Nhap x nguyen duong: "; cin>>x;
    } while (x<=0);
    do {
    cout<<"Nhap y nguyen duong: "; cin>>y;
    } while (y<=0);
    cout<<"UCLN("<<x<<","<<y<<") = "<<UCLN(x,y);
    return 0;
}
int UCLN(int x, int y)
{
    if (x==y) return x;
    else if (x>y) return UCLN(x-y,y);
    else if (y>x) return UCLN(x,y-x);
}
