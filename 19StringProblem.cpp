#include <iostream>
using namespace std;

int sumOfSquared(int number){
    int remainder, result = 0;
    try{
        while (number > 0){
            remainder = number % 10;
            result += (remainder * remainder);
            number /= 10;
        }
    }
    catch (...){
        cout << "Something went wrong!" << endl;
        return 0;
    }
    return result;
}

string rotateString(string name, int count=1,string side="right"){
    int length = name.length(); //code motion
    string temp = "";
    int limit = length - count;

    if(side=="right"){  
        for (int i = length - 1; i >= count; i--){
            if(i>limit-1)
                temp += name[i];
            name[i] = name[i - count];
        }
        short int tempLength=temp.length()-1; 
        for(int i=0;i<count;i++)
            name[i]=temp[tempLength-i];
    return name;

    }else if(side=="left"){ 
        for(int i=0;i<=length-1;i++){
            if(i<count)
                temp+=name[i];
            name[i]=name[i+count];
        }
            
        for(int i=limit;i<=length-1;i++)
            name[i]=temp[i-limit];
    return name; 
    }
}

int main()
{
    string name;
    int number;
    cout<<"Enter the String :: ";
    getline(cin,name);
    cout<<"Enter the Number :: ";
    cin>>number;
    if (sumOfSquared(number) % 2 == 0)
        cout<<rotateString(name);
    else
        cout<<rotateString(name,2,"left");
    return 0;
}