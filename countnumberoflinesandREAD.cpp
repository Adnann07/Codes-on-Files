#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream inFile("MultipleLinesFile.txt");
    string material;
    int c=0;
    while(getline(inFile,material))
    {
        cout<<material<<endl;
        ++c;
    }
    inFile.close();
    cout<<"Number of lines in the file are: "<<c<<endl;



}
