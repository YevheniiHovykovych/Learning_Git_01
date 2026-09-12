// MyForm.cpp

#include "MyForm.h"

System::Void LearningGit01::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		String^ studentName = textBox1->Text;
		if (String::IsNullOrWhiteSpace(studentName))
		{
			MessageBox::Show("Please enter a valid student name.", "Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		// Add the student to the list
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

System::Void LearningGit01::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		int mark = Int32::Parse(textBox2->Text);
		// Add the mark to the current student
	}
	catch (FormatException^ ex)
	{
		MessageBox::Show("Enter a number");
		MessageBox::Show("Enter something meaningful", "My own tip", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Hand);
	}
}
