#pragma once

#include "Graphics.h"

namespace Resources {
	extern Graphics::MyGeometry aventadorBody, aventadorBodyGlow, aventadorUnder, aventadorWheel, aventadorWheelGlow;
	extern Graphics::MyGeometry plane, cube, centeredCube;
	extern Graphics::MyShader standardShader;

	void init();

	extern Graphics::Material defaultMaterial;
	extern Graphics::Material darkGreyMaterial;
	extern Graphics::Material emmisiveMaterial;
	extern Graphics::Material pureBlackMaterial;
}