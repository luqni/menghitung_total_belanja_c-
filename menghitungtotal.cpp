#include <iostream>
using namespace std;

int main()
{
	char nama[20];
	string namabarang, pil, diskon;
	double jumlah, harga, total, potongan, bayar;
	
	do{
		cout<<"Program Menghitung total Pembayaran\n" ;
		cout<<"Masukkan nama Pembeli : ";cin>>nama;
		cout<<"### Masukkan Data Barang ###\n";
		cout<<"Nama Barang (masukan tanpa spasi): ";cin>>namabarang;
		cout<<"Jumlah : ";cin>>jumlah;
		cout<<"Harga : ";cin>>harga;
		cout<<"###################\n";
		
		total = harga*jumlah;
		
		if (total >= 1500000)
		{
			diskon = "5%";
			potongan = total * 0.05;
		}
		else if (total >= 1000000)
		{
			diskon = "3%";
			potongan = total * 0.03;
		}
		else if (total >= 500000)
		{
			diskon = "1,5%";
			potongan = total * 0.03;
		}
		else
		{
			potongan = total;
		}
		
		bayar = total - potongan;
		
		cout<<"Nama Pembeli : "<<nama<<endl;
		cout<<"Membeli : "<<namabarang<<endl;
		cout<<"Dengan Harga : "<<harga<<endl;
		cout<<"Dengan Jumlah : "<<jumlah<<endl;
		cout<<"Total Harga : "<<total<<endl;
		cout<<"Mendapkan diskon : "<<diskon<<" nilai potongan "<<potongan<<endl;
		cout<<"jumlah bayar (total - potongan) : "<<bayar<<endl;
		cout<<"Apakah anda ingin memproses lagi ? [y/n] : ";cin>>pil;
	}while (pil=="y" || pil=="Y");
	cout<<"Terima kasih\n";
	return 0;
}
