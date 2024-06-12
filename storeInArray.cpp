#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"enter the file name you with to read: "<<endl;
    string name;
    cin>>name;
    ifstream inFile(name);
    vector<string> lines;
    string line;
    while(getline(inFile,line))
    {
        lines.push_back(line);
    }
    inFile.close();
    for(int i=0;i<line.size();i++)
    {
        cout<<line[i]<<endl;
    }
}
