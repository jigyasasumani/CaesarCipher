#include <iostream>
#include <string>
using namespace std;
string encryption(string msg,int shift)
{
    string encrypt="";
    int l=msg.length();
    for(int i=0;i<l;i++)
    {
        if((int)msg[i]>=65 &&(int)msg[i]<=90)
        {
            char ch=(char)(((int)msg[i]+shift-65)%26+65);
            encrypt.push_back(ch);
        }
        else if((int)msg[i]>=97 &&(int)msg[i]<=122)
        {
            char ch=(char)(((int)msg[i]+shift-97)%26+97);
            encrypt.push_back(ch);
        }
    }
    return encrypt;
}
int main()
{
    int shift =3;
    string msg;
    cout << "enter message : ";
    cin >> msg;
    cout << "encrypted message is : ";
    cout << encryption(msg,shift);
    return 0;
}
