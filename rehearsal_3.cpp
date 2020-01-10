#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double sumSqrt(int N)
{
    double ans=0;
    int i=1;
    while(i<=N){
        ans = ans + (1.0/sqrt(i));
        
        i++;
    }
    cout << setprecision(5) << fixed;
    return ans;
}


int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";

}
