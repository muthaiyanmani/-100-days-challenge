#include<iostream>
#include<string>
using namespace std;

void sentenceToWord(string name){
    int initValue = 0;
    for(int i=0;name[i];i++){
        string result="";
        if(name[i]==32 || name[i]==44){
           for(int j=initValue;j<i;j++)
              result.push_back(name[j]);
           initValue=i+1;
           cout<<result<<endl;
        }
    }
    for(int j=initValue;j<name.length();j++)
        cout<<name[j];
}

int main(){
    
    // string name;
    // cout<<"Enter sentence :: ";
    // getline(cin,name);
    sentenceToWord("int a,b,c");

    return 0;
}