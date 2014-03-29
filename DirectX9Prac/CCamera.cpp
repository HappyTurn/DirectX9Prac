#pragma once

#pragma comment( lib, "d3d9.lib" )
#pragma comment( lib, "d3dx9.lib" )

#include "CCamera.h"

CCamera::CCamera() {
	CDirectXLib();
}