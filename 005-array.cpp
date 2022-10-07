#include <iostream>

using namespace std;

int main()
{
    int arr[10];

    for(int i=0; i<10; i++){
        cout << "input array-" <<i<<": "; cin >> arr[i];
    }
    cout<<endl;
    cout << "result: "<<endl;
    for(int i=0; i<10; i++){
        cout << "array-"<< i << "= " << arr[i] <<endl;
    }
    return 0;
}
