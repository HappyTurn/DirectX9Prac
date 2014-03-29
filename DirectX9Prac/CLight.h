#pragma once

#pragma comment( lib, "d3d9.lib" )
#pragma comment( lib, "d3dx9.lib" )

#include <d3dx9.h>
#include <windows.h>
#include <iostream>

LPDIRECT3DDEVICE9 GetDevice(void);
void printMessage(char* str);

class CLight {
	
public:
	CLight();
	~CLight();
	void light();
	void setLightType(D3DLIGHTTYPE type);
	void updateDir(D3DXVECTOR3 vec);
	void setDir(D3DXVECTOR3 vec);
	void setRange(float range);
	void turnOn();
	void turnOff();
	
private:
	D3DXVECTOR3 _dir;
	D3DLIGHT9 _light;
	D3DLIGHTTYPE _type;
	LPDIRECT3DDEVICE9 _device;
	int _id;
	bool _isLight;

	static int index;
};