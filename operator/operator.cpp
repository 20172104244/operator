// operator.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
private:
	int feet;
	int inches;
public:
	void setvalue(int ft, int in);
	void display();
	CFeet add(CFeet & objf);
	CFeet operator+(CFeet & objf);
};
void CFeet::setvalue(int ft, int in)
{
	feet = ft + in / 12;
	inches = in % 12;
}
void CFeet::display()
{
	cout << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CFeet CFeet::add(CFeet & objf)
{
	CFeet temp;
	temp.setvalue(feet + objf.feet, inches + objf.inches);
	return temp;
}
CFeet CFeet::operator+(CFeet & objf)
{
	CFeet temp;
	temp.setvalue(feet + objf.feet, inches + objf.inches);
	return temp;
}
int main()
{
	CFeet A, B, C;
	A.setvalue(10,11 );
	B.setvalue(6,9 );
	C = A + B; //��CFeet CFeet::operator+(CFeet & objf)��ʱ�������c=a+b ����CFeet CFeet::add(CFeet & objf)ʱ��c=a.add(b)
	C.display();
    return 0;
}

