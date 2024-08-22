#include <iostream>
#include <iomanip>
#define wicky main
using namespace std;

wicky() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int n;
    float x0,p = 0.0;
    cin>>n>>x0;
    float x[n],y[n];
    for (int i = 0; i < n; i++) {
        cin>>x[i]>>y[i];
    }

    for (int i = 0; i < n; i++) {
        float temp1 = 1.0,temp2 = 1.0;
        for (int j = 0; j < n; j++) {
            if (x[j] != x[i]) {
                temp1 *= (x0 - x[j]);
                temp2 *= (x[i] - x[j]);
            }
        }
        p +=  (y[i] * temp1) / temp2;
    }  
    cout<<setprecision(3)<<fixed<<p;
    
    return 0;
}