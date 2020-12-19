#include "../Headers/cApp.h"

wxIMPLEMENT_APP(cApp);

cApp::cApp()
{

}

cApp::~cApp()
{
	delete m_frame1;
}

bool cApp::OnInit()
{
	m_frame1 = new cMain();
	m_frame1->Show();
	return true;
}