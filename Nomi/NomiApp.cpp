/***************************************************************
 * Name:      NomiApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Nomi Mino (manipulation.appreciation@gmail.com)
 * Created:   2022-07-31
 * Copyright: Nomi Mino (https://sandstromsimpa.wixsite.com/simonsandstromnordin)
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "NomiApp.h"

//(*AppHeaders
#include "NomiMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(NomiApp);

bool NomiApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	NomiFrame* Frame = new NomiFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
