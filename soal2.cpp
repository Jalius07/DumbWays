#include<iostream>
#include<string>
using namespace std;
int main(){
    //Create a structure to hold the data:
    string data[] = {
		"Pagi itu sangatlah cerah, mentari pagi muncul memancarkan sinar cerah dengan semangat 67 eh semangat 45 maksudnya",
		"Sama denganku, hari ini adalah hari ulang tahun orang yang sangat aku kagumi bahkan kucintai",
		"Semua sudah aku persiapkan termasuk kue ultah serta kadonya",
		"Aku masuk ke kelas dengan hati gembira dan bibir tersenyum-senyum sendiri"
		"Kakiku melangkah tepat di depan pintu masuk kelas dan disambut ceria oleh sahabat sahabatku Syarif dan Renata.",
		"Yaps! Aku hampir lupa, aku Sherly kepanjangan dari Sherlyna rantika putri",
		"Cewek manis berkumis tipis yang kini sedang dilanda asmara cinta."};


    //loop through all the items and print them if they match
    string matchString1 = "Aku";
    string matchString2 = "aku";
    for(int x = 0; x < 6; x++){
		int i=0;
        if (data[x].find(matchString1, 0) != std::string::npos){
			i++;
        }
		if (data[x].find(matchString2, 0) != std::string::npos){
			i++;
		}
		
		if(i!=0){
			cout<<"Result " <<x <<": kalimat aku muncul " <<i <<" kali pada index " <<x <<endl;
		}
    }
}