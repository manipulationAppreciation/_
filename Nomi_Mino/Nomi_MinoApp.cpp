/***************************************************************
 * Name:      Nomi_MinoApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Nomi Mino (manipulation.appreciation@gmail.com)
 * Created:   2022-07-31
 * Copyright: Nomi Mino (https://sandstromsimpa.wixsite.com/simonsandstromnordin)
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "Nomi_MinoApp.h"

//(*AppHeaders
#include "Nomi_MinoMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(Nomi_MinoApp);

bool Nomi_MinoApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	Nomi_MinoFrame* Frame = new Nomi_MinoFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
