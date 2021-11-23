#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

bool isValidIp(string ip)
{
    if (ip[0] == '0' || !(ip.length() <= 15))
        return false;

    else
    {
        //first three octates
        int initialValue = 0;
        short int count = 0;
        for (int i = 0; ip[i]; i++)
            //check whether number or character
            if ((ip[i] >= 48 && ip[i] <= 57) || ip[i] == 46)
            {
                if (ip[i] == '.')
                {
                    string splitted = ip.substr(initialValue, i);
                    initialValue = i + 1;
                    int strToInt = atoi(splitted.c_str());
                    if (!(0 <= strToInt && strToInt <= 255))
                        return false;
                    count++;
                }
            }
            else
                return false;

        //last one octates
        string splitted = ip.substr(initialValue, ip.length());
        int strToInt = atoi(splitted.c_str());

        if (!(0 <= strToInt && strToInt <= 255) || !(count == 3) || !(splitted.length()))
            return false;
        return true;
    }
}

string getInput()
{
    string ip;
    do
    {
        cout << "Enter valid IP address :: ";
        getline(cin, ip);
    } while (!isValidIp(ip));
    return ip;
}

int main()
{
    string ip = getInput();
    cout << "Get input Successfully!" << endl;

    for (short int i = 0; ip[i]; i++)
        if (ip[i] == '.')
        {
            string splitted = ip.substr(0, i);
            int strToInt = atoi(splitted.c_str());

            if (1 <= strToInt && strToInt <= 126)
                cout << "Class A" << endl;
            else if (ip == "127.0.0.1")
                cout << "Localhost" << endl;
            else if (128 <= strToInt && strToInt <= 191)
                cout << "Class B" << endl;
            else if (192 <= strToInt && 223 >= strToInt)
                cout << "Class C" << endl;
            else if (224 <= strToInt && 239 >= strToInt)
                cout << "Class D" << endl;
            else if (240 <= strToInt && 255 >= strToInt)
                cout << "Class E" << endl;
            else
                cout << "Something went wrong!" << endl;
            break;
        }

    return 0;
}