// operator.cpp : 定义控制台应用程序的入口点。
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
	cout << feet << "英尺" << inches << "英寸" << endl;
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
	C = A + B; //有CFeet CFeet::operator+(CFeet & objf)的时候才能用c=a+b ，有CFeet CFeet::add(CFeet & objf)时用c=a.add(b)
	C.display();
    return 0;
}

