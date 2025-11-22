#pragma once

namespace OpencvRecognition {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

		

	protected:
	

	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::TableLayoutPanel^ layoutMain;
	private: System::Windows::Forms::GroupBox^ functionsBox;





	private: System::Windows::Forms::TableLayoutPanel^ layoutFunctions;


	private: System::Windows::Forms::GroupBox^ consoleBox;
	private: System::Windows::Forms::TabControl^ tabControlFunctions;
	private: System::Windows::Forms::TabPage^ tabFace;
	private: System::Windows::Forms::TabPage^ tabObjects;
	private: System::Windows::Forms::TextBox^ textBoxCamera;





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ labelFaceTab;
	private: System::Windows::Forms::GroupBox^ photosBox;
	private: System::Windows::Forms::TableLayoutPanel^ layoutPhotos;





	private: System::Windows::Forms::PictureBox^ photoInit;
	private: System::Windows::Forms::PictureBox^ photoFin;









	private: System::ComponentModel::IContainer^ components;

	protected:
		RecognitionCV* RecCV = new RecognitionCV();




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->layoutMain = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->photosBox = (gcnew System::Windows::Forms::GroupBox());
			this->layoutPhotos = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->photoInit = (gcnew System::Windows::Forms::PictureBox());
			this->photoFin = (gcnew System::Windows::Forms::PictureBox());
			this->functionsBox = (gcnew System::Windows::Forms::GroupBox());
			this->layoutFunctions = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBoxCamera = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControlFunctions = (gcnew System::Windows::Forms::TabControl());
			this->tabFace = (gcnew System::Windows::Forms::TabPage());
			this->labelFaceTab = (gcnew System::Windows::Forms::Label());
			this->tabObjects = (gcnew System::Windows::Forms::TabPage());
			this->consoleBox = (gcnew System::Windows::Forms::GroupBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->layoutMain->SuspendLayout();
			this->photosBox->SuspendLayout();
			this->layoutPhotos->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->photoInit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->photoFin))->BeginInit();
			this->functionsBox->SuspendLayout();
			this->layoutFunctions->SuspendLayout();
			this->tabControlFunctions->SuspendLayout();
			this->tabFace->SuspendLayout();
			this->SuspendLayout();
			// 
			// layoutMain
			// 
			this->layoutMain->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->layoutMain->ColumnCount = 2;
			this->layoutMain->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 39.9976F)));
			this->layoutMain->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 60.0024F)));
			this->layoutMain->Controls->Add(this->photosBox, 1, 0);
			this->layoutMain->Controls->Add(this->functionsBox, 0, 0);
			this->layoutMain->Controls->Add(this->consoleBox, 0, 1);
			this->layoutMain->Location = System::Drawing::Point(12, 12);
			this->layoutMain->Name = L"layoutMain";
			this->layoutMain->RowCount = 2;
			this->layoutMain->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 76.92308F)));
			this->layoutMain->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 23.07692F)));
			this->layoutMain->Size = System::Drawing::Size(759, 548);
			this->layoutMain->TabIndex = 0;
			this->layoutMain->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::layoutMain_Paint);
			// 
			// photosBox
			// 
			this->photosBox->Controls->Add(this->layoutPhotos);
			this->photosBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->photosBox->Location = System::Drawing::Point(306, 3);
			this->photosBox->Name = L"photosBox";
			this->photosBox->Size = System::Drawing::Size(450, 415);
			this->photosBox->TabIndex = 3;
			this->photosBox->TabStop = false;
			this->photosBox->Text = L"Кадры";
			this->photosBox->Enter += gcnew System::EventHandler(this, &MainForm::groupBox1_Enter);
			// 
			// layoutPhotos
			// 
			this->layoutPhotos->ColumnCount = 1;
			this->layoutPhotos->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->layoutPhotos->Controls->Add(this->photoInit, 0, 1);
			this->layoutPhotos->Controls->Add(this->photoFin, 0, 0);
			this->layoutPhotos->Dock = System::Windows::Forms::DockStyle::Fill;
			this->layoutPhotos->Location = System::Drawing::Point(3, 16);
			this->layoutPhotos->Name = L"layoutPhotos";
			this->layoutPhotos->RowCount = 2;
			this->layoutPhotos->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->layoutPhotos->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->layoutPhotos->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->layoutPhotos->Size = System::Drawing::Size(444, 396);
			this->layoutPhotos->TabIndex = 4;
			// 
			// photoInit
			// 
			this->photoInit->Dock = System::Windows::Forms::DockStyle::Fill;
			this->photoInit->Location = System::Drawing::Point(3, 201);
			this->photoInit->Name = L"photoInit";
			this->photoInit->Size = System::Drawing::Size(438, 192);
			this->photoInit->TabIndex = 5;
			this->photoInit->TabStop = false;
			// 
			// photoFin
			// 
			this->photoFin->Dock = System::Windows::Forms::DockStyle::Fill;
			this->photoFin->Location = System::Drawing::Point(3, 3);
			this->photoFin->Name = L"photoFin";
			this->photoFin->Size = System::Drawing::Size(438, 192);
			this->photoFin->TabIndex = 4;
			this->photoFin->TabStop = false;
			// 
			// functionsBox
			// 
			this->functionsBox->Controls->Add(this->layoutFunctions);
			this->functionsBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->functionsBox->Location = System::Drawing::Point(3, 3);
			this->functionsBox->Name = L"functionsBox";
			this->functionsBox->Size = System::Drawing::Size(297, 415);
			this->functionsBox->TabIndex = 0;
			this->functionsBox->TabStop = false;
			this->functionsBox->Text = L"Функции";
			// 
			// layoutFunctions
			// 
			this->layoutFunctions->ColumnCount = 3;
			this->layoutFunctions->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				52.60664F)));
			this->layoutFunctions->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				47.39336F)));
			this->layoutFunctions->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				68)));
			this->layoutFunctions->Controls->Add(this->textBoxCamera, 1, 0);
			this->layoutFunctions->Controls->Add(this->label1, 0, 0);
			this->layoutFunctions->Controls->Add(this->tabControlFunctions, 0, 1);
			this->layoutFunctions->Dock = System::Windows::Forms::DockStyle::Fill;
			this->layoutFunctions->Location = System::Drawing::Point(3, 16);
			this->layoutFunctions->Name = L"layoutFunctions";
			this->layoutFunctions->RowCount = 2;
			this->layoutFunctions->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->layoutFunctions->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->layoutFunctions->Size = System::Drawing::Size(291, 396);
			this->layoutFunctions->TabIndex = 0;
			this->layoutFunctions->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::layoutFunctions_Paint);
			// 
			// textBoxCamera
			// 
			this->textBoxCamera->Dock = System::Windows::Forms::DockStyle::Top;
			this->textBoxCamera->Location = System::Drawing::Point(120, 3);
			this->textBoxCamera->Name = L"textBoxCamera";
			this->textBoxCamera->Size = System::Drawing::Size(99, 20);
			this->textBoxCamera->TabIndex = 0;
			this->textBoxCamera->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBoxCamera_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Location = System::Drawing::Point(6, 6);
			this->label1->Margin = System::Windows::Forms::Padding(6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Номер камеры:";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// tabControlFunctions
			// 
			this->layoutFunctions->SetColumnSpan(this->tabControlFunctions, 3);
			this->tabControlFunctions->Controls->Add(this->tabFace);
			this->tabControlFunctions->Controls->Add(this->tabObjects);
			this->tabControlFunctions->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControlFunctions->Location = System::Drawing::Point(3, 29);
			this->tabControlFunctions->Name = L"tabControlFunctions";
			this->tabControlFunctions->SelectedIndex = 0;
			this->tabControlFunctions->Size = System::Drawing::Size(285, 364);
			this->tabControlFunctions->TabIndex = 2;
			// 
			// tabFace
			// 
			this->tabFace->Controls->Add(this->labelFaceTab);
			this->tabFace->Location = System::Drawing::Point(4, 22);
			this->tabFace->Name = L"tabFace";
			this->tabFace->Padding = System::Windows::Forms::Padding(3);
			this->tabFace->Size = System::Drawing::Size(277, 338);
			this->tabFace->TabIndex = 0;
			this->tabFace->Text = L"Face";
			this->tabFace->UseVisualStyleBackColor = true;
			// 
			// labelFaceTab
			// 
			this->labelFaceTab->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelFaceTab->Location = System::Drawing::Point(3, 3);
			this->labelFaceTab->Name = L"labelFaceTab";
			this->labelFaceTab->Size = System::Drawing::Size(271, 332);
			this->labelFaceTab->TabIndex = 2;
			this->labelFaceTab->Text = L"Менять нечего :(";
			this->labelFaceTab->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tabObjects
			// 
			this->tabObjects->Location = System::Drawing::Point(4, 22);
			this->tabObjects->Name = L"tabObjects";
			this->tabObjects->Padding = System::Windows::Forms::Padding(3);
			this->tabObjects->Size = System::Drawing::Size(277, 338);
			this->tabObjects->TabIndex = 1;
			this->tabObjects->Text = L"-";
			this->tabObjects->UseVisualStyleBackColor = true;
			// 
			// consoleBox
			// 
			this->layoutMain->SetColumnSpan(this->consoleBox, 2);
			this->consoleBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->consoleBox->Location = System::Drawing::Point(3, 424);
			this->consoleBox->Name = L"consoleBox";
			this->consoleBox->Size = System::Drawing::Size(753, 121);
			this->consoleBox->TabIndex = 2;
			this->consoleBox->TabStop = false;
			this->consoleBox->Text = L"Информация";
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(783, 572);
			this->Controls->Add(this->layoutMain);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm";
			this->Text = L"Главная форма";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->layoutMain->ResumeLayout(false);
			this->photosBox->ResumeLayout(false);
			this->layoutPhotos->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->photoInit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->photoFin))->EndInit();
			this->functionsBox->ResumeLayout(false);
			this->layoutFunctions->ResumeLayout(false);
			this->layoutFunctions->PerformLayout();
			this->tabControlFunctions->ResumeLayout(false);
			this->tabFace->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void layoutFunctions_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void layoutMain_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void labelFaceTab_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void textBoxCamera_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == (char)Keys::Enter) {
		System::String^ sMode = textBoxCamera->Text;
		int cameraMode;
		if (int::TryParse(sMode, cameraMode))
			RecCV->Init(cameraMode);
	}
}
};
}
