#pragma once

#ifndef __DXC_API__
#define __DXC_API__

typedef HRESULT(__stdcall *DxcCreateInstanceProc)(
	_In_ REFCLSID   rclsid,
	_In_ REFIID     riid,
	_Out_ LPVOID*   ppv
	);

const static GUID IID_IDxbcConverter = { 0x4900391E, 0xB752, 0x4EDD, { 0xA8, 0x85, 0x6F, 0xB7, 0x6E, 0x25, 0xAD, 0xDB } };

const static GUID _GUID_ecc8691b_c1db_4dc0_855e_65f6c551af49 = { 0xECC8691B, 0xC1DB, 0x4DC0, { 0x85, 0x5E, 0x65, 0xF6, 0xC5, 0x51, 0xAF, 0x49 } };// DxbcConverter
const static GUID _GUID_5f956ed5_78d1_4b15_8247_f7187614a041 = { 0x5F956ED5, 0x78D1, 0x4B15, { 0x82, 0x47, 0xF7, 0x18, 0x76, 0x14, 0xA0, 0x41 } };// ?

struct IDxbcConverter : public IUnknown
{
public:
	virtual HRESULT STDMETHODCALLTYPE Convert(LPCVOID Bytecode, UINT BytecodeLength, LPWSTR Parameters, LPVOID *DXILBytecode, UINT *DXILLength, LPWSTR *Unknown) = 0;
	virtual HRESULT STDMETHODCALLTYPE ConvertInDriver(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *) = 0;
};

#endif __DXC_API__