#include <iostream>
using namespace std;

int main(){
	int x,y,z;
	int dus[3][3]={(2,4,6),(8,10,12),(14,16,18)};
	
	cout<<"Jumlah dus = 9"<<endl;
	
	cout<<"Nomor dus ";
	for(x=0;x<9;x++){
		cout<<(x+1)*2<<" ";
	}
	cout<<"\n";
	y=1;;
	for(x=0;x<3;x++){
		z=(x+1)*2;
		dus[x][0]=z;
		cout<<"Nomor dus "<<y++<<" : "<<dus[x][0]<<"\n";
	}
	y=4;
	for(x=0;x<3;x++){
		z=(x+4)*2;
		dus[x][1]=z;
		cout<<"Nomor dus "<<y++<<" : "<<dus[x][1]<<"\n";
	}
	y=7;
	for(x=0;x<3;x++){
		z=(x+7)*2;
		dus[x][2]=z;
		cout<<"Nomor dus"<<y++<<" : "<<dus[x][2]<<"\n";
	}
}
