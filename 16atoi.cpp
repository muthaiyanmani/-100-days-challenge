#include <iostream>
using namespace std;

int atoi(string str)
{
    long int strToInt = 0;
    if (!(str.length() <= 10)) {
        cout << "Only 10 digit is allowed" << endl;
        return 0;
    }
    else{
        for (int i = 0; str[i]; i++){
            if (str[i] >= 48 && str[i] <= 57)
                strToInt = (strToInt * 10) + (int(str[i]) - 48);
            else{
                cout << "Enter numbers in string!" << endl;
                return 0;
            }
        }
    }
    return strToInt;
}

int main()
{
    string name;
    cout<<"Enter number";
    getline(cin,name);
    cout << atoi(name);
    return 0;
}