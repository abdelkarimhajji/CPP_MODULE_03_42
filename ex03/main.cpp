/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:32:48 by ahajji            #+#    #+#             */
/*   Updated: 2024/01/02 13:19:44 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    ClapTrap claptrap("karim");
	std::cout << "____________________________\n" << std::endl;
	ScavTrap scavtrap("scavtrap");
	std::cout << "____________________________\n" << std::endl;
	FragTrap fragtrap("fragtrap");
	std::cout << "____________________________\n" << std::endl;
	DiamondTrap diamoundtap("diamond");
	std::cout << "____________________________\n" << std::endl;
	claptrap.attack("Enemy1");
	claptrap.takeDamage(6);
	claptrap.beRepaired(5);
    std::cout << "____________________________\n" << std::endl;
	claptrap.attack("Enemy2");
	claptrap.takeDamage(15);
	claptrap.beRepaired(9);
	std::cout << "____________________________\n" << std::endl;
	scavtrap.attack("Enemy3");
	scavtrap.takeDamage(14);
	scavtrap.guardGate();
	std::cout << "____________________________\n" << std::endl;
	fragtrap.attack("Enemy4");
	fragtrap.takeDamage(11);
	fragtrap.highFivesGuys();
	std::cout << "____________________________\n" << std::endl;
	diamoundtap.whoAmI();
	std::cout << "____________________________\n" << std::endl;

    return 0;
}