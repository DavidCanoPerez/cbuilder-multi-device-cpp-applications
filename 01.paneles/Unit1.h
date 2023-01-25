
#ifndef Unit1H
#define Unit1H

#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.TabControl.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>

class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TButton *Button4;
	TButton *Button5;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};

extern PACKAGE TForm1 *Form1;

#endif
