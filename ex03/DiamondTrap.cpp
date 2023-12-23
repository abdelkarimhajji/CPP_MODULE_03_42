/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:38:16 by ahajji            #+#    #+#             */
/*   Updated: 2023/12/23 10:46:56 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 30;
    std::cout << "This is the constructer DiamondTrap" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "This is the deconstructer DiamondTrap" << std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "DiamonTrap " << this->name << std::endl;
    std::cout << "ClapTrap" << ClapTrap::name << std::endl;
}
