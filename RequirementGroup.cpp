#include "StdAfx.h"
#include "RequirementGroup.h"
#include <iostream>
using std::cout;
using std::endl;
CRequirementGroup::CRequirementGroup(void)
{
}
CRequirementGroup::~CRequirementGroup(void)
{
}
void CRequirementGroup::Find()
{
	cout << "找到部建组..." << endl;
}
void CRequirementGroup::Add()
{
	cout << "部长要求增加一项需求..." << endl;
}
void CRequirementGroup::Delete()
{
	cout << "部长删除一项需求..." << endl;
}
void CRequirementGroup::Change()
{
	cout << "部长要求修改一项需求..." << endl;
}
void CRequirementGroup::Plan()
{
	cout << "部长要求需求变更计划..." << endl;
}