#include <iostream>
#include <string>
using namespace std ;
int main ()
{
		string username, password;
		double harian, uts, uas ;
	 	int kalku, algo, z ;
	cout <<"Login Akun ==============="<<endl ;
	cout <<"Username		:  ";
	cin >>username ;
	cout <<"Password 		:  ";
	cin >>password;
	cout <<"==========================="<<endl ;
	if ( username == "umarraihan" && password == "124200040" ){
	cout <<" Login Sukses "<<endl ;
	cout<<"/n/"<<endl ;
	cout<<"Input Nilai Mata Kuliah"<<endl ;
	cout<<"1. Algoritma dan pemprograman  "<<endl ;
	cout<<"2. Kalkulus					  "<<endl ;
	cout<<"Pilihan : " ;
	cin>>z ;
	if (z == 1){
	
	cout<<"Pilih : 1"<<endl ;
	cout<<"Nilai Harian : " ;
	cin>>harian ;
	cout<<"Nilai UTS 	: " ;
	cin>>uts ;
	cout<<"Nilai UAS	: " ;
	cin>>uas;
	
	if ((harian+uts+uas)/3>=80){
		cout<<"anda Lulus Algoritma dan pemprograman dengan nilai "<<(harian+uts+uas)/3<<endl ;
	}
	else if ((harian+uts+uas)/3 <= uts){
		cout<<"anda Tidak Lulus Algoritma dan Pemprograman dengan nilai "<<(harian+uts+uas)/3<<endl ;
	}}
	else if (z == 2){
		cout<<"Pilih : 2"<<endl ;
	cout<<"Nilai Harian : " ;
	cin>>harian ;
	cout<<"Nilai UTS 	: " ;
	cin>>uts ;
	cout<<"Nilai UAS	: " ;
	cin>>uas;
	
	if ((harian+uts+uas)/3>=80){
		cout<<"anda Lulus Kalkulus dengan nilai "<<(harian+uts+uas)/3<<endl ;
	}
	else if ((harian+uts+uas)/3 <= uts){
		cout<<"anda Tidak Lulus Kalkulus dengan nilai "<<(harian+uts+uas)/3<<endl ;
	}
	}
	
}
else if ( password !="124200040" && username == "umarraihan")
{
	cout <<"password anda salah"<<endl ;
}
else if ( username !="umarraihan" && password == "124200040" )
{
	cout <<"Username anda salah"<<endl ;
}

else 
{
	cout <<"Username dan Password Salah"<<endl ;
}
}
