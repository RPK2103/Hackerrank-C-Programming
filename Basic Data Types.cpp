#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;
    scanf("%d %ld %c %f %lf",&a,&b,&c,&d,&e);
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    printf("%.3f \n%.9lf",d,e);
    return 0;
}
