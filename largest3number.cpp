# include <iostream>
using namespace std;
int main()
{
    int n,num,digit,rev,O;
    
    cout<<"Program To Check Wheather a Number is                 Palindrome or Not /n";
    
    cout<<"Enter a Positive Number";
    
    cin>>num;
    
    n = num;
    
    do
    
    {
        digit = num%10;
        rev = (rev*10) + digit;
        num = num /10;
    } while (num!=0);
    
    cout<<"The Reverce Of The Number Is"<<rev<<endl;
    
    if (n=rev)
    
    cout<<"The Number Is a Palindrome";
    
    else
    
    cout<<"The Number Is Not Palinedrome";
          return 0;
}