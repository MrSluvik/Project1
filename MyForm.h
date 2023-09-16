#pragma once
#include <string>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
using namespace std;

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm()
		{
			this->SetStyle(ControlStyles::SupportsTransparentBackColor, true);//для того щоб не викидало помилку про прозорість кольору форми
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(86, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(120, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(105, 53);
			this->label1->MaximumSize = System::Drawing::Size(100, 100);
			this->label1->MinimumSize = System::Drawing::Size(40, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 20);
			this->label1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->AutoEllipsis = true;
			this->button1->AutoSize = true;
			this->button1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Location = System::Drawing::Point(86, 87);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 28);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Копіювання";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::Navy;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Copy";
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseClick);
			this->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDoubleClick);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion	
	private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->label1->Text = this->textBox1->Text;//копіюваня тексту з textBox1=label1
	}	
	private: System::Void MyForm_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		srand(time(NULL));//щоб рандом був рандомний		
		this->label1->Text = "Початок роботи";//присвоюєм текст лайблу якщо нажати на форму 1 раз
		this->textBox1->Text = "";// присвоюєм текст лайблу якщо нажати на форму 1 раз
		this->BackColor = System::Drawing::Color::FromArgb(rand() % 255, rand() % 255, rand() % 255, rand() % 255);//ставим рандомний колір форми
		
	}

    private: System::Void MyForm_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{	
          MyForm::Close();	//закритття форми якщо клацнути двічі			
    }
   
};
}
