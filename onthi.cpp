#include <iostream>
using namespace std ;

class PhanSo{
public:
	int ts, ms ;
};

void nhap1ps(PhanSo &ps , int n)
{
	ps.ts = 1;
	for (int i=2; i<=n; i++){
		ps.ms = i; 
		cout<<ps.ts<<" "<<ps.ms<<endl;
	}
}

int UCLN(int a, int b)
{
	if(b == 0)
		return a ;
	else
		return UCLN(b, a % b) ;
}

void rutGon(PhanSo &ps)
{
	int UC = UCLN(ps.ts, ps.ms) ;
	ps.ts = ps.ts / UC ;
	ps.ms = ps.ms / UC ;
}

PhanSo tong2ps(PhanSo ps1, PhanSo ps2)
{
	PhanSo kq ;
	kq.ts = ps1.ts * ps2.ms + ps2.ts * ps1.ms ;
	kq.ms = ps1.ms * ps2.ms ;
	return kq ;
}

PhanSo tong(PhanSo *ps, int n)
{
	PhanSo kq = *ps;
	for(int i = 1; i < (n-1); i++)
	{
		kq = tong2ps(kq, *(ps + i));
	}
	rutGon(kq);
	return kq;
}

int main()
{
	int n;
	PhanSo *ps;
	cin >> n;
	ps = new PhanSo[n];
	nhap1ps(*ps, n);
	cout << "Tong cua cac phan so la: " << tong(ps, n).ts << " / " << tong(ps, n).ms << endl ;
	delete []ps ;
	ps = nullptr ;
	return 0 ;
}