#pragma once


/*��*/
//ɾ��ָ��
#define MySafeDelete(p)	\
if((p)){	\
delete (p); (p) = nullptr;	\
}

//�ṹ��תPBYTE
template<typename T>
inline std::shared_ptr<BYTE> MyStructToPBYTE(const T& var) {
	PBYTE pBuf = new BYTE[sizeof(T)];
	memcpy(pBuf, &var, sizeof(T));

	return std::shared_ptr<BYTE>(pBuf);
}


//��ȡ����·��
CString MyGetExePath();
//ʹ��ϵͳ����
LRESULT EnableWindowTheme(HWND hwnd, LPCWSTR classList, LPCWSTR subApp, LPCWSTR idlist);
//�ָ��ַ���
void SplitString(CString& line, TCHAR ch, std::vector<CString>& vec);
void SplitString(std::string& line, char ch, std::vector<std::string>& vec);

