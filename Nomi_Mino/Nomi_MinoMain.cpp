/***************************************************************
 * Name:      Nomi_MinoMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Nomi Mino (manipulation.appreciation@gmail.com)
 * Created:   2022-07-31
 * Copyright: Nomi Mino (https://sandstromsimpa.wixsite.com/simonsandstromnordin)
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "Nomi_MinoMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(Nomi_MinoFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(Nomi_MinoFrame)
const long Nomi_MinoFrame::ID_STATICTEXT1 = wxNewId();
const long Nomi_MinoFrame::ID_BUTTON1 = wxNewId();
const long Nomi_MinoFrame::idMenuQuit = wxNewId();
const long Nomi_MinoFrame::idMenuAbout = wxNewId();
const long Nomi_MinoFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Nomi_MinoFrame,wxFrame)
    //(*EventTable(Nomi_MinoFrame)
    //*)
END_EVENT_TABLE()

Nomi_MinoFrame::Nomi_MinoFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(Nomi_MinoFrame)
    wxBoxSizer* BoxSizer1;
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    BoxSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button1 = new wxButton(this, ID_BUTTON1, _("Hello World!"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    BoxSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(BoxSizer1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Nomi_MinoFrame::OnButton1Click);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Nomi_MinoFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Nomi_MinoFrame::OnAbout);
    Connect(wxID_ANY,wxEVT_CLOSE_WINDOW,(wxObjectEventFunction)&Nomi_MinoFrame::OnClose);
    //*)
}

Nomi_MinoFrame::~Nomi_MinoFrame()
{
    //(*Destroy(Nomi_MinoFrame)
    //*)
}

void Nomi_MinoFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void Nomi_MinoFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void Nomi_MinoFrame::OnClose(wxCloseEvent& event)
{
}

void Nomi_MinoFrame::OnButton1Click(wxCommandEvent& event)
{
}
