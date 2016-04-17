// Practice_12_1_6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "StrBlob.h"
#include "StrBlobPtr.h"




int _tmain(int argc, _TCHAR* argv[])
{
	StrBlob a({"abceedffafa"});
	StrBlobPtr b(a, 0);
	return 0;
}

