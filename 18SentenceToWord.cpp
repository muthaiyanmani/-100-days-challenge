#include<iostream>
using namespace std;

void sentenceToWord(string name){
    int initValue = 0;
    for(int i=0;name[i];i++){
        if(name[i]==32 || name[i]==44){
           for(int j=initValue;j<i;j++)
               cout<<name[j];
           initValue=i+1;
           cout<<endl;
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