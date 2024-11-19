#include<iostream>
using namespace std;

int main(){
   int a,b,c;

   cout<<"Enter number a: ";
   cin>>a;

   cout<<"Enter number b: ";
   cin>>b;

   cout<<"Enter number c: ";
   cin>>c;

   if (a<b)
   {
    if (b<c)
    {
        cout<<"C grater";
    }
    else{
        cout<<"B grater";
    }
   }
   else{
    if (a<c)
    {
        cout<<"C grater";
    }
    else{
        cout<<"A grater";
    }
   }
   
   return 0; 
}