#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    int age;
    cout<<"Enter your name: "<<endl;
    getline(cin,name);


    cout<<"Enter your age: "<<endl;
    cin>>age;

    ofstream outFile("info.txt");
    outFile<<name;
    outFile<<age;
    outFile.close();
}
