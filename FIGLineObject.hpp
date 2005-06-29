#ifndef H_FIGLineObject
#define H_FIGLineObject
//---------------------------------------------------------------------------
/*
   Copyright (C) 2005 Thomas Neumann

   This program is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by the
   Free Software Foundation version 2.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.  */
//---------------------------------------------------------------------------
#include "FIGObject.hpp"
//---------------------------------------------------------------------------
struct FIGLineObject : public FIGObject
{
   LineStyle linestyle;
   int linethickness;
   int pencolor;
   int fillcolor;
   int penstyle;
   int areafill;
   int stylevalue;

   protected:
   /// Read the default attributes
   void read(FIGLexer& in,FIGFile& file);
};
//---------------------------------------------------------------------------
#endif

