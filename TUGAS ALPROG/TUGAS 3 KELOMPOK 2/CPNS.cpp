#include <iostream>
using namespace std;
int main(){	
	int nilai_TIU;
	int nilai_TWK;
	int nilai_TKP;
		
	cout<<"PROGRAM MENENTUKAN KELULUSAN CPNS"<<"\n"<<"Masukkan nilai TIU :  ";
	cin>>nilai_TIU;
	cout<<"Masukkan nilai TWK : ";
	cin>>nilai_TWK;
	cout<<"Masukkan nilai TKP : ";
	cin>>nilai_TKP;
	cout<<"Nilai Total = "<<nilai_TIU+nilai_TWK+nilai_TKP;
	
	if(nilai_TIU >=80, nilai_TWK >=100, nilai_TKP >=140){
		cout<<"\n"<<"ANDA DINYATAKAN LULUS TES CPNS";
	}
	else {
		cout<<"\n"<<"ANDA DINYATAKAN TIDAK LULUS TES";
	}
	return 0;
}
