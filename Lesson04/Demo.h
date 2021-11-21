#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBOf, VAOf, EBOf, texturef, VBOb, VAOb, EBOb, textureb, VBOr, VAOr, EBOr, texturer,
		 VBOl, VAOl, EBOl, texturel, VBOu, VAOu, EBOu, textureu, VBOd, VAOd, EBOd, textured, VBO2, VAO2, EBO2, texture2, 
		stexturef, stextureb, stexturer, stexturel, stextureu, stextured, stexture2;
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy, angle=0;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow *window);
	void BuildDepan();
	void BuildBelakang();
	void BuildKanan();
	void BuildKiri();
	void BuildAtas();
	void BuildBawah();
	void BuildColoredPlane();
	void DrawDepan();
	void DrawBelakang();
	void DrawKanan();
	void DrawKiri();
	void DrawAtas();
	void DrawBawah();
	void DrawColoredPlane();
	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();
};

