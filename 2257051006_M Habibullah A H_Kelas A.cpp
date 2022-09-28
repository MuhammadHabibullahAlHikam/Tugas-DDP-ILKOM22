#include <iostream>
using namespace std;
int main(){
	string a,b,c;
	getline(cin,a);
	cout<<"Masukan Nama : ";
	cin>>a;
	getline(cin,b);
	cout<<"masukan umur : ";
	cin>>b;
	getline(cin,c);
	cout<<"Harapan/make a wish :";
	cin>>c;
	cout<<"Happy birthday buat "<<a;
	cout<<" selamat bertambah umur yang ke "<<b;
	cout<<" "<<c;
	return 0; 
}
