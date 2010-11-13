(*
  $Id: dynamicArray.inc 13585 2009-08-23 13:57:45Z Legolas $
  ------------------------------------------------------------------------------
  	Copyright (C) 2005
  		Jason Rogers (dovoto)
  		Dave Murphy (WinterMute)
  	
  	This software is provided 'as-is', without any express or implied
  	warranty.  In no event will the authors be held liable for any
  	damages arising from the use of this software.
  	
  	Permission is granted to anyone to use this software for any
  	purpose, including commercial applications, and to alter it and
  	redistribute it freely, subject to the following restrictions:
  	
  	1.	The origin of this software must not be misrepresented; you
  		must not claim that you wrote the original software. If you use
  		this software in a product, an acknowledgment in the product
  		documentation would be appreciated but is not required.
  	
  	2.	Altered source versions must be plainly marked as such, and
  		must not be misrepresented as being the original software.
  	
  	3.	This notice may not be removed or altered from any source
  		distribution.
  ------------------------------------------------------------------------------
    
    
  Conversion by Legolas (http://itaprogaming.free.fr) for freepascal compiler
  (http://www.freepascal.org)
   
  Copyright (C) 2006  Francesco Lombardi
  Check http://sourceforge.net/projects/libndsfpc for updates
   
  ------------------------------------------------------------------------------

  $Log$

*)

{$ifdef NDS_INTERFACE}
type
  DynamicArray = record 
    data: ppointer;  // pointer to array of void pointers
    cur_size: cuint; // currently allocated size of the array 
  end;
  TDynamicArray = DynamicArray;
  PDynamicArray = ^TDynamicArray;


function DynamicArrayInit(v: PDynamicArray; initialSize: cuint): pointer; cdecl; external;
procedure DynamicArrayDelete(v: PDynamicArray); cdecl; external;
function DynamicArrayGet(v: PDynamicArray; index: cuint): pointer; cdecl; external;
function DynamicArraySet(v: PDynamicArray; index: cuint; item: pointer): cbool; cdecl; external;
{$endif NDS_INTERFACE}
