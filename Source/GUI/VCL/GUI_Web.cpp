// GUI_Web - Web page display
// Copyright (C) 2002-2012 MediaArea.net SARL, Info@MediaArea.net
//
// This program is free software: you can redistribute it and/or modify it
// under the terms of the GNU Library General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU Library General Public License for more details.
//
// You should have received a copy of the GNU Library General Public License
// along with this program. If not, see <http://www.gnu.org/licenses/>.
//
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//---------------------------------------------------------------------------
// Compilation condition
#ifndef MEDIAINFOGUI_UPDATE_NO
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "GUI_Web.h"
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
#pragma resource "*.dfm"
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
#include "Common/Preferences.h"
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
TWebF *WebF;
//---------------------------------------------------------------------------

//***************************************************************************
// Constructor/Destructor
//***************************************************************************

//---------------------------------------------------------------------------
__fastcall TWebF::TWebF(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TWebF::Execute()
{
    Show();
    Browser->Navigate((UnicodeString(L"http://mediainfo.sourceforge.net/Log?Name=MediaInfoGUI&Version=")+MediaInfo_Version_GUI+L"&Lib="+MediaInfo_Version_GUI).w_str());
}
//---------------------------------------------------------------------------
void __fastcall TWebF::BrowserNavigateComplete2(TObject *Sender,
      LPDISPATCH pDisp, Variant *URL)
{
    Hide();
}

//***************************************************************************
// C++
//***************************************************************************

#endif //MEDIAINFOGUI_UPDATE_NO
