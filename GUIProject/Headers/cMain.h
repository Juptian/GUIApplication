#pragma once

#include "wx/wx.h"

class cMain : public wxFrame
{
public:
	wxButton* m_btn1 = nullptr;
	wxTextCtrl* m_txt1 = nullptr;
	wxListBox* m_list1 = nullptr;
public:
	cMain();
	~cMain();

	void OnButtonClicked(wxCommandEvent& event);

	wxDECLARE_EVENT_TABLE();
};

