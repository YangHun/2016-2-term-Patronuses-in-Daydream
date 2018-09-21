#pragma once

#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include <gl/glut.h>
#include <gl/glext.h>


extern float g_Zoom;				// view zoom
extern float g_Rotate[3];		// x,y
extern float g_Translate[3];		// x,y

class ScreenCapture
{
public:
	ScreenCapture(void);
	~ScreenCapture(void);

	//Description ���� ���� ���� ���� : ���� ��¥ �� �ð� �޾ƿ��� ����
	struct tm	today;
	char		*m_strToday;
	char		*m_strCurrentTime;
	char		*m_strCaptureFile;
	char		*m_strExportFile;

	//Capture Index
	int			m_nCaptureIndx;
	int			m_nExportIdx;

public:
	void CreateFolder();
	
	void BeginCapture();
	void ReleaseMemory();

};
