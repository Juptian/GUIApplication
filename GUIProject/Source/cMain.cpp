#include "../Headers/cMain.h"
#include <wx/sizer.h>

//Binding the button click to the callback
wxBEGIN_EVENT_TABLE(cMain, wxFrame)
	EVT_BUTTON(10001, OnButtonClicked)
wxEND_EVENT_TABLE()
/**
* @param nullptr window Parent pointer
* @param wxID_ANY ID of the window
* @param "Test" Title of the window
* @param wxPoint Where the window is situated
* @param wxSize size of the window
*/
cMain::cMain() : wxFrame(nullptr, 10001, "Test", wxPoint(30, 30), wxSize(800, 600))
{
	m_btn1 = new wxButton(this, 10001, "Click me", wxPoint(10, 10), wxSize(150, 50));
	m_txt1 = new wxTextCtrl(this, 10001, "", wxPoint(10, 70), wxSize(300, 30));
	m_list1 = new wxListBox(this, 10001, wxPoint(10, 110), wxSize(300, 300));

	wxGridSizer* grid = new wxGridSizer(100, 100, 0, 0);
	grid->Add(this, wxSHAPED);
	this->SetSizer(grid);
	grid->Layout();
}
cMain::~cMain()
{
	
}

void cMain::OnButtonClicked(wxCommandEvent& event)
{
	m_list1->AppendString(m_txt1->GetValue());
	event.Skip();
}