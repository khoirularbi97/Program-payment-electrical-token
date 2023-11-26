#include <iostream>//deklarasi compiler input dan output
#include <conio.h>// untuk menampilkan fungsi getche ()

using namespace std;//untuk menyajikan semua data program yang di tulis

int main() {//main program yang ber tipe integer
	
	int jumisi,nominal[10];//variabel bertipe data integer
	char ulang;//variable bertipe data char atau satu karakter
	string idpel[20];//variable yang bertipe data string (urutan karakter)
	double harga[10],total,bayar,kembalian,rpdiskon,ttlbayar;//variable yang bertipe data double (decimal)
	const string diskon = "5%";//variable bertipe data konstanta string
	do{
		cout<<"============================================================================="<<endl;//hanya untuk membatasi
		cout<<"===================<<<  WARUNG PEMBELIAN TOKEN LISTRIK  >>>=================="<<endl;//mencetak kata dalam program
		cout<<"============================================================================="<<endl;//hanya untuk membatasi
		cout<<"(by.Khoirul Arbi)\n";//mencetak kata dalam program
		cout<<endl;//hanya untuk membatasi
		cout<<endl;//hanya untuk membatasi
		cout<<"Masukan Jumlah Pengisian   :";cin>>jumisi;//masukan jumlah input pengisian
		
		for(int i=0;i<jumisi;i++){//perulangan untuk jumlah pengisian
			cout<<i+1<<". ID PELANGGAN Ke-"<<i+1<<endl;//mampilkan urutan pengisian
			cout<<"    Masukan ID PELANGGAN   :";cin>>idpel[i];//inputan id pelanggan
			cout<<"========================================="<<endl;//hanya untuk membatasi
			cout<<"|  NOMINAL          |          KODE      |"<<endl;//mencetak kata dalam program
			cout<<"========================================="<<endl;//hanya untuk membatasi
			cout<<"|  Rp. 20000        |            1       |"<<endl;//mencetak kata dalam program
			cout<<"|  Rp. 50000        |            2       |"<<endl;//mencetak kata dalam program
			cout<<"|  Rp. 100000       |            3       |"<<endl;//mencetak kata dalam program
			cout<<"|  Rp. 200000       |            4       |"<<endl;//mencetak kata dalam program
			cout<<"|  Rp. 500000       |            5       |"<<endl;//mencetak kata dalam program
			cout<<"========================================="<<endl;//hanya untuk membatasi
			cout<<"Pilih Nominal Token (1-5)      :    ";cin>>nominal[i];//inputan nominal pembelian
			cout<<endl;//hanya untuk membatasi
			cout<<endl;//hanya untuk membatasi
			
		
		switch (nominal[i]){//switch kondisional statement untuk nominal pembelian
		case 1 ://jika yang di input angka 1 
			harga[i]=20000;//nilai harganya 
			break;
		case 2://jika yang di input angka 2 
			harga[i]=50000;//nilai harganya 
			break;
		case 3 ://jika yang di input angka 3
			harga[i]=100000;//nilai harganya
			break;
		case 4 ://jika yang di input angka 4 
			harga[i]=200000;//nilai harganya
			break;
		case 5 ://jika yang di input angka 5
			harga[i]=500000;//nilai harganya
			break;
		default ://statement default
			harga[i]=0;//harga sama dengan 0
	}
	total=total+harga[i];//operator penjumlahan harga total
	if (total>200000){ //kondisional statement untuk diskon jika pembelian lebih dari 200000
		rpdiskon=0.05*total;//operator perkalian diskon
		ttlbayar=total-rpdiskon;//operator penjumlahan total bayar
		
	}else{//jika tidak maka tidak ada diskon
		rpdiskon=0;//set diskon sama dengan 0
		ttlbayar=total-rpdiskon;//operator penjumlahan total bayar
	}
		
		
	
	}
	cout<<"\tBANYAK PEMBELIAN     = "<<jumisi<<endl; //untuk menampilkan jumlah pembelian
	for(int i=0;i<jumisi;i++){//perulangan untuk menampilkan ID pelanggan yang di input
		cout<<"\tID PELANGGAN  "<<"Ke- "<<i+1<<"  = "<<idpel[i];//menampilkan ID pelanggan 
		cout<<endl;//hanya untuk membatasi
}
		cout<<" =============================================="<<endl;//hanya untuk membatasi
		printf("\tTOTAL           : Rp. %.2f \n",total);//menampilkan harga total	
		printf("\tDISKON          : Rp. %.2f ",rpdiskon);cout<<diskon<<endl;//menampilkan diskon
		printf("\tTOTAL BAYAR     : Rp. %.2f \n",ttlbayar);//menampilkan total yang harus di bayar
		cout<<"\tDIBAYAR         : RP. ";cin>>bayar;//inputan nominal pembayaran
		kembalian=bayar-ttlbayar;//operator menghitung kembalian
		printf("\tKEMBALIAN       : Rp. %.2f \n",kembalian);//menampilkan nominal kembalian	
		cout<<" =============================================="<<endl;//hanya untuk membatasi
		cout<<endl;//hanya untuk membatasi
		cout<<"Ingin mengulang lagi(Y/T)    :   ";cin>>ulang;//inputan karakter huruf untuk memilih ulang atau selesai
}while (ulang=='Y'||ulang=='y');//untuk mengulang program dari awal

getch();//berfungsi untuk membaca sebuah karakter dengan sifat karakter yang dimasukkan tidak perlu diakhiri dengan menekan tombol ENTER, dan karakter yang dimasukan ditampilkan di layar.
}


