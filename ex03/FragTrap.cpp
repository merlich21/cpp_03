/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 23:28:07 by merlich           #+#    #+#             */
/*   Updated: 2022/08/07 18:56:39 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* Constructors and destructors */

FragTrap::FragTrap( void )
{
	this->setName("default");
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap( FragTrap const & inst )
{
	this->setName(inst.getName());
	this->setHitPoints(inst.getHitPoints());
	this->setEnergyPoints(inst.getEnergyPoints());
	this->setAttackDamage(inst.getAttackDamage());
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::FragTrap( std::string const & name )
{
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap custom constructor called" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap destructor called" << std::endl;
}

/* Assignement operator`s overloading */

FragTrap &	FragTrap::operator=( FragTrap const & rhs )
{
	this->setName(rhs.getName());
	this->setHitPoints(rhs.getHitPoints());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setAttackDamage(rhs.getAttackDamage());
	return *this;
}

/* Member functions */

void	FragTrap::highFivesGuys( void ) const
{
	std::cout << "FragTrap " << this->getName() << " says: 'High five, bro!'" << std::endl;
}

void	FragTrap::attack( const std::string& target )
{
	unsigned int	energyPoints = this->getEnergyPoints();

	if (this->getHitPoints() > 0 && energyPoints)
	{
		this->setEnergyPoints(energyPoints - 1);
		std::cout << "FragTrap " << this->getName() << " attacks " << target;
		std::cout << ", causing " << this->getAttackDamage() << " points of damage!";
		std::cout << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << this->getName() << " can`t do anything!";
		std::cout << " It has no hit points or energy points left." << std::endl;
	}
}
