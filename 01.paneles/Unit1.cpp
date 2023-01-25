

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"

#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;

__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	// modificacion del constructor
	Panel1->Visible = true;
	Panel2->Visible = false;
	Panel3->Visible = false;
}

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	// panel1 boton siguiente
	Panel1->Visible = false;
	Panel2->Visible = true;
}

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	// panel2 boton siguiente
	Panel3->Visible = true;
	Panel2->Visible = false;
}

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	// panel2 boton anterior
	Panel2->Visible = false;
	Panel1->Visible = true;
}

void __fastcall TForm1::Button4Click(TObject *Sender)
{
	// panel3 boton anterior
	Panel2->Visible = true;
	Panel3->Visible = false;
}

void __fastcall TForm1::Button5Click(TObject *Sender)
{
    // panel3 boton salir
	Application->Terminate();
}





