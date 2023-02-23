#include <iostream>
using namespace std;
//void mesaj();
int kiyas(int a, int b)
{
 if(a>b)
 {
    cout<<"sayilarin buyugu=="<<a<<endl;
 }
 else
 {
     cout<<"sayilarin buyugu=="<<b<<endl;
 }


}

int main()
{
   int sayi1,sayi2;
   cout<<"iki adet sayi giriniz..."<<endl;
   cin>>sayi1>>sayi2;
   cout<<kiyas(sayi1,sayi2);
    return 0;
}
