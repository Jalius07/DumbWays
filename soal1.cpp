#include<iostream>
#include<iomanip>
#include <windows.h>
using namespace std;

/*
	Toko     - Tempat A = 2Km
	Tempat A - Tempat B = 5km
	Tempat B - Tempat C = 1.5km
	Tempat C - Tempat D = 2.5km
	
	perjalananSales('Toko', 'Tempat A', 'Tempat D', 'Tempat C')
	
	1 liter bensin untuk 2.5km
	Harga bensin = 7000/liter
	
	Total Jarak     = xxx KM
	Total Harga    = Rp xxx
	Total Bensin   = xxx Liter 
*/

void perjalananSales(float A, float B, float C, float D){
	float Tjarak= A+B+C+D;
	float Tbensin= Tjarak/2.5;
	float Tharga= 7000*Tbensin;
	
	float Abensin= A/2.5;
	float Aharga= 7000*Abensin;
	
	float Bbensin= B/2.5;
	float Bharga= 7000*Bbensin;
	
	float Cbensin= C/2.5;
	float Charga= 7000*Cbensin;
	
	float Dbensin= D/2.5;
	float Dharga= 7000*Dbensin;
	
	cout<<"Toko     - Tempat A = " <<A <<" Km | Rp. " <<Aharga <<" | " <<Abensin <<" Liter" <<endl;
	cout<<"Tempat A - Tempat B = " <<B <<" Km | Rp. " <<Bharga <<" | " <<Bbensin <<" Liter" <<endl;
	cout<<"Tempat B - Tempat C = " <<C <<" Km | Rp. " <<Charga <<" | " <<Cbensin <<" Liter" <<endl;
	cout<<"Tempat C - Tempat D = " <<D <<" Km | Rp. " <<Dharga <<" | " <<Dbensin <<" Liter" <<endl;
	
	cout<<"Total Jarak  =  " << Tjarak <<" Km" <<endl;
	cout<<"Total Harga  =  " <<"Rp. " <<Tharga <<endl;
	cout<<"Total Bensin =  " <<Tbensin <<" Liter" <<endl;
}

main(){
	perjalananSales(2, 5, 1.5, 2.5);
	return 0;
}