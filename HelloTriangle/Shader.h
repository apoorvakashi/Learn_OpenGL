#pragma once

#include <glad/glad.h>
#include <iostream>


#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader {
public:

	unsigned int ID;

	Shader(const char* vertexShaderSource, const char* fragmentShaderSource);

	void use();

	void setBool(const std::string& name, bool value) const;
	void setInt(const std::string& name, int value) const;
	void setFloat(const std::string& name, float value) const;

};