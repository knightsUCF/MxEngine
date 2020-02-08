#pragma once

#include <string>

#include <GLEW/glew.h>
#include <GLFW/glfw3.h>

namespace MxEngine
{
#define ASSERT(x) if(!(x)) __debugbreak(); 

    #ifdef _DEBUG
    #define GLCALL(x) GlClearErrors(); x; GlLogCall(#x, __FILE__, __LINE__)
    #else
    #define GLCALL(x) x
    #endif

	void GlClearErrors();

	bool GlLogCall(const char* function, const char* file, int line);

	unsigned int GetGLTypeSize(unsigned int type);

	template<typename T>
	std::string TypeToString();

	template<typename T>
	unsigned int GetGLType();

	std::string ReadFile(const std::string& filename);
}