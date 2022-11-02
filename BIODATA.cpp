#include<iostream>
using namespace std;
int main(){
	//DETA SARI ASLINA (2217051117)
	string nama,npm,kelas,jurusan;
	
	cout<<"Masukan nama anda : ";
	getline(cin,nama);
	cout<<"Masukan npm anda : ";
	getline(cin,npm);
	cout<<"Anda berada di kelas : ";
	getline(cin,kelas);
	cout<<"Masukan jurusan anda : ";
	getline(cin,jurusan);
	
	cout<<endl;
	cout<<"Nama saya adalah : "<<nama<<endl;
	cout<<"Dengan npm : "<<npm<<endl;
	cout<<"Berada di kelas : "<<kelas<<endl;
	cout<<"Dari jurusan : "<<jurusan;
	return 0;
}
