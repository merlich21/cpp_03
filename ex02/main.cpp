/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:50:14 by merlich           #+#    #+#             */
/*   Updated: 2022/08/07 16:53:59 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	one("Marv");
	// ScavTrap	two;
	// ScavTrap	three("Mike");
	// ScavTrap	four(three);

/* Canonical tests */

	// two = one;
	// two.beRepaired(10);
	// three.beRepaired(1);
	// four.beRepaired(1);
	one.highFivesGuys();

/* Energy points left tests */

	for (int i = 0; i < 100; i++)
	{
		std::cout << i << std::endl;
		one.attack("0");
	}
	
/* Hit points left tests */
	
	one.takeDamage(90);
	one.beRepaired(10);
	one.takeDamage(10);
	one.takeDamage(40);
	one.takeDamage(40);
	one.beRepaired(10);
	one.attack("0");

	return 0;
}
