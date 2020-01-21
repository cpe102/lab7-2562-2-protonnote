//status = "ONE-NIGHT-STAND";
#include <iostream>
#include <string>
using namespace std;

int main(){
    int age,hight,money;
    string status;
    cout << "Enter age : ";
    cin >> age;
    if (age < 20)
    {
        cout << "Enter hight : ";
        cin >> hight;
        if(hight < 160) status = "UNFRIEND";
        else if (hight < 175) status = "FRIEND";
        else {
            cout << "Enter money : ";
            cin >> money;
            if(money > 69000000) status = "ONE-NIGHT-STAND";
            else status = "MARRIED";
        }
    }
    else{
        if (age < 30 )
        {
           cout << "Enter money : ";
            cin >> money;
             if(money > 10000000) status = "BEST FRIEND";
             else status = "UNFRIEND";
        }
        else status = "UNFRIEND";
    }
    cout << "Status : " << status ;
    return 0;
}