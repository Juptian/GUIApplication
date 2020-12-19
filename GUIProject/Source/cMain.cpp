#include "../Headers/cMain.h"

/**
* @param nullptr window Parent pointer
* @param wxID_ANY ID of the window
* @param "Test" Title of the window
* @param wxPoint Where the window is situated
* @param wxSize size of the window
*/
cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Test", wxPoint(30, 30), wxSize(800, 600))
{
	m_btn1 = new wxButton(this, wxID_ANY, "Click me", wxPoint(10, 10), wxSize(150, 50));
	m_txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 70), wxSize(300, 30));
	m_list1 = new wxListBox(this, wxID_ANY, wxPoint(10, 110), wxSize(300, 300));
}
cMain::~cMain()
{
	delete m_btn1;
	delete m_txt1;
	delete m_list1;
}