/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 23:28:09 by merlich           #+#    #+#             */
/*   Updated: 2022/08/07 18:37:04 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:

	/* Constructors and destructors */

		FragTrap( void );
		FragTrap( FragTrap const & inst );
		FragTrap( std::string const & name );
		~FragTrap( void );

	/* Assignement operator`s overload */

		FragTrap &	operator=( FragTrap const & rhs );

	/* Member functions */

		void	attack( const std::string& target );
		void	highFivesGuys(void) const;

	private:


};



#endif