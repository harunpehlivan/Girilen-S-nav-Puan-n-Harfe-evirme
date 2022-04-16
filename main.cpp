#include<iostream>
using namespace std;
int main()
{
   setlocale(LC_ALL,"Turkish"); //Türkçe karakter
   int puan;
   cout<<"Sınav Puanını Girin : ";
   cin>>puan;
   if(puan>100)
   {
   		cout<<"100' den büyük değer girmeyin"<<endl;
   }
   else if(puan>=85)
   {
   		cout<<"A"<<endl;
   }
   else if(puan>=75)
   {
   		cout<<"B"<<endl;
   }
      else if(puan>=60)
   {
   		cout<<"C"<<endl;
   }
      else if(puan>=45)
   {
   		cout<<"D"<<endl;
   }
      else if(puan>=30)
   {
   		cout<<"E"<<endl;
   }
      else if(puan>=0)
   {
   		cout<<"F"<<endl;
   }
   else
   {
   		cout<<"Sıfır' dan Küçük Değer Girdiniz";
   }
}
 