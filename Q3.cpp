#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "Ayush Pandey";
    string reversed = " ";
    for(int i = str.length() - 1; i>=0;i--)
    {

        reversed += str[i];
    }
        cout<<"Reverse String : " << reversed<<endl;

    return 0;



}
