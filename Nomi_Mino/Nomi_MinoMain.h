/***************************************************************
 * Name:      Nomi_MinoMain.h
 * Purpose:   Defines Application Frame
 * Author:    Nomi Mino (manipulation.appreciation@gmail.com)
 * Created:   2022-07-31
 * Copyright: Nomi Mino (https://sandstromsimpa.wixsite.com/simonsandstromnordin)
 * License:
 **************************************************************/

#ifndef NOMI_MINOMAIN_H
#define NOMI_MINOMAIN_H

//(*Headers(Nomi_MinoFrame)
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
//*)

class Nomi_MinoFrame: public wxFrame
{
    public:

        Nomi_MinoFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~Nomi_MinoFrame();

    private:

        //(*Handlers(Nomi_MinoFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(Nomi_MinoFrame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(Nomi_MinoFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // NOMI_MINOMAIN_H
