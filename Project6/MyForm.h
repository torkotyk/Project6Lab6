#pragma once
#include <vector>

namespace Project6 {
	std::vector<int> vec;
	std::vector<std::vector<int>> matrix;

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
		MyForm(void)
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
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;









	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(21, 22);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1220, 929);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->dataGridView3);
			this->tabPage1->Controls->Add(this->dataGridView2);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Location = System::Drawing::Point(8, 39);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1204, 882);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання 1";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(863, 777);
			this->button3->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(295, 67);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Сортувати";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(473, 777);
			this->button2->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(295, 67);
			this->button2->TabIndex = 10;
			this->button2->Text = L"х2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(54, 777);
			this->button1->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(295, 67);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Заповнити";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView3
			// 
			this->dataGridView3->BackgroundColor = System::Drawing::Color::DarkSeaGreen;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn2 });
			this->dataGridView3->Location = System::Drawing::Point(863, 204);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 82;
			this->dataGridView3->RowTemplate->Height = 33;
			this->dataGridView3->Size = System::Drawing::Size(280, 544);
			this->dataGridView3->TabIndex = 8;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 200;
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::DarkSeaGreen;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn1 });
			this->dataGridView2->Location = System::Drawing::Point(473, 214);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 82;
			this->dataGridView2->RowTemplate->Height = 33;
			this->dataGridView2->Size = System::Drawing::Size(295, 534);
			this->dataGridView2->TabIndex = 7;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 200;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::DarkSeaGreen;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->dataGridView1->Location = System::Drawing::Point(54, 214);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(295, 534);
			this->dataGridView1->TabIndex = 6;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"";
			this->Column1->MinimumWidth = 10;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 200;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(46, 47);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(1112, 124);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"Збільшити вдвічі всі елементи даного одновимірного масиву. Виконати сортування ел"
				L"ементів масиву за спаданням,  використовуючи метод обміну.";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::RosyBrown;
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->dataGridView4);
			this->tabPage2->Location = System::Drawing::Point(8, 39);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1204, 882);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання 2";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::RosyBrown;
			this->button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(436, 257);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(252, 70);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Заповнити";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::RosyBrown;
			this->button4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(417, 765);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(252, 70);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Обчислити";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::RosyBrown;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(631, 170);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(147, 59);
			this->textBox3->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::RosyBrown;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(631, 80);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(147, 59);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(255, 170);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(340, 52);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Кількість стовпців";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(255, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(295, 52);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Кількість рядків";
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeight = 46;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column2,
					this->Column3, this->Column4, this->Column5
			});
			this->dataGridView4->Location = System::Drawing::Point(131, 349);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 82;
			this->dataGridView4->RowTemplate->Height = 33;
			this->dataGridView4->Size = System::Drawing::Size(960, 367);
			this->dataGridView4->TabIndex = 0;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"";
			this->Column2->MinimumWidth = 10;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 80;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"";
			this->Column3->MinimumWidth = 10;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 80;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"";
			this->Column4->MinimumWidth = 10;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 80;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"";
			this->Column5->MinimumWidth = 10;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 80;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1252, 963);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"Лабораторна робота 6";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Random^ rand = gcnew Random();

		dataGridView1->Rows->Clear();
		vec.clear(); // Очищаємо вектор перед новим заповненням
		for (int i = 0; i < 10; i++)
		{
			int num = rand->Next(1, 100);  // Генеруємо випадкові числа
			vec.push_back(num);  // Додаємо в вектор
			dataGridView1->Rows->Add(gcnew array<Object^> {num});  // Виводимо в перший DataGridView
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView2->Rows->Clear();  // Очищаємо dataGridView2 перед додаванням нових даних
		for (int i = 0; i < vec.size(); i++)
		{
			int doubledValue = vec[i] * 2;  // Збільшуємо кожен елемент вдвічі
			dataGridView2->Rows->Add(gcnew array<Object^> {doubledValue});  // Виводимо в другий DataGridView
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		std::vector<int> doubledVec;
		for (int i = 0; i < dataGridView2->Rows->Count; i++) {
			// Перевірка, щоб не зчитувати порожній рядок
			if (dataGridView2->Rows[i]->Cells[0]->Value != nullptr) {
				doubledVec.push_back(Convert::ToInt32(dataGridView2->Rows[i]->Cells[0]->Value)); // Додаємо значення в новий вектор
			}
		}

		dataGridView3->Rows->Clear();  // Очищаємо dataGridView3 перед додаванням нових даних

		// Сортуємо масив за спаданням
		int n = doubledVec.size();
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < n - i - 1; j++) {
				if (doubledVec[j] < doubledVec[j + 1]) {
					// Обмін елементів без використання окремої функції
					int temp = doubledVec[j];         // Зберігаємо значення doubledVec[j] у тимчасову змінну
					doubledVec[j] = doubledVec[j + 1]; // Присвоюємо значення doubledVec[j + 1] до doubledVec[j]
					doubledVec[j + 1] = temp;        // Присвоюємо значення temp до doubledVec[j + 1]
				}
			}
		}

		// Виводимо відсортовані значення у третій DataGridView
		for (int i = 0; i < doubledVec.size(); i++) {
			dataGridView3->Rows->Add(gcnew array<Object^> {doubledVec[i]});  // Виводимо відсортовані значення
		}
	}
    private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		int rows = Convert::ToInt32(textBox2->Text);
		int cols = Convert::ToInt32(textBox3->Text);

		matrix = std::vector<std::vector<int>>(rows, std::vector<int>(cols));  // Створення двовимірної матриці
		Random^ rand = gcnew Random();

		dataGridView4->Rows->Clear();
		dataGridView4->Columns->Clear();

		// Додаємо стовпці до DataGridView
		for (int j = 0; j < cols; j++) {
			dataGridView4->Columns->Add("Column" + j, "Column " + (j + 1));
		}

		// Заповнення матриці випадковими числами
		for (int i = 0; i < rows; i++) {
			dataGridView4->Rows->Add(gcnew array<Object^>(cols));  // Додаємо рядок до DataGridView
			for (int j = 0; j < cols; j++) {
				int num = rand->Next(1, 100);  // Генеруємо випадкове число
				matrix[i][j] = num;  // Записуємо це число в масив
				dataGridView4->Rows[i]->Cells[j]->Value = num;  // Виводимо число в DataGridView
			}
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		int sum = 0;
		for (int i = 0; i < matrix.size(); i++) {
			for (int j = 0; j < matrix[i].size(); j++) {
				sum += matrix[i][j] * matrix[i][j];  // Обчислюємо квадрат кожного елемента
			}
		}
		// Ось де ви маєте викликати MessageBox
		MessageBox::Show("Sum of squares of matrix elements: " + sum.ToString("0"), "Result");
	}
};
}
