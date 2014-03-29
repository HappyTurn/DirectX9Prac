#include "CDirectXLib.h"

LPDIRECT3DDEVICE9 GetDevice(void);
void printMessage(char* str);

class CCamera : public CDirectXLib {

public:
	CCamera();
	~CCamera();

private:
	D3DXVECTOR3 _location;
	D3DXVECTOR3 _lookAt;
	D3DXVECTOR3 _upDir;
};