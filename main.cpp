/*#include<iostream>
using namespace std ;
int main(){
    int n;
    int l;
    string ch;
    cin >> n ;
    while (n--)
    {   
        cin >>ch;
        l=ch.length();
        if(l>=12){
            cout<<ch[0]<<l-2<<ch[l-1]<<endl;
        }else
        {
            cout<<ch<<endl;
        }
        
    }
    
    return 0;
} manich fehem 3lh ma te9belech*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int y,n;
    char x[200];
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>x;
        y=strlen(x);
        if (y>10)
    {
        cout<<x[0]<<(y-2)<<x[y-1]<<endl;
    }
     else
    cout<<x<<endl;
    }
//    y=strlen(x);
//    if (y>10)
//    {
//        cout<<x[0]<<(y-2)<<x[y-1];
//    }
//    else
//    cout<<x;
    return 0;
}