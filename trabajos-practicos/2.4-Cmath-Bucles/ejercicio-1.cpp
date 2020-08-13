#include <iostream>
using namespace std;
#include <cmath>
int main()
{
float producto= 80, cantidad= 0, total, final;

cout << "cuantos productos compra?";
cin >> cantidad;
if (cantidad<10){
    total = producto * cantidad;
    cout << total;
}
if (cantidad>=10 & cantidad<20){
    total= producto * cantidad;
    final = total - (total * 12.0 / 100);
    cout << final;
}
if (cantidad>=20 & cantidad<31){
    total= producto * cantidad;
    final = total - (total * 25.0 / 100);
    cout << final;
}
if (cantidad>30){
    total= producto * cantidad;
    final = total - (total * 40.0 / 100);
    cout << final;
}

return 0;
}