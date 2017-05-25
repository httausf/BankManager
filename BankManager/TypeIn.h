#pragma once
#include<string>
/* 工具类-合法性检查 */
class CTypeIn
{
public:
	//对输入的string进行合法性检查
	std::string name(const std::string&);
	std::string id(const std::string&);
	std::string unit(const std::string&);
	std::string phone(const std::string&);
	std::string address(const std::string&);
	//
	CTypeIn();
	~CTypeIn();
private:
	//判断char是否为数字
	bool isNumber(const char&);
	//判断char是否为字母
	bool isCharacter(const char&);
};

