#pragma once
#include <GLFW/glfw3.h>
#include <GL/glew.h>
#include <glm/glm.hpp>

static const GLfloat g_vertex_buffer_data[] = {
   -1.0f, -1.0f, 0.0f,
   1.0f, -1.0f, 0.0f,
   0.0f,  1.0f, 0.0f,
};

glVertexAttribPointer(
   0,                  
   3,                  
   GL_FLOAT,           
   GL_FALSE,         
   0,                 
   (void*)0          
);