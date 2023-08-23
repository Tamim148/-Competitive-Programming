

#include<iostream>
#include<map>
#include<vector>
#include<math.h>
//#include<bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(0);cin.tie(NULL);
/// !!! What is ios_base::sync_with_stdio(0);cin.tie(NULL) ???? !!!
//////ios_base::sync_with_stdio(0);: This line is used to synchronize C++ streams (such as cin and cout) with their C counterparts.
//////By default, C++ streams are synchronized with C's standard I/O streams, which can lead to slower I/O operations due to the extra synchronization overhead.
//////When you call ios_base::sync_with_stdio(false) or provide 0 as an argument,
////// you're telling the program not to synchronize C++ streams with C streams. This can result in faster I/O operations.

/// !!! What is cin.tie(NULL)??? !!!
////////cin.tie(NULL);: The cin stream is tied to the cout stream by default. This means that when you perform input operations using cin,
//////// the cout buffer is flushed (i.e., its contents are displayed on the console) before the input is processed. By using cin.tie(NULL),
//////// you're essentially "untying" the connection between cin and cout.
////////This can also contribute to faster I/O operations since you're avoiding the automatic flushing of the output buffer every time you read input.



#define ll long long
using namespace std;


int main()
{
    fastio;
    ///standard input,output,endline :
    int t;
    cin>>t;
////    cout<<t<<endl;
////    cout<<t;
////    cout<<t;

/////Datatypes:
   ///float s;
   ///char c;
   ///double d;
   ///unsigned int
   ///long long etc




     ///assigning procedure

//////     int p=t;
//////     int x=0;
//////     cout<<x<<p<<endl;
//////




    ////Conditionals, and-or operator,nested conditionals

//     if(t==45)
//     {
//         cout<<"Passed"<<endl;
//     }
//////////     else if(t>100 || t<0)
//////////     {
//////////         cout<<"Invalid"<<endl;
//////////     }
//////////     else if(t>=46)
//////////     {
//////////         if(t<=50)
//////////         {
//////////             cout<<"C"<<endl;
//////////         }
//////////         else if (t>=51 && t<=70)
//////////         {
//////////             cout<<"B"<<endl;
//////////         }
//////////         else
//////////         {
//////////             cout<<"A"<<endl;
//////////         }
//////////
//////////     }
//     else
//     {
//         cout<<"Failed"<<endl;
//     }



 //// LOOPS:


 ///////For loop
////////////
//////////// for(int i=0;i<t;i++)
//////////// {
////////////     cout<<"Hello world"<<endl;
//////////// }
////////////
////////////
//////////// for(int i=t;i>0;i--)
//////////// {
////////////     cout<<"Hello world"<<endl;
//////////// }






///////ARRAY:
////////int a[t];
////////char a[t]; -> string will learn a lot about it later !!!!
////////cin>>a[0];
////////
////////
//////// for(int i=0;i<t;i++)
//////// {
////////     cin>>a[i];
////////     cout<<"Inserting value in "<<i<<"th position"<<endl;
//////// }
////////
////////
////////   for(int i=0;i<t;i++)
//////// {
////////
////////     cout<<"value :"<<a[i]<<" is in "<<i<<"th position"<<endl;
//////// }

///////While loop:
////////while (t--)
////////{
////////    cout<<"hello"<<endl;
////////}


////////while(1) infinity loop -> But why should we need this ??

////////{
////////    cout<<"Hello !!"<<endl;
////////}







    return 0;
}


