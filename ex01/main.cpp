/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:32:48 by ahajji            #+#    #+#             */
/*   Updated: 2024/01/02 13:14:55 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


int main(void)
{
    ClapTrap claptrap("karim");
	std::cout << "_______________________________\n" << std::endl;
	ScavTrap scavtrap("simo");
	std::cout << "_______________________________\n" << std::endl;
	claptrap.attack("Enemy1");
	claptrap.takeDamage(3);
	claptrap.beRepaired(1);
	claptrap.attack("Enemy2");
	claptrap.takeDamage(13);
	claptrap.beRepaired(7);
	std::cout << "_______________________________\n" << std::endl;
	scavtrap.attack("Enemy3");
	std::cout << "_______________________________\n" << std::endl;
	scavtrap.takeDamage(12);
	std::cout << "_______________________________\n" << std::endl;
	scavtrap.guardGate();
	std::cout << "_______________________________\n" << std::endl;
    
    return 0;
}