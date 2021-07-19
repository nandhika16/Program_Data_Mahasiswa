#include <iostream>
#include <stdio.h>
using namespace std;
	
	//Mari kita belajar bahasa pemrograman C++
	//Program Input Data Mahasiswa
	// Nandhika Pratama Artana

int main()
{
    char nama[50],alamat[100],npm[10],fakultas[15],prodi[20],namaorangtua[20];
    
    cout<<"\t\t==============================================\n";
    cout<<"\t\t\t\tPROGRAM SEDERHANA\n \t\t\t   MENGINPUTKAN DATA MAHASISWA\n";
	cout<<"\t\t==============================================\n";
	
    cout<<"Masukan Nama Lengkap Mahasiswa = ";
    gets(nama);

    cout<<"Masukan NPM = ";
    gets(npm);

    cout<<"Masukan Alamat = ";
    gets(alamat);
    
    cout<<"Masukan Fakultas  = ";
    gets(fakultas);
    
    cout<<"Masukan Prodi yang Dipilih Mahasiswa = ";
    gets(prodi);
    
    cout<<"Masukan Nama Orang Tua  = ";
    gets(namaorangtua);
    cout<<endl<<endl;


    cout<<". : Biodata Mahasiswa : .";
    cout<<endl;

    cout<<"Nama  	 	: "<<nama;
    cout<<endl;

    cout<<"NPM   	 	: "<<npm;
    cout<<endl;

    cout<<"Alamat   	: "<<alamat;
    cout<<endl;
    
    cout<<"Fakultas 	: "<<fakultas;
    cout<<endl;
    
    cout<<"Prodi	 	: "<<prodi;
    cout<<endl;
    
    cout<<"Nama orang tua  : "<<namaorangtua;
    cout<<endl;

}
