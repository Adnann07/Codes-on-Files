#include<bits/stdc++.h>
using namespace std;
int main()
{
    string material;
    ifstream inFile("ReadThisFile.txt");
    while(getline(inFile,material))
    {
        cout<<material<<endl;
    }
    inFile.close();
}
