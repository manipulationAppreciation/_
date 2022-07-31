/***************************************************************
 * Name:      NomiMain.h
 * Purpose:   Defines Application Frame
 * Author:    Nomi Mino (manipulation.appreciation@gmail.com)
 * Created:   2022-07-31
 * Copyright: Nomi Mino (https://sandstromsimpa.wixsite.com/simonsandstromnordin)
 * License:
 **************************************************************/

#ifndef NOMIMAIN_H
#define NOMIMAIN_H

//(*Headers(NomiFrame)
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
//*)

class NomiFrame: public wxFrame
{
    public:

        NomiFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~NomiFrame();

    private:

        //(*Handlers(NomiFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        //*)

        //(*Identifiers(NomiFrame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(NomiFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // NOMIMAIN_H
