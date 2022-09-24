/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:50:14 by merlich           #+#    #+#             */
/*   Updated: 2022/08/08 00:17:56 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// void	showInfo(DiamondTrap const & obj)
// {
// 	std::cout << "######################################" << std::endl;
// 	std::cout << "HIT_POINTS:    " << obj.getHitPoints() << std::endl;
// 	std::cout << "ENERGY_POINTS: " << obj.getEnergyPoints() << std::endl;
// 	std::cout << "ATTACK_DAMAGE: " << obj.getAttackDamage() << std::endl;
// 	std::cout << "######################################" << std::endl;
// }

int	main(void)
{
	DiamondTrap	one("MARV");
	// DiamondTrap	two;
	// DiamondTrap	three("MIKE");
	// DiamondTrap	four(three);

/* Canonical tests */

	// two = one;
	// two.beRepaired(10);
	// three.beRepaired(1);
	// four.beRepaired(1);
	// one.highFivesGuys();
	// one.guardGate();
	// one.whoAmI();
	// two.whoAmI();
	// three.whoAmI();
	// four.whoAmI();
	showInfo(one);
/* Energy points left tests */

	for (int i = 0; i < 100; i++)
	{
		std::cout << i << std::endl;
		one.attack("0");
	}
	
/* Hit points left tests */
	
	// one.takeDamage(90);
	// one.beRepaired(10);
	// one.takeDamage(10);
	// one.takeDamage(40);
	// one.takeDamage(40);
	// one.beRepaired(10);
	// one.attack("0");

	return 0;
}
