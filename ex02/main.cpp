/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:32:48 by ahajji            #+#    #+#             */
/*   Updated: 2024/01/02 20:15:06 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap claptrap("karim");
	std::cout << "_____________________\n" << std::endl;
	ScavTrap scavtrap("scavtrap");
	std::cout << "_____________________\n" << std::endl;
	FragTrap fragtrap("fragtrap");
	std::cout << "_____________________\n" << std::endl;
	claptrap.attack("Enemy1");
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);
	std::cout << "_____________________\n" << std::endl;
	claptrap.attack("Enemy2");
	claptrap.takeDamage(13);
	claptrap.beRepaired(9);
	std::cout << "_____________________\n" << std::endl;
	scavtrap.attack("Enemy3");
	scavtrap.takeDamage(14);
	scavtrap.guardGate();
	std::cout << "_____________________\n" << std::endl;
	fragtrap.attack("Enemy4");
	fragtrap.takeDamage(9);
	fragtrap.highFivesGuys();
	std::cout << "_____________________\n" << std::endl;

    return 0;
}