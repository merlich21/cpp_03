/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:57:15 by merlich           #+#    #+#             */
/*   Updated: 2022/08/07 20:45:49 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{
	public:

	/* Constructors and destructor */

		DiamondTrap( void );
		DiamondTrap( std::string const & name );
		DiamondTrap( DiamondTrap const & inst );
		~DiamondTrap( void );

	/* Assignement operator`s overload */

		DiamondTrap	& operator=( DiamondTrap const & rhs );

	/* Member function */

		void	attack( const std::string& target );
		void	whoAmI( void );

	/* Getters and setters */

		std::string		getName( void );
		void			setName( std::string const & name );

	private:

		std::string	_name;

};


#endif
