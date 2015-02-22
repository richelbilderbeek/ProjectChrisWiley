//---------------------------------------------------------------------------
/*
  The Chris Wiley Project, simulation on mixed-pair mating
  Copyright (C) 2009  Richel Bilderbeek

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
//---------------------------------------------------------------------------
// From http://www.richelbilderbeek.nl
//---------------------------------------------------------------------------
#ifndef UnitAboutBox2H
#define UnitAboutBox2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TFormAboutBox2 : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        TStaticText *StaticText1;
        TStaticText *StaticText2;
  TStaticText *StaticText3;
private:	// User declarations
public:		// User declarations
        __fastcall TFormAboutBox2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormAboutBox2 *FormAboutBox2;
//---------------------------------------------------------------------------
#endif