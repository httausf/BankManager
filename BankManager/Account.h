#pragma once
#include<string>
class CAccount
{
public:

	CAccount();
	~CAccount();
private:
	//账号
	int account[10];
	//名字，身份证号码，单位，电话，地址
	std::string name,
		id,
		unit,
		phone,
		address;
	//账户余额
	double balance;
};