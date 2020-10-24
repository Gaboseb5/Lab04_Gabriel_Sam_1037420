#pragma once

namespace Lab04GabrielSam1037420 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dgvMatriz;

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::OpenFileDialog^ ofdImportar;
	private: System::Windows::Forms::SaveFileDialog^ sfdExportar;
	private: System::Windows::Forms::TextBox^ txtpa;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridView^ dgvMatriz2;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;









	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ofdImportar = (gcnew System::Windows::Forms::OpenFileDialog());
			this->sfdExportar = (gcnew System::Windows::Forms::SaveFileDialog());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txtpa = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dgvMatriz = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dgvMatriz2 = (gcnew System::Windows::Forms::DataGridView());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz2))->BeginInit();
			this->SuspendLayout();
			// 
			// ofdImportar
			// 
			this->ofdImportar->FileName = L"openFileDialog1";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(27, 32);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(827, 506);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->txtpa);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->dgvMatriz);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(819, 477);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Problema 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(521, 263);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(234, 37);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Quick";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(521, 201);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(234, 37);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Bubble";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(521, 333);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(234, 37);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Merge";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// txtpa
			// 
			this->txtpa->Location = System::Drawing::Point(498, 37);
			this->txtpa->Name = L"txtpa";
			this->txtpa->Size = System::Drawing::Size(147, 22);
			this->txtpa->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(679, 37);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 37);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Importar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dgvMatriz
			// 
			this->dgvMatriz->AllowUserToAddRows = false;
			this->dgvMatriz->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMatriz->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1, this->Column2,
					this->Column3
			});
			this->dgvMatriz->Location = System::Drawing::Point(22, 25);
			this->dgvMatriz->Name = L"dgvMatriz";
			this->dgvMatriz->ReadOnly = true;
			this->dgvMatriz->RowHeadersWidth = 51;
			this->dgvMatriz->RowTemplate->Height = 24;
			this->dgvMatriz->Size = System::Drawing::Size(437, 435);
			this->dgvMatriz->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Departamento";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Visible = false;
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Año";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Visible = false;
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Denuncias";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Visible = false;
			this->Column3->Width = 125;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button7);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->dgvMatriz2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(819, 477);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Problema 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(675, 66);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(105, 29);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Importar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// dgvMatriz2
			// 
			this->dgvMatriz2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMatriz2->Location = System::Drawing::Point(36, 32);
			this->dgvMatriz2->Name = L"dgvMatriz2";
			this->dgvMatriz2->ReadOnly = true;
			this->dgvMatriz2->RowHeadersWidth = 51;
			this->dgvMatriz2->RowTemplate->Height = 24;
			this->dgvMatriz2->Size = System::Drawing::Size(594, 432);
			this->dgvMatriz2->TabIndex = 0;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(675, 171);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(105, 29);
			this->button6->TabIndex = 2;
			this->button6->Text = L"Bubble sort";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(675, 234);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(105, 29);
			this->button7->TabIndex = 3;
			this->button7->Text = L"Quick sort";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(881, 550);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		ofdImportar->Filter = "Archivos separados por coma (csv) | *.csv";
		ofdImportar->FileName = "";

		if (ofdImportar->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			ReestablecerMatriz(); //Se elimina cualquier contenido de la matriz
			txtpa->Text = ofdImportar->FileName;

			//Se utiliza el objeto File para leer el archivo solo cuando el FileName es correcto
			//Importante haber llamado al namespace System::IO antes de usar File
			array<String^>^ archivoLineas = File::ReadAllLines(ofdImportar->FileName);

			if (archivoLineas->Length > 0) {

				//Obtiene la cantidad de elementos de la primer linea y ese toma como cantidad de columnas
				array<String^>^ archivoColumna = archivoLineas[0]->Split(';');
				if (archivoColumna->Length > 0) {
					int cantidadColumnas = archivoColumna->Length;

					//Agrega las columnas
					for (int i = 0; i < cantidadColumnas; i++) {
						//Crea una columna
						DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
						nuevacolumna->Width = 100;
						//Le agrega el tipo de columna que será
						DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
						nuevacolumna->CellTemplate = cellTemplate;
						//Inserta la columna
						dgvMatriz->Columns->Add(nuevacolumna);
					}

					//Agrega las filas de manera dinámica
					for (int i = 0; i < archivoLineas->Length; i++) {
						dgvMatriz->Rows->Add();
					}

					//Llena el DatagridView
					for (int i = 0; i < archivoLineas->Length; i++) {
						array<String^>^ fila = archivoLineas[i]->Split(';');
						int j = 0;

						//Si alguna fila tiene más o menos objetos no afecta al funcionamiento ya que utiliza la cantidad de elementos de la primer fila
						while ((j < cantidadColumnas) && (j < fila->Length)) {
							dgvMatriz->Rows[i]->Cells[j]->Value = fila[j];

							j++;
						}
					}
				}
			}

		}
		else {
			// Si no se selecciona correctamente un elemento entonces falla
			MessageBox::Show("No se seleccionó ningún archivo"
				, "Archivo no seleccionado"
				, MessageBoxButtons::OK
				, MessageBoxIcon::Exclamation);
		}
	}
			private: void ReestablecerMatriz() {
				dgvMatriz->Rows->Clear();
				dgvMatriz->Columns->Clear();
				dgvMatriz->ColumnHeadersVisible = false;
				dgvMatriz->RowHeadersVisible = false;
			};
				   
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	array<String^>^ archivoLineas = File::ReadAllLines(ofdImportar->FileName);
	array<String^>^ fila;
	int aux;
	for (int i = 0; i < 240; i++) {
		fila = archivoLineas[i]->Split(';');
		for (int j = 0; j < 240; j++) {
			if (Convert::ToInt32(fila[j]) > Convert::ToInt32(fila[j + 1])) {

				aux = Convert::ToInt32(fila[j]);
				fila[j] = fila[j + 1];
				fila[j + 1] = Convert::ToString(aux);

			}
		}
	}
	ReestablecerMatriz();

	for (int i = 0; i < archivoLineas->Length; i++) {
		int j = 0;
		//Si alguna fila tiene más o menos objetos no afecta al funcionamiento ya que utiliza la cantidad de elementos de la primer fila
		while ((j < 3) && (j < fila->Length)) {
			dgvMatriz->Rows[i]->Cells[j]->Value = fila[j];

			j++;
		}
	}
	 
}





