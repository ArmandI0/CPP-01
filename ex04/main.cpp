#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{

	if (ac != 4)
		return (1);
	std::string	str;
	std::string out;
	int	pos;
	std::ifstream infile(av[1]);
	std::string s_word = av[2];
	std::string r_word = av[3];

	if(infile)
	{
		while(getline(infile, str))
		{
			while((pos = str.find(s_word)) != -1)
				str.replace(pos, s_word.length(), av[3]);
			out.append(str);
			out.append("\n");
		}
	}
	std::ofstream outfile("test");
	outfile << out;
	return 0;
}