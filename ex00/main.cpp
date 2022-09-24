/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:50:14 by merlich           #+#    #+#             */
/*   Updated: 2022/08/07 16:47:03 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	one("Marv");
	// ClapTrap	two;
	// ClapTrap	three("Mike");
	// ClapTrap	four(three);

/* Canonical tests */

	// two = one;
	// two.beRepaired(10);
	// three.beRepaired(1);
	// four.beRepaired(1);

/* Energy points left tests */

	// for (int i = 0; i < 20; i++)
	// {
	// 	std::cout << i << std::endl;
	// 	one.attack("0");
	// }
	
/* Hit points left tests */

	one.takeDamage(9);
	one.beRepaired(1);
	one.takeDamage(1);
	one.takeDamage(4);
	one.takeDamage(4);
	one.beRepaired(1);
	one.attack("0");

	return 0;
}
