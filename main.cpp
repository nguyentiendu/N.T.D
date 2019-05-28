#include "InforKhach.h"
#include "InforHang_Hoa.h"
#include "InforNV.h"
#include <iostream>
using namespace std;
int main()
{
	InforKhach A("Cuong", 2000, "Ha Dong", "001", "002",20);
	InforKhach B("Son", 2000, "Ba Vi", "002", "003",30);
	InforNV C("Quan", 2000, "Ha Noi", "000", "000");
	InforNV D("Du", 2000, "Ha Noi", "000", "000");
	InforHangHoa E("rau", 20, 5000);
	InforHangHoa F("thit", 6, 12000);
	A.Print();
	B.Print();
	C.Print();
	D.Print();
	E.Print();
	F.Print();
	return 0;
}