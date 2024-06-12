#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cout<<"Enter number of lines: "<<endl;
    cin>>n;
    cin.ignore();
    ofstream outFile("MultipleLinesFile.txt");
    for(int i=0;i<n;i++)
    {
        string material;
        cout<<"Line "<<i+1<<" : "<<endl;
        getline(cin,material);
        outFile<<material<<endl;

    }
    outFile.close();
    cout<<"\n Given lines are: "<<endl;
    string material;
    ifstream inFile("MultipleLinesFile.txt");
    while(getline(inFile,material)){
        cout<<material<<endl;
    }
    inFile.close();

}
