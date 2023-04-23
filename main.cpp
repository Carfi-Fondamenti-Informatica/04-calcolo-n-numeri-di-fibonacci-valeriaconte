#include <iostream>
using namespace  std;

int main() {
    int n, f, a=1, b=1;
    cout << "inserire un numero intero\n";
    cin >> n;
    if (n<2){
        cout << "errore\n";
    }
    else {

    int c=0;
            while (c<n){
                c++;
                f=a+b;
                cout << f << endl;
                b=a;
                a=f;
            }
}
    return 0;
}
