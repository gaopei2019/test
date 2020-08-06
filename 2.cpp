#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
double a=123.7889,b=783.1,c=-5790.019876;
cout<<setiosflags(ios::fixed)<<setiosflags(ios::right)<<setprecision(2);
cout<<setw(10)<<a<<'\n';
cout<<setw(10)<<b<<'\n';
cout<<setw(10)<<c<<'\n';
return 0;
}