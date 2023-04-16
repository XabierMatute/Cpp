/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:36:07 by xmatute-          #+#    #+#             */
/*   Updated: 2023/04/16 13:38:22 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

const std::string	FEEDBACK_NOISE = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
const char			NEWLINE = '\n';

static void	megaphone(const std::string &s)
{
	std::transform(s.begin(), s.end(), std::ostream_iterator<char>(std::cout),
				::toupper);
}

int		main(int argc, char *argv[])
{
	if (argc == 1)
		megaphone(FEEDBACK_NOISE);
	else
		std::for_each(argv + 1, argv + argc, megaphone);
	std::cout << NEWLINE;
	return 0;
}
