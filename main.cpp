#include "std_lib_facilities.h"

int main()
{
	
vector<std::string> the_numz_in_our_string_splt_out = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	vector<int> reg_digits = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	
	std::cout << "Enter 2 numbers (digit or spelled-out) and the operator\n" << "separate it by 1 space ('*','+' '/', '-',)\n";

	char this_is_the_operation = 'e';
	bool our_correct_input_first_one = false;
	bool our_correct_input_second_one = false;
	std::string the_first_number_you_inputted;
	std::string scndnumberinputted;

	while (this_is_the_operation!= 'q')
	{
		std::cin >> the_first_number_you_inputted >> scndnumberinputted >> this_is_the_operation;

		int VC;
		int the_fst_value = 0;
		for (size_t VC = 0; VC < reg_digits.size(); VC++)
		{
			if (the_first_number_you_inputted == std::to_string(reg_digits[VC]))
			{
				
				the_fst_value = reg_digits[VC];
				our_correct_input_first_one = true;
			}
		}

		for (size_t VC = 0; VC < the_numz_in_our_string_splt_out.size(); VC++)
		{
			if (the_first_number_you_inputted == the_numz_in_our_string_splt_out[VC])
			{
				the_fst_value = reg_digits[VC];
				our_correct_input_first_one = true;
			}
		}

		
		int SND_VALUE = 0;
		for (size_t VC = 0; VC < reg_digits.size(); ++VC)
		{
			if (scndnumberinputted == std::to_string(reg_digits[VC]))
			{
				SND_VALUE = reg_digits[VC];
				our_correct_input_second_one = true;
			}
		}

		for (size_t VC = 0; VC < the_numz_in_our_string_splt_out.size(); VC++)
		{
			if (scndnumberinputted == the_numz_in_our_string_splt_out[VC])
			{
				SND_VALUE = reg_digits[VC];
				our_correct_input_second_one = true;
			}
		}

		
		double this_is_the_solution_of_it = 0;

		switch (this_is_the_operation)
		{
		    
		    case '*':
			this_is_the_solution_of_it  = SND_VALUE * the_fst_value;
			std::cout << "When multiplying " << the_fst_value << " and " << SND_VALUE << " it's " << this_is_the_solution_of_it  << "\n\n";
			break;
		
		case '+':
			this_is_the_solution_of_it  = SND_VALUE + the_fst_value ;
			std::cout << "When you're adding " << the_fst_value << " and " << SND_VALUE << " it's " << this_is_the_solution_of_it  << "\n\n";
			break;


		case '/':
			this_is_the_solution_of_it  = the_fst_value / SND_VALUE;
			std::cout << "When you are dividing " << the_fst_value << " and " << SND_VALUE << " it's " << this_is_the_solution_of_it  << "\n\n";
			break;
			
			case '-':
			this_is_the_solution_of_it  = the_fst_value - SND_VALUE;
			std::cout << "When you are subtracting " << the_fst_value << " and " << SND_VALUE << " it's " << this_is_the_solution_of_it  << "\n\n";
			break;
		
		}

	}



	return 0;
}#include "std_lib_facilities.h"

int main()
{
	
vector<std::string> the_numz_in_our_string_splt_out = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	vector<int> reg_digits = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	
	std::cout << "Enter 2 numbers (digit or spelled-out) and the operator\n" << "separate it by 1 space ('*','+' '/', '-',)\n";

	char this_is_the_operation = 'e';
	bool our_correct_input_first_one = false;
	bool our_correct_input_second_one = false;
	std::string the_first_number_you_inputted;
	std::string scndnumberinputted;

	while (this_is_the_operation!= 'q')
	{
		std::cin >> the_first_number_you_inputted >> scndnumberinputted >> this_is_the_operation;

		int VC;
		int the_fst_value = 0;
		for (size_t VC = 0; VC < reg_digits.size(); VC++)
		{
			if (the_first_number_you_inputted == std::to_string(reg_digits[VC]))
			{
				
				the_fst_value = reg_digits[VC];
				our_correct_input_first_one = true;
			}
		}

		for (size_t VC = 0; VC < the_numz_in_our_string_splt_out.size(); VC++)
		{
			if (the_first_number_you_inputted == the_numz_in_our_string_splt_out[VC])
			{
				the_fst_value = reg_digits[VC];
				our_correct_input_first_one = true;
			}
		}

		
		int SND_VALUE = 0;
		for (size_t VC = 0; VC < reg_digits.size(); ++VC)
		{
			if (scndnumberinputted == std::to_string(reg_digits[VC]))
			{
				SND_VALUE = reg_digits[VC];
				our_correct_input_second_one = true;
			}
		}

		for (size_t VC = 0; VC < the_numz_in_our_string_splt_out.size(); VC++)
		{
			if (scndnumberinputted == the_numz_in_our_string_splt_out[VC])
			{
				SND_VALUE = reg_digits[VC];
				our_correct_input_second_one = true;
			}
		}

		
		double this_is_the_solution_of_it = 0;

		switch (this_is_the_operation)
		{
		    
		    case '*':
			this_is_the_solution_of_it  = SND_VALUE * the_fst_value;
			std::cout << "When multiplying " << the_fst_value << " and " << SND_VALUE << " it's " << this_is_the_solution_of_it  << "\n\n";
			break;
		
		case '+':
			this_is_the_solution_of_it  = SND_VALUE + the_fst_value ;
			std::cout << "When you're adding " << the_fst_value << " and " << SND_VALUE << " it's " << this_is_the_solution_of_it  << "\n\n";
			break;


		case '/':
			this_is_the_solution_of_it  = the_fst_value / SND_VALUE;
			std::cout << "When you are dividing " << the_fst_value << " and " << SND_VALUE << " it's " << this_is_the_solution_of_it  << "\n\n";
			break;
			
			case '-':
			this_is_the_solution_of_it  = the_fst_value - SND_VALUE;
			std::cout << "When you are subtracting " << the_fst_value << " and " << SND_VALUE << " it's " << this_is_the_solution_of_it  << "\n\n";
			break;
		
		}

	}



	return 0;
}
