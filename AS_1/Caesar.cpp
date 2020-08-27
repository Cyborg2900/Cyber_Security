#include<iostream> 
using namespace std; 
int main()
{
	char message[100], ch;
	int i, key,choice;	
	cout << "Enter the message: ";
	cin.getline(message, 100);
	cout << "Enter key: ";
	cin >> key;	
    cout<< "Enter  1-To Encrypt \n 2-Decrypt";
    cin>>choice; 
    switch(choice)
    {
        case 1:
        for(i = 0; message[i] != '\0'; ++i)
        {
            ch = message[i];		
            if(ch >= 'a' && ch <= 'z')
            {
                ch = ch + key;			
                if(ch > 'z')
                {
                    ch = ch - 'z' + 'a' - 1;
                }			
                message[i] = ch;
            }
            else if(ch >= 'A' && ch <= 'Z')
            {
                ch = ch + key;			
                if(ch > 'Z')
                {
                    ch = ch - 'Z' + 'A' - 1;
                }			
                message[i] = ch;
            }
        }        
        cout << "Encrypted message: " << message;
        break;

        case 2:
        	for(i = 0; message[i] != '\0'; ++i)
            {
                ch = message[i];		
                if(ch >= 'a' && ch <= 'z')
                {
                    ch = ch - key;			
                    if(ch < 'a')
                    {
                        ch = ch + 'z' - 'a' + 1;
                    }		
                    message[i] = ch;
                }
                else if(ch >= 'A' && ch <= 'Z')
                {
                    ch = ch - key;			
                    if(ch > 'a')
                    {
                        ch = ch + 'Z' - 'A' + 1;
                    }			
                    message[i] = ch;
                }
            }	
        cout << "Decrypted message: " << message; 
        break;
        default:
        cout<<"wrong choice ";
        break;
    }       
    return 0;
}