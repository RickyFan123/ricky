#include "StdAfx.h"
#include "CodeGroup.h"
#include <iostream>
using std::cout;
using std::endl;
CCodeGroup::CCodeGroup(void)
{
}
CCodeGroup::~CCodeGroup(void)
{
}
void CCodeGroup::Find()
{
	cout << "找到微信组..." << endl;
}
void CCodeGroup::Add()
{
	cout << "部长要求增加一项功能..." << endl;
}
void CCodeGroup::Delete()
{
	cout << "部长要求删除一项功能..." << endl;
}
void CCodeGroup::Change()
{
	cout << "部长要求修改一项功能..." << endl;
}
void CCodeGroup::Plan()
{
	cout << "部长要求代码变更计划..." << endl;
}