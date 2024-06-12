#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream inFile("info.txt");
    string material;
    int c=0;
    while(getline(inFile, material))
    {

            ++c;

    }
    inFile.close();
    cout<<"Number of lines: "<<c<<endl;
}
