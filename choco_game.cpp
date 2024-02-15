#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter the no. of boxes: ";
    cin >> a;
    cout << endl;
     if (a <= 0 || a > 10){
        cout << "Invalid Input" << endl;
        return 0;
     }
     else{
        int arr[a];
        int count = 0;
        for(int i = 0; i < a; i++){
            cout << "Enter no. of chocolates in box " << i+1 << ": " ;
            cin >> arr [i];
            if (i == 0 && arr[i] % 2 != 0){
                cout << "Sorry!!! The first box always should contain positive even no. of chocolates." << endl;
                return 0;
            }
            else {
                if (arr[i] % 2 != 0){
                    count ++;
                }
             }
        }
        cout << endl;
        cout << "No. of chocolates in each box: ";
        for (int i = count; i < a; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        return 0;
     }
}