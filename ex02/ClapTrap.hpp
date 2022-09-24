/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:51:09 by merlich           #+#    #+#             */
/*   Updated: 2022/08/07 18:36:56 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class	ClapTrap
{
	public:
	
	/* Constructors and destructors */

		ClapTrap( void );
		ClapTrap( ClapTrap const & inst );
		ClapTrap( std::string const & name );
		~ClapTrap( void );

	/* Assignement operator`s overload */

		ClapTrap &	operator=( ClapTrap const & rhs );

	/* Getters and setters */

		std::string		getName( void ) const;
		void			setName( std::string name);

		int				getHitPoints( void ) const;
		void			setHitPoints( unsigned int hit_points);

		unsigned int	getEnergyPoints( void ) const;
		void			setEnergyPoints( unsigned int energy_points);

		unsigned int	getAttackDamage( void ) const;
		void			setAttackDamage( unsigned int attack_damage);

	/* Member functions */

		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

	private:

		std::string		_name;
		int				_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

};

#endif
