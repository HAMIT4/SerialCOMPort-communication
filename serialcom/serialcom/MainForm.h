#pragma once

namespace serialcom {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//findPorts();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

























	private: System::IO::Ports::SerialPort^ serialPort1;
	private: System::Windows::Forms::ComboBox^ cbPorts;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cbBaudrate;
	private: System::Windows::Forms::Button^ btnConnect;
	private: System::Windows::Forms::TextBox^ tbSend;

	private: System::Windows::Forms::Button^ btnSend;
	private: System::Windows::Forms::Button^ btnReceive;
	private: System::Windows::Forms::TextBox^ tbRecieve;




	private: System::ComponentModel::IContainer^ components;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->cbPorts = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cbBaudrate = (gcnew System::Windows::Forms::ComboBox());
			this->btnConnect = (gcnew System::Windows::Forms::Button());
			this->tbSend = (gcnew System::Windows::Forms::TextBox());
			this->btnSend = (gcnew System::Windows::Forms::Button());
			this->btnReceive = (gcnew System::Windows::Forms::Button());
			this->tbRecieve = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// cbPorts
			// 
			this->cbPorts->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbPorts->FormattingEnabled = true;
			this->cbPorts->Location = System::Drawing::Point(166, 13);
			this->cbPorts->Name = L"cbPorts";
			this->cbPorts->Size = System::Drawing::Size(157, 21);
			this->cbPorts->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(21, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 18);
			this->label1->TabIndex = 2;
			this->label1->Text = L"COM Ports Available";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(24, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Baud Rate";
			// 
			// cbBaudrate
			// 
			this->cbBaudrate->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbBaudrate->FormattingEnabled = true;
			this->cbBaudrate->Location = System::Drawing::Point(166, 46);
			this->cbBaudrate->Name = L"cbBaudrate";
			this->cbBaudrate->Size = System::Drawing::Size(157, 21);
			this->cbBaudrate->TabIndex = 4;
			// 
			// btnConnect
			// 
			this->btnConnect->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConnect->Location = System::Drawing::Point(24, 78);
			this->btnConnect->Name = L"btnConnect";
			this->btnConnect->Size = System::Drawing::Size(299, 31);
			this->btnConnect->TabIndex = 5;
			this->btnConnect->Text = L"Connect";
			this->btnConnect->UseVisualStyleBackColor = true;
			this->btnConnect->Click += gcnew System::EventHandler(this, &MainForm::btnConnect_Click);
			// 
			// tbSend
			// 
			this->tbSend->Location = System::Drawing::Point(452, 14);
			this->tbSend->Name = L"tbSend";
			this->tbSend->Size = System::Drawing::Size(100, 20);
			this->tbSend->TabIndex = 6;
			// 
			// btnSend
			// 
			this->btnSend->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSend->Location = System::Drawing::Point(350, 13);
			this->btnSend->Name = L"btnSend";
			this->btnSend->Size = System::Drawing::Size(86, 37);
			this->btnSend->TabIndex = 7;
			this->btnSend->Text = L"Send";
			this->btnSend->UseVisualStyleBackColor = true;
			this->btnSend->Click += gcnew System::EventHandler(this, &MainForm::btnSend_Click);
			// 
			// btnReceive
			// 
			this->btnReceive->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReceive->Location = System::Drawing::Point(350, 57);
			this->btnReceive->Name = L"btnReceive";
			this->btnReceive->Size = System::Drawing::Size(86, 37);
			this->btnReceive->TabIndex = 8;
			this->btnReceive->Text = L"Recieve";
			this->btnReceive->UseVisualStyleBackColor = true;
			this->btnReceive->Click += gcnew System::EventHandler(this, &MainForm::btnReceive_Click);
			// 
			// tbRecieve
			// 
			this->tbRecieve->Location = System::Drawing::Point(452, 57);
			this->tbRecieve->Multiline = true;
			this->tbRecieve->Name = L"tbRecieve";
			this->tbRecieve->Size = System::Drawing::Size(236, 37);
			this->tbRecieve->TabIndex = 9;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 328);
			this->Controls->Add(this->tbRecieve);
			this->Controls->Add(this->btnReceive);
			this->Controls->Add(this->btnSend);
			this->Controls->Add(this->tbSend);
			this->Controls->Add(this->btnConnect);
			this->Controls->Add(this->cbBaudrate);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cbPorts);
			this->Name = L"MainForm";
			this->Text = L"SERIAL COM";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		array<Object^>^ comPorts = SerialPort::GetPortNames();
		cbPorts->Items->AddRange(comPorts);
		cbPorts->SelectedIndex = 0;
		array<Object^>^ baudrate = { 9600, 115200 };
		cbBaudrate->Items->AddRange(baudrate);
		cbBaudrate->SelectedIndex = 0;

	}
	private: System::Void btnConnect_Click(System::Object^ sender, System::EventArgs^ e) {

		try {
			if (btnConnect->Text == "Connect") {
				if (serialPort1->IsOpen) {
					serialPort1->Close();
				}
				serialPort1->PortName = cbPorts->Text;
				serialPort1->BaudRate = Int32::Parse(cbBaudrate->Text);
				serialPort1->Open();
				btnConnect->Text = "Disconnect";

			}
			else if (btnConnect->Text == "Disconnect") {
				serialPort1->Close();
				btnConnect->Text = "Connect";

			}
		}
		catch (...) {
			MessageBox::Show("Connection Error!!");
		}
	}
	private: System::Void btnSend_Click(System::Object^ sender, System::EventArgs^ e) {
		serialPort1->WriteLine(tbSend->Text);
	}
	private: System::Void btnReceive_Click(System::Object^ sender, System::EventArgs^ e) {
		tbRecieve->AppendText(serialPort1->ReadLine() + "\n");
	}
};
}
