#include <iostream>
using namespace std;

int main (){
	int p= 4;
	int l= 5;
	int t= 7;
	int volume= p*l*t;
	
	if(volume<100){
		cout<<"Balok Kecil : "<<"\n";
		cout<<volume<<" cm^3";
	}else if(volume>=100&&volume<=200){
		cout<<"Balok Sedang : "<<"\n";
		cout<<volume<<" cm^3";
	}else if(volume>200){
		cout<<"Balok Besar : "<<"\n";
		cout<<volume<<" cm^3";
	}
}
