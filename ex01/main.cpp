/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:32:48 by ahajji            #+#    #+#             */
/*   Updated: 2024/01/02 12:10:42 by ahajji           ###   ########.fr       */
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
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);
	claptrap.attack("Enemy2");
	claptrap.takeDamage(12);
	claptrap.beRepaired(8);
	std::cout << "_______________________________\n" << std::endl;
	scavtrap.attack("Enemy3");
	std::cout << "_______________________________\n" << std::endl;
	scavtrap.takeDamage(15);
	std::cout << "_______________________________\n" << std::endl;
	scavtrap.guardGate();
	std::cout << "_______________________________\n" << std::endl;
    
    return 0;
}