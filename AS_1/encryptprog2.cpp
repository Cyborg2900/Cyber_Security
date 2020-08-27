#include<iostream>
#include<string>
using namespace std;
int main()
{
    char st[30],ch,c;
    int i,j,k;
    cout<<"enter the string"<<endl;
    cin.getline(st,30);
    for(i=0;st[i]!='\0';i++)
    {
        ch=st[i];
        k=ch;
        if(ch>='a' && ch<='z')
        {
            if(i%2==0)
            c='$';
            else
            c='#';            
            for(j=1;j<=k-97;j++)
            cout<<c;        
        }
        else if(ch>='A' && ch<='Z')
        {
            if(i%2==0)
            c='$';
            else
            c='#';
            for(j=1;j<=k-65;j++)
            cout<<c;            

        }
    }
    return 0;

}