#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("NoTarget")
{
	std::cout << "ShrubberyCreationForm Default Constructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	_target = target;
	std::cout << "ShrubberyCreationForm String (Target) Constructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : AForm(src)
{
	this->_target = src._target;
	std::cout << "ShrubberyCreationForm Copy Constructor Called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor Called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs._target;
		std::cout << "ShrubberyCreationForm Copy Assignment Operator Called" << std::endl;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
{
	o << "Name = " << i.getName();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ShrubberyCreationForm::formFunction() const
{
	std::ofstream	file;
	std::string		filename;
	std::cout << _target << std::endl;
	filename = this->_target;
	filename.append("_shrubbery");
	file.open(filename.c_str(), std::ios::in | std::ios::trunc);
	if (!file)
		std::cout << "Error: Unable to create " << filename << std::endl;
	else
	{
		file << "                                                         ." << std::endl;
		file << "                                              .         ;  " << std::endl;
		file << "                 .              .              ;%     ;;   " << std::endl;
		file << "                   ,           ,                :;%  %;   " << std::endl;
		file << "                    :         ;                   :;%;'     .,   " << std::endl;
		file << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
		file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
		file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
		file << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
		file << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
		file << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
		file << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
		file << "                      `@%:.  :;%.         ;@@%;'   " << std::endl;
		file << "                        `@%.  `;@%.      ;@@%;         " << std::endl;
		file << "                          `@%%. `@%%    ;@@%;        " << std::endl;
		file << "                            ;@%. :@%%  %@@%;       " << std::endl;
		file << "                              %@bd%%%bd%%:;     " << std::endl;
		file << "                                #@%%%%%:;;" << std::endl;
		file << "                                %@@%%%::;" << std::endl;
		file << "                                %@@@%(o);  . '         " << std::endl;
		file << "                                %@@@o%;:(.,'         " << std::endl;
		file << "                            `.. %@@@o%::;         " << std::endl;
		file << "                               `)@@@o%::;         " << std::endl;
		file << "                                %@@(o)::;        " << std::endl;
		file << "                               .%@@@@%::;         " << std::endl;
		file << "                               ;%@@@@%::;.          " << std::endl;
		file << "                              ;%@@@@%%:;;;. " << std::endl;
		file << "                          ...;%@@@@@%%:;;;;,.." << std::endl;
	}
	file.close();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */