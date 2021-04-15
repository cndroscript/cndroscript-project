#include <iostream>
#include <fstream>
#include <uchar.h>
#include <Windows.h>


int main(void)
{
	char* abc;
	char* abc1;
	char* vbe;
	char* vbe1;
	char c1;
	char c;
	char c2;
	char c3;
	char c4;
	char d[111];
	char d1[111];
	char d2[111];
	char d3[111];
	char d4[111];
	char cv1;
	char c11;
	char c21;
	char c31;
	char c41;
	char dv1[111];
	char d11[111];
	char d21[111];
	char d31[111];
	char d41[111];
	_wmkdir(L"C:/es/variable");
	_wmkdir(L"C:/es/variable/integer");
	_wmkdir(L"C:/es/variable/integer/int");
	std::ifstream ifs("C:/es/main.est", std::ios::binary);
	ifs >> c >> c1 >> c2 >> c3 >> c4 >> d >> d1 >> d2 >> d3 >> d4 >> cv1 >> c11 >> c21 >> c31 >> c41 >> dv1 >> d11 >> d21 >> d31 >> d41;
	ifs.close();
	//print
	if (c == 112)
	{
		if (c1 == 114)
		{
			if (c2 == 105)
			{
				if (c3 == 110)
				{
					if (c4 == 116)
					{
						std::cout << d << " " << d1 << " " << d2 << " " << d3 << " " << d4;
						Sleep(3000);
					}
				}
			}
		}
	}
	if (cv1 == 112)
	{
		if (c11 == 114)
		{
			if (c21 == 105)
			{
				if (c31 == 110)
				{
					if (c41 == 116)
					{
						std::cout << dv1 << " " << d11 << " " << d21 << " " << d31 << " " << d41;
						Sleep(3000);
					}
				}
			}
		}
	}
	//intby
	if (c == 105)
	{
		if (c1 == 110)
		{
			if (c2 == 116)
			{
				if (c3 == 98)
				{
					if (c4 == 121)
					{
						vbe = d;
						abc = d2;

						std::cout << abc;
						std::cout << vbe;

						std::ofstream intby("C:/es/variable/integer/int/intby.csLog", std::ios::binary);
						intby << vbe << " " << abc;
						intby.close();
						Sleep(3000);
					}
				}
			}
		}
	}
	if (cv1 == 105)
	{
		if (c11 == 110)
		{
			if (c21 == 116)
			{
				if (c31 == 98)
				{
					if (c41 == 121)
					{
						vbe1 = dv1;
						abc1 = d21;

						std::cout << abc1;
						std::cout << vbe1;

						std::ofstream intby1("C:/es/variable/integer/int/intby1.csLog", std::ios::binary);
						intby1 << vbe1 << " " << abc1;
						intby1.close();
						Sleep(3000);
					}
				}
			}
		}
	}
	int ss = 111;
	printf("ddd");
}
//비주얼 스튜디오 코드 색
//비주얼 스튜디오 코드 
