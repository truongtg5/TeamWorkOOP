#include<iostream>
#include<conio.h>

using namespace std;


class SinhVien
    {
	private:
	public:
		char HoTen[30];
		char MSSV[8];
		float Dtb;
		
		friend istream &operator>>(istream &is,SinhVien &sv);
		friend ostream &operator<<(ostream &os,SinhVien sv);
    };
istream &operator>>(istream &is,SinhVien &sv){
		cout<<"Nhap ho ten : "; 
		fflush(stdin); 
		is>>sv.HoTen;
		fflush(stdin); 
		cout<<"Ma so sv : ";
		is>>sv.MSSV;
		cout<<"Diem trung binh : ";
		is>>sv.Dtb;
	return is;
    }
ostream &operator<<(ostream &os,SinhVien sv)
    {
		os<<sv.HoTen<<"\n"<<sv.MSSV<<"\n"<<sv.Dtb;
	return os;
    }
 main(){
        SinhVien a;
        cin>>a;
        cout<<a; 
        getch();
    }
