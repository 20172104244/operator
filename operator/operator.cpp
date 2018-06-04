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
	void change();
	//CFeet add(CFeet & objf);
	CFeet operator-(CFeet & objf);
};
void CFeet::setvalue(int ft, int in)
{
	feet = ft ;
	inches = in ;
}

/*CFeet CFeet::add(CFeet & objf)  //objf�Ƕ�������b
{
	CFeet temp;
	temp.setvalue(feet + objf.feet, inches + objf.inches);
	return temp;
}*/
CFeet CFeet::operator-(CFeet & objf)  
{
	CFeet temp;
	if (feet > 0)
	{
		temp.setvalue(0,  (feet * 12 + inches) - (objf.feet * 12 + objf.inches));
	}
	else
	{
		temp.setvalue(0,  (feet * 12 - inches) - (objf.feet * 12 + objf.inches));
	}
	return temp;
}
void CFeet::change()
{
	if (inches < 0)
	{
		feet = inches / 12;
		inches = -inches % 12;
	}
	else
	{
		feet = inches / 12;
		inches = inches % 12;
	}
}
void CFeet::display()
{
	cout << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
int main()
{
	CFeet A, B, C;
	A.setvalue(2,3 );
	B.setvalue(1,3 );
	C = A - B; //��CFeet CFeet::operator+(CFeet & objf)��ʱ������c=a+b ����CFeet CFeet::add(CFeet & objf)ʱ��c=a.add(b)
	C.change();
	C.display();
    return 0;
}