private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	ofdImportar->Filter = "Archivos separados por coma (csv) | *.csv";
	ofdImportar->FileName = "";

	if (ofdImportar->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		ReestablecerMatriz(); //Se elimina cualquier contenido de la matriz
		txtpa->Text = ofdImportar->FileName;

		//Se utiliza el objeto File para leer el archivo solo cuando el FileName es correcto
		//Importante haber llamado al namespace System::IO antes de usar File
		array<String^>^ archivoLineas = File::ReadAllLines(ofdImportar->FileName);

		if (archivoLineas->Length > 0) {

			//Obtiene la cantidad de elementos de la primer linea y ese toma como cantidad de columnas
			array<String^>^ archivoColumna = archivoLineas[0]->Split(';');
			if (archivoColumna->Length > 0) {
				int cantidadColumnas = archivoColumna->Length;

				//Agrega las columnas
				for (int i = 0; i < cantidadColumnas; i++) {
					//Crea una columna
					DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
					nuevacolumna->Width = 100;
					//Le agrega el tipo de columna que será
					DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
					nuevacolumna->CellTemplate = cellTemplate;
					//Inserta la columna
					dgvMatriz2->Columns->Add(nuevacolumna);
				}

				//Agrega las filas de manera dinámica
				for (int i = 0; i < archivoLineas->Length; i++) {
					dgvMatriz2->Rows->Add();
				}

				//Llena el DatagridView
				for (int i = 0; i < archivoLineas->Length; i++) {
					array<String^>^ fila = archivoLineas[i]->Split(';');
					int j = 0;

					//Si alguna fila tiene más o menos objetos no afecta al funcionamiento ya que utiliza la cantidad de elementos de la primer fila
					while ((j < cantidadColumnas) && (j < fila->Length)) {
						dgvMatriz2->Rows[i]->Cells[j]->Value = fila[j];

						j++;
					}
				}
			}
		}

	}
	else {
		// Si no se selecciona correctamente un elemento entonces falla
		MessageBox::Show("No se seleccionó ningún archivo"
			, "Archivo no seleccionado"
			, MessageBoxButtons::OK
			, MessageBoxIcon::Exclamation);
	}
}
};
}
