/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:51:16 by merlich           #+#    #+#             */
/*   Updated: 2022/08/07 18:35:42 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Constructors and destructors */

ClapTrap::ClapTrap( void ) : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & inst ) : _name(inst.getName()), _hitPoints(inst.getHitPoints()), _energyPoints(inst.getEnergyPoints()), _attackDamage(inst.getAttackDamage())
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string const & name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Custom constructor called" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "Default destructor called" << std::endl;
}

/* Assignement operator`s overload */

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs )
{
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return *this;
}

/* Getters */

std::string		ClapTrap::getName( void ) const{
	return this->_name;
}

int				ClapTrap::getHitPoints( void ) const{
	return this->_hitPoints;
}

unsigned int	ClapTrap::getEnergyPoints( void ) const{
	return this->_energyPoints;
}

unsigned int	ClapTrap::getAttackDamage( void ) const{
	return this->_attackDamage;
}

/* Setters */

void	ClapTrap::setName( std::string name){
	this->_name = name;
}

void	ClapTrap::setHitPoints( unsigned int hit_points){
	this->_hitPoints = hit_points;
}

void	ClapTrap::setEnergyPoints( unsigned int energy_points){
	this->_energyPoints = energy_points;
}

void	ClapTrap::setAttackDamage( unsigned int attack_damage){
	this->_attackDamage = attack_damage;
}

/* Member functions */

void	ClapTrap::attack( const std::string& target )
{
	if (this->_hitPoints > 0 && this->_energyPoints)
	{
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage << " points of damage!";
		std::cout << std::endl;
	}
	else
	{
		std::cout << "ClapTrap can`t do anything!";
		std::cout << " It has no hit points or energy points left." << std::endl;
	}
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_hitPoints > 0)
	{
		this->_hitPoints -= amount;
		std::cout << "ClapTrap " << this->_name << " takes damage";
		std::cout << " and loses " << amount << " hit points!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
	// std::cout << "POINTS LEFT: " << this->_hitPoints << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_hitPoints > 0 && this->_energyPoints)
	{
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout << "ClapTrap " << this->_name << " repairs itself";
		std::cout << " and gets " << amount << " hit points back!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " can`t do anything!";
		std::cout << " It has no hit points or energy points left." << std::endl;
	}
	// std::cout << "POINTS LEFT: " << this->_hitPoints << std::endl;
}
