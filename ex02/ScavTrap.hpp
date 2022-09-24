/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 22:02:37 by merlich           #+#    #+#             */
/*   Updated: 2022/08/07 18:37:21 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:

	/* Constructors and destructors */

		ScavTrap( void );
		ScavTrap( ScavTrap const & inst );
		ScavTrap( std::string const & name );
		~ScavTrap( void );

	/* Assignement operator`s overloading */

		ScavTrap &	operator=( ScavTrap const & rhs );

	/* Member functions */

		void	attack( const std::string& target );
		void	guardGate( void ) const;

	private:

};


#endif