/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 22:02:35 by merlich           #+#    #+#             */
/*   Updated: 2022/08/07 18:36:21 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* Constructors and destructors */

ScavTrap::ScavTrap( void )
{
	this->setName("default");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & inst )
{
	this->setName(inst.getName());
	this->setHitPoints(inst.getHitPoints());
	this->setEnergyPoints(inst.getEnergyPoints());
	this->setAttackDamage(inst.getAttackDamage());
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string const & name )
{
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap custom constructor called" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

/* Assignement operator`s overloading */

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs )
{
	this->setName(rhs.getName());
	this->setHitPoints(rhs.getHitPoints());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setAttackDamage(rhs.getAttackDamage());
	return *this;
}

/* Member functions */

void	ScavTrap::guardGate( void ) const
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode!" << std::endl;
}

void	ScavTrap::attack( const std::string& target )
{
	unsigned int	energyPoints = this->getEnergyPoints();

	if (this->getHitPoints() > 0 && energyPoints)
	{
		this->setEnergyPoints(energyPoints - 1);
		std::cout << "ScavTrap " << this->getName() << " attacks " << target;
		std::cout << ", causing " << this->getAttackDamage() << " points of damage!";
		std::cout << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->getName() << " can`t do anything!";
		std::cout << " It has no hit points or energy points left." << std::endl;
	}
}
