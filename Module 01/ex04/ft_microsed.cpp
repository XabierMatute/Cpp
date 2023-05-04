/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_microsed.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:02:43 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/04 19:45:20 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>

int	

int	microsed(std::string filename, std::string s1, std::string s2)
{
	std::cout << s1;

	if (s1.size() == 0)
	{
		std::cerr << "❌Error: no voy a intentar sustituir la nada\n";
		return 1;
	}
	std::ifstream file(filename);
	if (!file)
	{
		std::cerr << "❌Error: no se pudo abrir el archivo\n";
		return 1;
	}
	std::ofstream newFile(filename + ".replace", std::ios::out);
	if (!newFile.is_open())
	{
		std::cerr << "❌Error: no se pudo crear el nuevo archivo\n";
		file.close();
		return 1;
	}
	
	char	*buff = new char[s1.size() + 1];

	while (file.read(buff, s1.size()))
	{
		buff[s1.size()] = '\0';
		if (s1 == buff)
			newFile << s2;
		else
		{
			newFile << buff[0];
			file.seekg(- s1.size() + file.tellg() + 1);
		}
	}
	delete[](buff);
	file.close();
	newFile.close();
	return 0;
}

int main(int argc, char const *argv[])
{
	printf("%s", argv[2]);
	
	if (argc != 4)
		std::cerr << "❌Error: Espero tres argumentos: Un nombre de archivo y dos strings, s1 y s2\n";
	else
		return (microsed(argv[1], argv[2], argv[3]));
	return 1;
}
