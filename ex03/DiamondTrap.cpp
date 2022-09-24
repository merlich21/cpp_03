/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:57:18 by merlich           #+#    #+#             */
/*   Updated: 2022/08/07 20:45:55 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* Constructors and destructor */

DiamondTrap::DiamondTrap( void ) : _name("default")
{
	this->ClapTrap::setName("default_clap_name");
	this->setHitPoints(this->FragTrap::getHitPoints());
	this->setEnergyPoints(this->ScavTrap::getEnergyPoints());
	this->setAttackDamage(this->FragTrap::getAttackDamage());
	std::cout << "Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string const & name ) : _name(name)
{
	this->ClapTrap::setName(name + "_clap_name");
	this->setHitPoints(this->FragTrap::getHitPoints());
	this->setEnergyPoints(this->ScavTrap::getEnergyPoints());
	this->setAttackDamage(this->FragTrap::getAttackDamage());
	std::cout << "Custom constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const & inst ) : _name(inst._name)
{
	this->ClapTrap::setName(inst._name + "_clap_name");
	this->setHitPoints(inst.getHitPoints());
	this->setEnergyPoints(inst.getEnergyPoints());
	this->setAttackDamage(inst.getAttackDamage());
	std::cout << "Copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "Destructor called" << std::endl;
}

/* Assignement operator`s overload */

DiamondTrap	& DiamondTrap::operator=( DiamondTrap const & rhs )
{
	this->_name = rhs._name;
	this->ClapTrap::setName(rhs._name+ "_clap_name");
	this->setHitPoints(rhs.getHitPoints());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setAttackDamage(rhs.getAttackDamage());
	return *this;
}

/* Member function */

void	DiamondTrap::attack( const std::string& target )
{
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap`s name: " << this->getName() << std::endl;
	std::cout << "ClapTrap`s name: " << this->ClapTrap::getName() << std::endl;
}

/* Getters and setters */

std::string		DiamondTrap::getName( void )
{
	return this->_name;
}

void	DiamondTrap::setName( std::string const & name )
{
	this->_name = name;
}
