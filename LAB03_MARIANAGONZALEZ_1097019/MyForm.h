#pragma once
#include "Nodo.h"
#include "Carta.h"
#include "Pila.h"
#include "Juego.h"
namespace LAB03MARIANAGONZALEZ1097019 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;















	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  lblheadmazo;
	private: System::Windows::Forms::Label^  lblheadg1;
	private: System::Windows::Forms::Label^  lblheadg2;
	private: System::Windows::Forms::Label^  lblheadg3;
	private: System::Windows::Forms::Label^  lblheadg4;
	private: System::Windows::Forms::Label^  lblheadg5;
	private: System::Windows::Forms::Label^  lblheadg6;
	private: System::Windows::Forms::Label^  lblheadg7;





	private: System::Windows::Forms::Button^  btnrepartir;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton15;
	private: System::Windows::Forms::RadioButton^  radioButton14;
	private: System::Windows::Forms::RadioButton^  radioButton13;
	private: System::Windows::Forms::RadioButton^  radioButton12;
	private: System::Windows::Forms::RadioButton^  radioButton11;
	private: System::Windows::Forms::RadioButton^  radioButton10;
	private: System::Windows::Forms::RadioButton^  radioButton9;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;










	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->lblheadmazo = (gcnew System::Windows::Forms::Label());
			this->lblheadg1 = (gcnew System::Windows::Forms::Label());
			this->lblheadg2 = (gcnew System::Windows::Forms::Label());
			this->lblheadg3 = (gcnew System::Windows::Forms::Label());
			this->lblheadg4 = (gcnew System::Windows::Forms::Label());
			this->lblheadg5 = (gcnew System::Windows::Forms::Label());
			this->lblheadg6 = (gcnew System::Windows::Forms::Label());
			this->lblheadg7 = (gcnew System::Windows::Forms::Label());
			this->btnrepartir = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(62, 237);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"MAZO";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(140, 237);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"G1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(200, 237);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"G2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(262, 237);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(27, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"G3";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(325, 237);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(27, 17);
			this->label7->TabIndex = 6;
			this->label7->Text = L"G4";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(377, 237);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(27, 17);
			this->label8->TabIndex = 7;
			this->label8->Text = L"G5";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(434, 237);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 17);
			this->label9->TabIndex = 8;
			this->label9->Text = L"G6";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(494, 237);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(27, 17);
			this->label10->TabIndex = 9;
			this->label10->Text = L"G7";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(77, 270);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(16, 17);
			this->label11->TabIndex = 25;
			this->label11->Text = L"\?";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(77, 287);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(16, 17);
			this->label12->TabIndex = 26;
			this->label12->Text = L"\?";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(77, 304);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(16, 17);
			this->label13->TabIndex = 27;
			this->label13->Text = L"\?";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(77, 321);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(16, 17);
			this->label14->TabIndex = 28;
			this->label14->Text = L"\?";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(77, 338);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(16, 17);
			this->label15->TabIndex = 29;
			this->label15->Text = L"\?";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(77, 355);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(16, 17);
			this->label16->TabIndex = 30;
			this->label16->Text = L"\?";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(77, 372);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(16, 17);
			this->label17->TabIndex = 31;
			this->label17->Text = L"\?";
			// 
			// lblheadmazo
			// 
			this->lblheadmazo->AutoSize = true;
			this->lblheadmazo->Location = System::Drawing::Point(62, 389);
			this->lblheadmazo->Name = L"lblheadmazo";
			this->lblheadmazo->Size = System::Drawing::Size(12, 17);
			this->lblheadmazo->TabIndex = 32;
			this->lblheadmazo->Text = L"/";
			// 
			// lblheadg1
			// 
			this->lblheadg1->AutoSize = true;
			this->lblheadg1->Location = System::Drawing::Point(131, 270);
			this->lblheadg1->Name = L"lblheadg1";
			this->lblheadg1->Size = System::Drawing::Size(12, 17);
			this->lblheadg1->TabIndex = 33;
			this->lblheadg1->Text = L"/";
			// 
			// lblheadg2
			// 
			this->lblheadg2->AutoSize = true;
			this->lblheadg2->Location = System::Drawing::Point(192, 270);
			this->lblheadg2->Name = L"lblheadg2";
			this->lblheadg2->Size = System::Drawing::Size(12, 17);
			this->lblheadg2->TabIndex = 34;
			this->lblheadg2->Text = L"/";
			// 
			// lblheadg3
			// 
			this->lblheadg3->AutoSize = true;
			this->lblheadg3->Location = System::Drawing::Point(253, 270);
			this->lblheadg3->Name = L"lblheadg3";
			this->lblheadg3->Size = System::Drawing::Size(12, 17);
			this->lblheadg3->TabIndex = 35;
			this->lblheadg3->Text = L"/";
			// 
			// lblheadg4
			// 
			this->lblheadg4->AutoSize = true;
			this->lblheadg4->Location = System::Drawing::Point(316, 270);
			this->lblheadg4->Name = L"lblheadg4";
			this->lblheadg4->Size = System::Drawing::Size(12, 17);
			this->lblheadg4->TabIndex = 36;
			this->lblheadg4->Text = L"/";
			// 
			// lblheadg5
			// 
			this->lblheadg5->AutoSize = true;
			this->lblheadg5->Location = System::Drawing::Point(370, 270);
			this->lblheadg5->Name = L"lblheadg5";
			this->lblheadg5->Size = System::Drawing::Size(12, 17);
			this->lblheadg5->TabIndex = 37;
			this->lblheadg5->Text = L"/";
			// 
			// lblheadg6
			// 
			this->lblheadg6->AutoSize = true;
			this->lblheadg6->Location = System::Drawing::Point(424, 270);
			this->lblheadg6->Name = L"lblheadg6";
			this->lblheadg6->Size = System::Drawing::Size(12, 17);
			this->lblheadg6->TabIndex = 38;
			this->lblheadg6->Text = L"/";
			// 
			// lblheadg7
			// 
			this->lblheadg7->AutoSize = true;
			this->lblheadg7->Location = System::Drawing::Point(493, 270);
			this->lblheadg7->Name = L"lblheadg7";
			this->lblheadg7->Size = System::Drawing::Size(12, 17);
			this->lblheadg7->TabIndex = 39;
			this->lblheadg7->Text = L"/";
			// 
			// btnrepartir
			// 
			this->btnrepartir->Location = System::Drawing::Point(351, 19);
			this->btnrepartir->Name = L"btnrepartir";
			this->btnrepartir->Size = System::Drawing::Size(153, 50);
			this->btnrepartir->TabIndex = 40;
			this->btnrepartir->Text = L"REPARTIR CARTAS";
			this->btnrepartir->UseVisualStyleBackColor = true;
			this->btnrepartir->Click += gcnew System::EventHandler(this, &MyForm::btnrepartir_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(127, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 49);
			this->button1->TabIndex = 41;
			this->button1->Text = L"CREAR MAZO";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton8);
			this->groupBox1->Controls->Add(this->radioButton7);
			this->groupBox1->Controls->Add(this->radioButton6);
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(40, 74);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(511, 49);
			this->groupBox1->TabIndex = 42;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"ORIGEN";
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(410, 22);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(48, 21);
			this->radioButton8->TabIndex = 7;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"G7";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(356, 22);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(48, 21);
			this->radioButton7->TabIndex = 6;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"G6";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(302, 22);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(48, 21);
			this->radioButton6->TabIndex = 5;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"G5";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(248, 22);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(48, 21);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"G4";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(194, 22);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(48, 21);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"G3";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(141, 22);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(48, 21);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"G2";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(87, 22);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(48, 21);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"G1";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(10, 22);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(69, 21);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"MAZO";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton15);
			this->groupBox2->Controls->Add(this->radioButton14);
			this->groupBox2->Controls->Add(this->radioButton13);
			this->groupBox2->Controls->Add(this->radioButton12);
			this->groupBox2->Controls->Add(this->radioButton11);
			this->groupBox2->Controls->Add(this->radioButton10);
			this->groupBox2->Controls->Add(this->radioButton9);
			this->groupBox2->Location = System::Drawing::Point(40, 130);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(511, 52);
			this->groupBox2->TabIndex = 43;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"DESTINO";
			// 
			// radioButton15
			// 
			this->radioButton15->AutoSize = true;
			this->radioButton15->Location = System::Drawing::Point(348, 21);
			this->radioButton15->Name = L"radioButton15";
			this->radioButton15->Size = System::Drawing::Size(48, 21);
			this->radioButton15->TabIndex = 11;
			this->radioButton15->TabStop = true;
			this->radioButton15->Text = L"G7";
			this->radioButton15->UseVisualStyleBackColor = true;
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->Location = System::Drawing::Point(294, 21);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(48, 21);
			this->radioButton14->TabIndex = 10;
			this->radioButton14->TabStop = true;
			this->radioButton14->Text = L"G6";
			this->radioButton14->UseVisualStyleBackColor = true;
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->Location = System::Drawing::Point(240, 21);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(48, 21);
			this->radioButton13->TabIndex = 9;
			this->radioButton13->TabStop = true;
			this->radioButton13->Text = L"G5";
			this->radioButton13->UseVisualStyleBackColor = true;
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Location = System::Drawing::Point(186, 21);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(48, 21);
			this->radioButton12->TabIndex = 8;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"G4";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(132, 21);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(48, 21);
			this->radioButton11->TabIndex = 7;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"G3";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(72, 21);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(48, 21);
			this->radioButton10->TabIndex = 6;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"G2";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(6, 21);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(48, 21);
			this->radioButton9->TabIndex = 5;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"G1";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(226, 188);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(154, 33);
			this->button2->TabIndex = 44;
			this->button2->Text = L"MOVER CARTA";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(122, 287);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(55, 116);
			this->textBox1->TabIndex = 45;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(183, 287);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(55, 116);
			this->textBox2->TabIndex = 46;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(244, 287);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(55, 116);
			this->textBox3->TabIndex = 47;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(305, 287);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(55, 116);
			this->textBox4->TabIndex = 48;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(366, 287);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(55, 116);
			this->textBox5->TabIndex = 49;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(427, 287);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(55, 116);
			this->textBox6->TabIndex = 50;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(488, 287);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(55, 116);
			this->textBox7->TabIndex = 51;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(616, 426);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnrepartir);
			this->Controls->Add(this->lblheadg7);
			this->Controls->Add(this->lblheadg6);
			this->Controls->Add(this->lblheadg5);
			this->Controls->Add(this->lblheadg4);
			this->Controls->Add(this->lblheadg3);
			this->Controls->Add(this->lblheadg2);
			this->Controls->Add(this->lblheadg1);
			this->Controls->Add(this->lblheadmazo);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Pila* elgrupo1 = new Pila();
		Pila* elgrupo2 = new Pila();
		Pila* elgrupo3 = new Pila();
		Pila* elgrupo4 = new Pila();
		Pila* elgrupo5 = new Pila();
		Pila* elgrupo6 = new Pila();
		Pila* elgrupo7 = new Pila();
		Pila* baraja = new Pila();
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btnrepartir_Click(System::Object^  sender, System::EventArgs^  e) {
		btnrepartir->Enabled = false;
		Pila* pilaa = new Pila();
		Juego* eljuego = new Juego();
		//primer grupo
		Carta* cartagrupo1 = new Carta();
		cartagrupo1 = &baraja->Desapilar();
		elgrupo1->Apilar(*cartagrupo1);
		//segundo grupo
		Carta* cartagrupo21 = new Carta();
		cartagrupo21 = &baraja->Desapilar();
		elgrupo2->Apilar(*cartagrupo21);
		Carta* cartagrupo22 = new Carta();
		cartagrupo22 = &baraja->Desapilar();
		elgrupo2->Apilar(*cartagrupo22);
		//tercer grupo
		Carta* cartagrupo31 = new Carta();
		cartagrupo31 = &baraja->Desapilar();
		elgrupo3->Apilar(*cartagrupo31);
		Carta* cartagrupo32 = new Carta();
		cartagrupo32 = &baraja->Desapilar();
		elgrupo3->Apilar(*cartagrupo32);
		Carta* cartagrupo33 = new Carta();
		cartagrupo33 = &baraja->Desapilar();
		elgrupo3->Apilar(*cartagrupo33);
		//cuarto grupo
		Carta* cartagrupo41 = new Carta();
		cartagrupo41 = &baraja->Desapilar();
		elgrupo4->Apilar(*cartagrupo41);
		Carta* cartagrupo42 = new Carta();
		cartagrupo42 = &baraja->Desapilar();
		elgrupo4->Apilar(*cartagrupo42);
		Carta* cartagrupo43 = new Carta();
		cartagrupo43 = &baraja->Desapilar();
		elgrupo4->Apilar(*cartagrupo43);
		Carta* cartagrupo44 = new Carta();
		cartagrupo44 = &baraja->Desapilar();
		elgrupo4->Apilar(*cartagrupo44);
		//quinto grupo
		Carta* cartagrupo51 = new Carta();
		cartagrupo51 = &baraja->Desapilar();
		elgrupo5->Apilar(*cartagrupo51);
		Carta* cartagrupo52 = new Carta();
		cartagrupo52 = &baraja->Desapilar();
		elgrupo5->Apilar(*cartagrupo52);
		Carta* cartagrupo53 = new Carta();
		cartagrupo53 = &baraja->Desapilar();
		elgrupo5->Apilar(*cartagrupo53);
		Carta* cartagrupo54 = new Carta();
		cartagrupo54 = &baraja->Desapilar();
		elgrupo5->Apilar(*cartagrupo54);
		Carta* cartagrupo55 = new Carta();
		cartagrupo55 = &baraja->Desapilar();
		elgrupo5->Apilar(*cartagrupo55);
		//sexto grupo
		Carta* cartagrupo61 = new Carta();
		cartagrupo61 = &baraja->Desapilar();
		elgrupo6->Apilar(*cartagrupo61);
		Carta* cartagrupo62 = new Carta();
		cartagrupo62 = &baraja->Desapilar();
		elgrupo6->Apilar(*cartagrupo62);
		Carta* cartagrupo63 = new Carta();
		cartagrupo63 = &baraja->Desapilar();
		elgrupo6->Apilar(*cartagrupo63);
		Carta* cartagrupo64 = new Carta();
		cartagrupo64 = &baraja->Desapilar();
		elgrupo6->Apilar(*cartagrupo64);
		Carta* cartagrupo65 = new Carta();
		cartagrupo65 = &baraja->Desapilar();
		elgrupo6->Apilar(*cartagrupo65);
		Carta* cartagrupo66 = new Carta();
		cartagrupo66 = &baraja->Desapilar();
		elgrupo6->Apilar(*cartagrupo66);
		//séptimo grupo
		Carta* cartagrupo71 = new Carta();
		cartagrupo71 = &baraja->Desapilar();
		elgrupo7->Apilar(*cartagrupo71);
		Carta* cartagrupo72 = new Carta();
		cartagrupo72 = &baraja->Desapilar();
		elgrupo7->Apilar(*cartagrupo72);
		Carta* cartagrupo73 = new Carta();
		cartagrupo73 = &baraja->Desapilar();
		elgrupo7->Apilar(*cartagrupo73);
		Carta* cartagrupo74 = new Carta();
		cartagrupo74 = &baraja->Desapilar();
		elgrupo7->Apilar(*cartagrupo74);
		Carta* cartagrupo75 = new Carta();
		cartagrupo75 = &baraja->Desapilar();
		elgrupo7->Apilar(*cartagrupo75);
		Carta* cartagrupo76 = new Carta();
		cartagrupo76 = &baraja->Desapilar();
		elgrupo7->Apilar(*cartagrupo76);
		Carta* cartagrupo77 = new Carta();
		cartagrupo77 = &baraja->Desapilar();
		elgrupo7->Apilar(*cartagrupo77);
		lblheadg1->Text = Convert::ToString(elgrupo1->ObtenerCima().Numero) + "  " + Convert::ToString(elgrupo1->ObtenerCima().Color);
		lblheadg2->Text = Convert::ToString(elgrupo2->ObtenerCima().Numero) + "  " + Convert::ToString(elgrupo2->ObtenerCima().Color);
		lblheadg3->Text = Convert::ToString(elgrupo3->ObtenerCima().Numero) + "  " + Convert::ToString(elgrupo3->ObtenerCima().Color);
		lblheadg4->Text = Convert::ToString(elgrupo4->ObtenerCima().Numero) + "  " + Convert::ToString(elgrupo4->ObtenerCima().Color);
		lblheadg5->Text = Convert::ToString(elgrupo5->ObtenerCima().Numero) + "  " + Convert::ToString(elgrupo5->ObtenerCima().Color);
		lblheadg6->Text = Convert::ToString(elgrupo6->ObtenerCima().Numero) + "  " + Convert::ToString(elgrupo6->ObtenerCima().Color);
		lblheadg7->Text = Convert::ToString(elgrupo7->ObtenerCima().Numero) + "  " + Convert::ToString(elgrupo7->ObtenerCima().Color);
		lblheadmazo->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);

	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		button1->Enabled = false;
		Carta* carta1 = new Carta();
		carta1->Color = 'N';
		carta1->Numero = 1;
		Carta* carta2 = new Carta();
		carta2->Color = 'N';
		carta2->Numero = 2;
		Carta* carta3 = new Carta();
		carta3->Color = 'N';
		carta3->Numero = 3;
		Carta* carta4 = new Carta();
		carta4->Color = 'N';
		carta4->Numero = 4;
		Carta* carta5 = new Carta();
		carta5->Color = 'N';
		carta5->Numero = 5;
		Carta* carta6 = new Carta();
		carta6->Color = 'N';
		carta6->Numero = 6;
		Carta* carta7 = new Carta();
		carta7->Color = 'N';
		carta7->Numero = 7;
		Carta* carta8 = new Carta();
		carta8->Color = 'N';
		carta8->Numero = 8;
		Carta* carta9 = new Carta();
		carta9->Color = 'N';
		carta9->Numero = 9;
		Carta* carta10 = new Carta();
		carta10->Color = 'N';
		carta10->Numero = 10;
		Carta* carta11 = new Carta();
		carta11->Color = 'N';
		carta11->Numero = 11;
		Carta* carta12 = new Carta();
		carta12->Color = 'N';
		carta12->Numero = 12;
		Carta* carta13 = new Carta();
		carta13->Color = 'N';
		carta13->Numero = 13;
		Carta* carta14 = new Carta();
		carta14->Color = 'N';
		carta14->Numero = 14;
		Carta* carta15 = new Carta();
		carta15->Color = 'N';
		carta15->Numero = 15;
		Carta* carta16 = new Carta();
		carta16->Color = 'N';
		carta16->Numero = 16;
		Carta* carta17 = new Carta();
		carta17->Color = 'N';
		carta17->Numero = 17;
		Carta* carta18 = new Carta();
		carta18->Color = 'N';
		carta18->Numero = 18;
		Carta* carta19 = new Carta();
		carta19->Color = 'N';
		carta19->Numero = 19;
		Carta* carta20 = new Carta();
		carta20->Color = 'N';
		carta20->Numero = 20;
		Carta* carta21 = new Carta();
		carta21->Color = 'N';
		carta21->Numero = 21;
		Carta* carta22 = new Carta();
		carta22->Color = 'N';
		carta22->Numero = 22;
		Carta* carta23 = new Carta();
		carta23->Color = 'N';
		carta23->Numero = 23;
		Carta* carta24 = new Carta();
		carta24->Color = 'N';
		carta24->Numero = 24;
		Carta* carta25 = new Carta();
		carta25->Color = 'N';
		carta25->Numero = 25;
		Carta* carta26 = new Carta();
		carta26->Color = 'N';
		carta26->Numero = 26;
		Carta* carta27 = new Carta();
		carta27->Color = 'R';
		carta27->Numero = 1;
		Carta* carta28 = new Carta();
		carta28->Color = 'R';
		carta28->Numero = 2;
		Carta* carta29 = new Carta();
		carta29->Color = 'R';
		carta29->Numero = 3;
		Carta* carta30 = new Carta();
		carta30->Color = 'R';
		carta30->Numero = 4;
		Carta* carta31 = new Carta();
		carta31->Color = 'R';
		carta31->Numero = 5;
		Carta* carta32 = new Carta();
		carta32->Color = 'R';
		carta32->Numero = 6;
		Carta* carta33 = new Carta();
		carta33->Color = 'R';
		carta33->Numero = 7;
		Carta* carta34 = new Carta();
		carta34->Color = 'R';
		carta34->Numero = 8;
		Carta* carta35 = new Carta();
		carta35->Color = 'R';
		carta35->Numero = 9;
		Carta* carta36 = new Carta();
		carta36->Color = 'R';
		carta36->Numero = 10;
		Carta* carta37 = new Carta();
		carta37->Color = 'R';
		carta37->Numero = 11;
		Carta* carta38 = new Carta();
		carta38->Color = 'R';
		carta38->Numero = 12;
		Carta* carta39 = new Carta();
		carta39->Color = 'R';
		carta39->Numero = 13;
		Carta* carta40 = new Carta();
		carta40->Color = 'R';
		carta40->Numero = 14;
		Carta* carta41 = new Carta();
		carta41->Color = 'R';
		carta41->Numero = 15;
		Carta* carta42 = new Carta();
		carta42->Color = 'R';
		carta42->Numero = 16;
		Carta* carta43 = new Carta();
		carta43->Color = 'R';
		carta43->Numero = 17;
		Carta* carta44 = new Carta();
		carta44->Color = 'R';
		carta44->Numero = 18;
		Carta* carta45 = new Carta();
		carta45->Color = 'R';
		carta45->Numero = 19;
		Carta* carta46 = new Carta();
		carta46->Color = 'R';
		carta46->Numero = 20;
		Carta* carta47 = new Carta();
		carta47->Color = 'R';
		carta47->Numero = 21;
		Carta* carta48 = new Carta();
		carta48->Color = 'R';
		carta48->Numero = 22;
		Carta* carta49 = new Carta();
		carta49->Color = 'R';
		carta49->Numero = 23;
		Carta* carta50 = new Carta();
		carta50->Color = 'R';
		carta50->Numero = 24;
		Carta* carta51 = new Carta();
		carta51->Color = 'R';
		carta51->Numero = 25;
		Carta* carta52 = new Carta();
		carta52->Color = 'R';
		carta52->Numero = 26;

		baraja->Apilar(*carta7);
		baraja->Apilar(*carta14);
		baraja->Apilar(*carta36);
		baraja->Apilar(*carta4);
		baraja->Apilar(*carta20);
		baraja->Apilar(*carta45);
		baraja->Apilar(*carta29);
		baraja->Apilar(*carta34);
		baraja->Apilar(*carta50);
		baraja->Apilar(*carta10);
		baraja->Apilar(*carta48);
		baraja->Apilar(*carta17);
		baraja->Apilar(*carta41);
		baraja->Apilar(*carta37);
		baraja->Apilar(*carta22);
		baraja->Apilar(*carta26);
		baraja->Apilar(*carta49);
		baraja->Apilar(*carta46);
		baraja->Apilar(*carta1);
		baraja->Apilar(*carta30);
		baraja->Apilar(*carta3);
		baraja->Apilar(*carta21);
		baraja->Apilar(*carta15);
		baraja->Apilar(*carta18);
		baraja->Apilar(*carta35);
		baraja->Apilar(*carta9);
		baraja->Apilar(*carta25);
		baraja->Apilar(*carta11);
		baraja->Apilar(*carta40);
		baraja->Apilar(*carta6);
		baraja->Apilar(*carta32);
		baraja->Apilar(*carta42);
		baraja->Apilar(*carta28);
		baraja->Apilar(*carta51);
		baraja->Apilar(*carta52);
		baraja->Apilar(*carta2);
		baraja->Apilar(*carta39);
		baraja->Apilar(*carta24);
		baraja->Apilar(*carta47);
		baraja->Apilar(*carta16);
		baraja->Apilar(*carta33);
		baraja->Apilar(*carta43);
		baraja->Apilar(*carta8);
		baraja->Apilar(*carta19);
		baraja->Apilar(*carta27);
		baraja->Apilar(*carta12);
		baraja->Apilar(*carta38);
		baraja->Apilar(*carta23);
		baraja->Apilar(*carta31);
		baraja->Apilar(*carta5);
		baraja->Apilar(*carta44);
		baraja->Apilar(*carta13);

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		//grupo mazo de origen
		if (radioButton1->Checked)
		{
			if (radioButton9->Checked)
			{

				if ((baraja->ObtenerCima().Color != elgrupo1->ObtenerCima().Color) && (baraja->ObtenerCima().Numero > elgrupo1->ObtenerCima().Numero))
				{
					textBox1->Text = "\r\n" + lblheadmazo->Text;
					baraja->Desapilar();
					lblheadmazo->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}


			}
			if (radioButton10->Checked)
			{

				if ((baraja->ObtenerCima().Color != elgrupo2->ObtenerCima().Color) && (baraja->ObtenerCima().Numero > elgrupo2->ObtenerCima().Numero))
				{
					textBox2->Text = "\r\n" + lblheadmazo->Text;
					baraja->Desapilar();
					lblheadmazo->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}


			}
			if (radioButton11->Checked)
			{

				if ((baraja->ObtenerCima().Color != elgrupo3->ObtenerCima().Color) && (baraja->ObtenerCima().Numero > elgrupo3->ObtenerCima().Numero))
				{
					textBox3->Text = "\r\n" + lblheadmazo->Text;
					baraja->Desapilar();
					lblheadmazo->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}


			}
			if (radioButton12->Checked)
			{

				if ((baraja->ObtenerCima().Color != elgrupo4->ObtenerCima().Color) && (baraja->ObtenerCima().Numero > elgrupo4->ObtenerCima().Numero))
				{
					textBox4->Text = "\r\n" + lblheadmazo->Text;
					baraja->Desapilar();
					lblheadmazo->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}


			}
			if (radioButton13->Checked)
			{

				if ((baraja->ObtenerCima().Color != elgrupo5->ObtenerCima().Color) && (baraja->ObtenerCima().Numero > elgrupo5->ObtenerCima().Numero))
				{
					textBox5->Text = "\r\n" + lblheadmazo->Text;
					baraja->Desapilar();
					lblheadmazo->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}


			}
			if (radioButton14->Checked)
			{

				if ((baraja->ObtenerCima().Color != elgrupo6->ObtenerCima().Color) && (baraja->ObtenerCima().Numero > elgrupo6->ObtenerCima().Numero))
				{
					textBox6->Text = "\r\n" + lblheadmazo->Text;
					baraja->Desapilar();
					lblheadmazo->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}


			}
			if (radioButton15->Checked)
			{

				if ((baraja->ObtenerCima().Color != elgrupo7->ObtenerCima().Color) && (baraja->ObtenerCima().Numero > elgrupo7->ObtenerCima().Numero))
				{
					textBox7->Text = "\r\n" + lblheadmazo->Text;
					baraja->Desapilar();
					lblheadmazo->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}


			}


		}
		//grupo 1 de origen
		if (radioButton2->Checked)
		{
			if (radioButton9->Checked)
			{
				System::Windows::Forms::MessageBox::Show("Movimiento no válido");
			}
			if (radioButton10->Checked)
			{

				if ((elgrupo1->ObtenerCima().Color != elgrupo2->ObtenerCima().Color) && (elgrupo1->ObtenerCima().Numero > elgrupo2->ObtenerCima().Numero))
				{
					textBox2->Text = "\r\n" + lblheadg1->Text;
					elgrupo1->Desapilar();
					lblheadg1->Text = "N/A";
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}
			}
			if (radioButton11->Checked)
			{

				if ((elgrupo1->ObtenerCima().Color != elgrupo3->ObtenerCima().Color) && (elgrupo1->ObtenerCima().Numero > elgrupo3->ObtenerCima().Numero))
				{
					textBox3->Text = "\r\n" + lblheadg1->Text;
					elgrupo1->Desapilar();
					lblheadg1->Text = "N/A";
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}
			}
			if (radioButton12->Checked)
			{

				if ((elgrupo1->ObtenerCima().Color != elgrupo4->ObtenerCima().Color) && (elgrupo1->ObtenerCima().Numero > elgrupo4->ObtenerCima().Numero))
				{
					textBox4->Text = "\r\n" + lblheadg1->Text;
					elgrupo1->Desapilar();
					lblheadg1->Text = "N/A";
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}
			}
			if (radioButton13->Checked)
			{

				if ((elgrupo1->ObtenerCima().Color != elgrupo5->ObtenerCima().Color) && (elgrupo1->ObtenerCima().Numero > elgrupo5->ObtenerCima().Numero))
				{
					textBox5->Text = "\r\n" + lblheadg1->Text;
					elgrupo1->Desapilar();
					lblheadg1->Text = "N/A";
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}
			}
			if (radioButton14->Checked)
			{

				if ((elgrupo1->ObtenerCima().Color != elgrupo6->ObtenerCima().Color) && (elgrupo1->ObtenerCima().Numero > elgrupo6->ObtenerCima().Numero))
				{
					textBox6->Text = "\r\n" + lblheadg1->Text;
					elgrupo1->Desapilar();
					lblheadg1->Text = "N/A";
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}
			}
			if (radioButton15->Checked)
			{

				if ((elgrupo1->ObtenerCima().Color != elgrupo7->ObtenerCima().Color) && (elgrupo1->ObtenerCima().Numero > elgrupo7->ObtenerCima().Numero))
				{
					textBox7->Text = "\r\n" + lblheadg1->Text;
					elgrupo1->Desapilar();
					lblheadg1->Text = "N/A";
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}
			}
		}
		//grupo 3 de origen
		if (radioButton4->Checked)
		{
			if (radioButton11->Checked)
			{
				System::Windows::Forms::MessageBox::Show("Movimiento no válido");
			}
			if (radioButton9->Checked)
			{

				if ((elgrupo3->ObtenerCima().Color != elgrupo1->ObtenerCima().Color) && (elgrupo3->ObtenerCima().Numero > elgrupo1->ObtenerCima().Numero))
				{
					textBox1->Text = "\r\n" + lblheadg3->Text;
					elgrupo3->Desapilar();
					lblheadg3->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}
			}
			if (radioButton10->Checked)
			{

				if ((elgrupo3->ObtenerCima().Color != elgrupo2->ObtenerCima().Color) && (elgrupo3->ObtenerCima().Numero > elgrupo2->ObtenerCima().Numero))
				{
					textBox2->Text = "\r\n" + lblheadg3->Text;
					elgrupo3->Desapilar();
					lblheadg3->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}
			}
			if (radioButton12->Checked)
			{

				if ((elgrupo3->ObtenerCima().Color != elgrupo4->ObtenerCima().Color) && (elgrupo3->ObtenerCima().Numero > elgrupo4->ObtenerCima().Numero))
				{
					textBox4->Text = "\r\n" + lblheadg3->Text;
					elgrupo3->Desapilar();
					lblheadg3->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}
			}
			if (radioButton13->Checked)
			{

				if ((elgrupo3->ObtenerCima().Color != elgrupo5->ObtenerCima().Color) && (elgrupo3->ObtenerCima().Numero > elgrupo5->ObtenerCima().Numero))
				{
					textBox5->Text = "\r\n" + lblheadg3->Text;
					elgrupo3->Desapilar();
					lblheadg3->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}
			}
			if (radioButton14->Checked)
			{

				if ((elgrupo3->ObtenerCima().Color != elgrupo6->ObtenerCima().Color) && (elgrupo3->ObtenerCima().Numero > elgrupo6->ObtenerCima().Numero))
				{
					textBox6->Text = "\r\n" + lblheadg3->Text;
					elgrupo3->Desapilar();
					lblheadg3->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}
			}
			if (radioButton15->Checked)
			{

				if ((elgrupo3->ObtenerCima().Color != elgrupo7->ObtenerCima().Color) && (elgrupo3->ObtenerCima().Numero > elgrupo7->ObtenerCima().Numero))
				{
					textBox7->Text = "\r\n" + lblheadg3->Text;
					elgrupo3->Desapilar();
					lblheadg3->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}
			}

		}
		//grupo 2 de origen
		if (radioButton3->Checked)
		{
			if (radioButton10->Checked)
			{
				System::Windows::Forms::MessageBox::Show("Movimiento no válido");
			}
			if (radioButton9->Checked)
			{

				if ((elgrupo2->ObtenerCima().Color != elgrupo1->ObtenerCima().Color) && (elgrupo2->ObtenerCima().Numero > elgrupo1->ObtenerCima().Numero))
				{
					textBox1->Text = "\r\n" + lblheadg2->Text;
					elgrupo2->Desapilar();
					lblheadg2->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}
			}
			if (radioButton11->Checked)
			{

				if ((elgrupo2->ObtenerCima().Color != elgrupo3->ObtenerCima().Color) && (elgrupo2->ObtenerCima().Numero > elgrupo3->ObtenerCima().Numero))
				{
					textBox3->Text = "\r\n" + lblheadg2->Text;
					elgrupo2->Desapilar();
					lblheadg2->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}
			}
			if (radioButton12->Checked)
			{

				if ((elgrupo2->ObtenerCima().Color != elgrupo4->ObtenerCima().Color) && (elgrupo2->ObtenerCima().Numero > elgrupo4->ObtenerCima().Numero))
				{
					textBox4->Text = "\r\n" + lblheadg2->Text;
					elgrupo2->Desapilar();
					lblheadg2->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}
			}
			if (radioButton13->Checked)
			{

				if ((elgrupo2->ObtenerCima().Color != elgrupo5->ObtenerCima().Color) && (elgrupo2->ObtenerCima().Numero > elgrupo5->ObtenerCima().Numero))
				{
					textBox5->Text = "\r\n" + lblheadg2->Text;
					elgrupo2->Desapilar();
					lblheadg2->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}
			}
			if (radioButton14->Checked)
			{

				if ((elgrupo2->ObtenerCima().Color != elgrupo6->ObtenerCima().Color) && (elgrupo2->ObtenerCima().Numero > elgrupo6->ObtenerCima().Numero))
				{
					textBox6->Text = "\r\n" + lblheadg2->Text;
					elgrupo2->Desapilar();
					lblheadg2->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}
			}
			if (radioButton15->Checked)
			{

				if ((elgrupo2->ObtenerCima().Color != elgrupo7->ObtenerCima().Color) && (elgrupo2->ObtenerCima().Numero > elgrupo7->ObtenerCima().Numero))
				{
					textBox7->Text = "\r\n" + lblheadg2->Text;
					elgrupo2->Desapilar();
					lblheadg2->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}
			}
			//grupo 4 de origen
			if (radioButton5->Checked)
			{
				if (radioButton12->Checked)
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}
				if (radioButton9->Checked)
				{

					if ((elgrupo4->ObtenerCima().Color != elgrupo1->ObtenerCima().Color) && (elgrupo4->ObtenerCima().Numero > elgrupo1->ObtenerCima().Numero))
					{
						textBox1->Text = "\r\n" + lblheadg4->Text;
						elgrupo4->Desapilar();
						lblheadg4->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
					}
					else
					{
						System::Windows::Forms::MessageBox::Show("Movimiento no válido");
					}
				}
				if (radioButton11->Checked)
				{

					if ((elgrupo4->ObtenerCima().Color != elgrupo3->ObtenerCima().Color) && (elgrupo4->ObtenerCima().Numero > elgrupo3->ObtenerCima().Numero))
					{
						textBox3->Text = "\r\n" + lblheadg4->Text;
						elgrupo4->Desapilar();
						lblheadg4->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
					}
					else
					{
						System::Windows::Forms::MessageBox::Show("Movimiento no válido");
					}
				}
				if (radioButton10->Checked)
				{

					if ((elgrupo4->ObtenerCima().Color != elgrupo2->ObtenerCima().Color) && (elgrupo4->ObtenerCima().Numero > elgrupo2->ObtenerCima().Numero))
					{
						textBox2->Text = "\r\n" + lblheadg4->Text;
						elgrupo4->Desapilar();
						lblheadg4->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
					}
					else
					{
						System::Windows::Forms::MessageBox::Show("Movimiento no válido");
					}
				}
				if (radioButton13->Checked)
				{

					if ((elgrupo4->ObtenerCima().Color != elgrupo5->ObtenerCima().Color) && (elgrupo4->ObtenerCima().Numero > elgrupo5->ObtenerCima().Numero))
					{
						textBox5->Text = "\r\n" + lblheadg4->Text;
						elgrupo4->Desapilar();
						lblheadg4->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
					}
					else
					{
						System::Windows::Forms::MessageBox::Show("Movimiento no válido");
					}
				}
				if (radioButton14->Checked)
				{

					if ((elgrupo4->ObtenerCima().Color != elgrupo6->ObtenerCima().Color) && (elgrupo4->ObtenerCima().Numero > elgrupo6->ObtenerCima().Numero))
					{
						textBox6->Text = "\r\n" + lblheadg4->Text;
						elgrupo4->Desapilar();
						lblheadg4->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
					}
					else
					{
						System::Windows::Forms::MessageBox::Show("Movimiento no válido");
					}
				}
				if (radioButton15->Checked)
				{

					if ((elgrupo4->ObtenerCima().Color != elgrupo7->ObtenerCima().Color) && (elgrupo4->ObtenerCima().Numero > elgrupo7->ObtenerCima().Numero))
					{
						textBox7->Text = "\r\n" + lblheadg4->Text;
						elgrupo4->Desapilar();
						lblheadg4->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
					}
					else
					{
						System::Windows::Forms::MessageBox::Show("Movimiento no válido");
					}
				}
			}
			//grupo 5 de origen
			if (radioButton6->Checked)
			{
				if (radioButton13->Checked)
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}
				if (radioButton9->Checked)
				{

					if ((elgrupo5->ObtenerCima().Color != elgrupo1->ObtenerCima().Color) && (elgrupo5->ObtenerCima().Numero > elgrupo1->ObtenerCima().Numero))
					{
						textBox1->Text = "\r\n" + lblheadg5->Text;
						elgrupo5->Desapilar();
						lblheadg5->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
					}
					else
					{
						System::Windows::Forms::MessageBox::Show("Movimiento no válido");
					}
				}
				if (radioButton11->Checked)
				{

					if ((elgrupo5->ObtenerCima().Color != elgrupo3->ObtenerCima().Color) && (elgrupo5->ObtenerCima().Numero > elgrupo3->ObtenerCima().Numero))
					{
						textBox3->Text = "\r\n" + lblheadg5->Text;
						elgrupo5->Desapilar();
						lblheadg5->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
					}
					else
					{
						System::Windows::Forms::MessageBox::Show("Movimiento no válido");
					}
				}
				if (radioButton10->Checked)
				{

					if ((elgrupo5->ObtenerCima().Color != elgrupo2->ObtenerCima().Color) && (elgrupo5->ObtenerCima().Numero > elgrupo2->ObtenerCima().Numero))
					{
						textBox2->Text = "\r\n" + lblheadg5->Text;
						elgrupo5->Desapilar();
						lblheadg5->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
					}
					else
					{
						System::Windows::Forms::MessageBox::Show("Movimiento no válido");
					}
				}
				if (radioButton12->Checked)
				{

					if ((elgrupo5->ObtenerCima().Color != elgrupo4->ObtenerCima().Color) && (elgrupo5->ObtenerCima().Numero > elgrupo4->ObtenerCima().Numero))
					{
						textBox4->Text = "\r\n" + lblheadg5->Text;
						elgrupo5->Desapilar();
						lblheadg5->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
					}
					else
					{
						System::Windows::Forms::MessageBox::Show("Movimiento no válido");
					}
				}
				if (radioButton14->Checked)
				{

					if ((elgrupo5->ObtenerCima().Color != elgrupo6->ObtenerCima().Color) && (elgrupo5->ObtenerCima().Numero > elgrupo6->ObtenerCima().Numero))
					{
						textBox6->Text = "\r\n" + lblheadg5->Text;
						elgrupo5->Desapilar();
						lblheadg5->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
					}
					else
					{
						System::Windows::Forms::MessageBox::Show("Movimiento no válido");
					}
				}
				if (radioButton15->Checked)
				{

					if ((elgrupo5->ObtenerCima().Color != elgrupo7->ObtenerCima().Color) && (elgrupo5->ObtenerCima().Numero > elgrupo7->ObtenerCima().Numero))
					{
						textBox7->Text = "\r\n" + lblheadg5->Text;
						elgrupo5->Desapilar();
						lblheadg5->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
					}
					else
					{
						System::Windows::Forms::MessageBox::Show("Movimiento no válido");
					}
				}
			}
			//grupo 6 de origen
			if (radioButton7->Checked)
			{
				if (radioButton14->Checked)
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}
				if (radioButton9->Checked)
				{

					if ((elgrupo6->ObtenerCima().Color != elgrupo1->ObtenerCima().Color) && (elgrupo6->ObtenerCima().Numero > elgrupo1->ObtenerCima().Numero))
					{
						textBox1->Text = "\r\n" + lblheadg6->Text;
						elgrupo6->Desapilar();
						lblheadg6->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
					}
					else
					{
						System::Windows::Forms::MessageBox::Show("Movimiento no válido");
					}
				}
				if (radioButton11->Checked)
				{

					if ((elgrupo6->ObtenerCima().Color != elgrupo3->ObtenerCima().Color) && (elgrupo6->ObtenerCima().Numero > elgrupo3->ObtenerCima().Numero))
					{
						textBox3->Text = "\r\n" + lblheadg6->Text;
						elgrupo6->Desapilar();
						lblheadg6->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
					}
					else
					{
						System::Windows::Forms::MessageBox::Show("Movimiento no válido");
					}
				}
				if (radioButton10->Checked)
				{

					if ((elgrupo6->ObtenerCima().Color != elgrupo2->ObtenerCima().Color) && (elgrupo6->ObtenerCima().Numero > elgrupo2->ObtenerCima().Numero))
					{
						textBox2->Text = "\r\n" + lblheadg6->Text;
						elgrupo6->Desapilar();
						lblheadg6->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
					}
					else
					{
						System::Windows::Forms::MessageBox::Show("Movimiento no válido");
					}
				}
				if (radioButton12->Checked)
				{

					if ((elgrupo6->ObtenerCima().Color != elgrupo4->ObtenerCima().Color) && (elgrupo6->ObtenerCima().Numero > elgrupo4->ObtenerCima().Numero))
					{
						textBox4->Text = "\r\n" + lblheadg6->Text;
						elgrupo6->Desapilar();
						lblheadg6->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
					}
					else
					{
						System::Windows::Forms::MessageBox::Show("Movimiento no válido");
					}
				}
				if (radioButton13->Checked)
				{

					if ((elgrupo6->ObtenerCima().Color != elgrupo5->ObtenerCima().Color) && (elgrupo6->ObtenerCima().Numero > elgrupo5->ObtenerCima().Numero))
					{
						textBox5->Text = "\r\n" + lblheadg6->Text;
						elgrupo6->Desapilar();
						lblheadg6->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
					}
					else
					{
						System::Windows::Forms::MessageBox::Show("Movimiento no válido");
					}
				}
				if (radioButton15->Checked)
				{

					if ((elgrupo6->ObtenerCima().Color != elgrupo7->ObtenerCima().Color) && (elgrupo6->ObtenerCima().Numero > elgrupo7->ObtenerCima().Numero))
					{
						textBox7->Text = "\r\n" + lblheadg6->Text;
						elgrupo6->Desapilar();
						lblheadg6->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
					}
					else
					{
						System::Windows::Forms::MessageBox::Show("Movimiento no válido");
					}
				}
			}
			//grupo 7 de origen
			if (radioButton8->Checked)
			{
				if (radioButton15->Checked)
				{
					System::Windows::Forms::MessageBox::Show("Movimiento no válido");
				}
				if (radioButton9->Checked)
				{

					if ((elgrupo7->ObtenerCima().Color != elgrupo1->ObtenerCima().Color) && (elgrupo7->ObtenerCima().Numero > elgrupo1->ObtenerCima().Numero))
					{
						textBox1->Text = "\r\n" + lblheadg7->Text;
						elgrupo7->Desapilar();
						lblheadg7->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
					}
					else
					{
						System::Windows::Forms::MessageBox::Show("Movimiento no válido");
					}
				}
				if (radioButton11->Checked)
				{

					if ((elgrupo7->ObtenerCima().Color != elgrupo3->ObtenerCima().Color) && (elgrupo7->ObtenerCima().Numero > elgrupo3->ObtenerCima().Numero))
					{
						textBox3->Text = "\r\n" + lblheadg7->Text;
						elgrupo7->Desapilar();
						lblheadg7->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
					}
					else
					{
						System::Windows::Forms::MessageBox::Show("Movimiento no válido");
					}
				}
				if (radioButton10->Checked)
				{

					if ((elgrupo7->ObtenerCima().Color != elgrupo2->ObtenerCima().Color) && (elgrupo7->ObtenerCima().Numero > elgrupo2->ObtenerCima().Numero))
					{
						textBox2->Text = "\r\n" + lblheadg7->Text;
						elgrupo7->Desapilar();
						lblheadg7->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
					}
					else
					{
						System::Windows::Forms::MessageBox::Show("Movimiento no válido");
					}
				}
				if (radioButton12->Checked)
				{

					if ((elgrupo7->ObtenerCima().Color != elgrupo4->ObtenerCima().Color) && (elgrupo7->ObtenerCima().Numero > elgrupo4->ObtenerCima().Numero))
					{
						textBox4->Text = "\r\n" + lblheadg7->Text;
						elgrupo7->Desapilar();
						lblheadg7->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
					}
					else
					{
						System::Windows::Forms::MessageBox::Show("Movimiento no válido");
					}
				}
				if (radioButton13->Checked)
				{

					if ((elgrupo7->ObtenerCima().Color != elgrupo5->ObtenerCima().Color) && (elgrupo7->ObtenerCima().Numero > elgrupo5->ObtenerCima().Numero))
					{
						textBox5->Text = "\r\n" + lblheadg7->Text;
						elgrupo7->Desapilar();
						lblheadg7->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
					}
					else
					{
						System::Windows::Forms::MessageBox::Show("Movimiento no válido");
					}
				}
				if (radioButton14->Checked)
				{

					if ((elgrupo7->ObtenerCima().Color != elgrupo6->ObtenerCima().Color) && (elgrupo7->ObtenerCima().Numero > elgrupo6->ObtenerCima().Numero))
					{
						textBox6->Text = "\r\n" + lblheadg7->Text;
						elgrupo7->Desapilar();
						lblheadg7->Text = Convert::ToString(baraja->ObtenerCima().Numero) + "  " + Convert::ToString(baraja->ObtenerCima().Color);
					}
					else
					{
						System::Windows::Forms::MessageBox::Show("Movimiento no válido");
					}
				}
			}

		}

	}
	};

}