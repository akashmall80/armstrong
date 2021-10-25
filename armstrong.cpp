//Check a number is armstrong or not
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int lastdigit;
    int originaln=n;
    int reverse=0;
    while(n>0)
    {
        lastdigit=n%10;
        reverse=(reverse)+lastdigit*lastdigit*lastdigit;
        n=n/10;
    }
    if(reverse==originaln)
    {
        cout<<"Armstrong number:";
    }
    else
    {
        cout<<"Not a armstrong number:";
    }
    return 0;
}