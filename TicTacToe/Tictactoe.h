//---------------------------------------------------------------------------

#ifndef TictactoeH
#define TictactoeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TImage *pole1;
	TImage *pole2;
	TImage *pole3;
	TImage *pole4;
	TImage *pole5;
	TImage *pole6;
	TImage *pole7;
	TImage *pole8;
	TImage *pole9;
	TLabel *Label1;
	TImage *tura;
	TButton *Button1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall pole1Click(TObject *Sender);
	void __fastcall pole2Click(TObject *Sender);
	void __fastcall pole3Click(TObject *Sender);
	void __fastcall pole4Click(TObject *Sender);
	void __fastcall pole5Click(TObject *Sender);
	void __fastcall pole6Click(TObject *Sender);
	void __fastcall pole7Click(TObject *Sender);
	void __fastcall pole8Click(TObject *Sender);
	void __fastcall pole9Click(TObject *Sender);
	void __fastcall off();
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
