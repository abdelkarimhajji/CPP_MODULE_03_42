/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:38:16 by ahajji            #+#    #+#             */
/*   Updated: 2024/01/02 13:12:58 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 30;
    std::cout << "This is the constructer param DiamondTrap" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "This is the deconstructer DiamondTrap" << std::endl;
}
DiamondTrap::DiamondTrap()
{
    this->name = "dimon";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 30;
    std::cout << "This is default constructer DiamondTrap" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy.name + "_clap_name"), ScavTrap(copy.name), FragTrap(copy.name)
{
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    std::cout << "This is the copy constructer diamontrap" << std::endl;
}


DiamondTrap& DiamondTrap::operator=(const DiamondTrap &copy) 
{
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    std::cout << "This is the copy asignment operator diamontrap" << std::endl;
    return *this; 
}
void    DiamondTrap::whoAmI()
{
    std::cout << "call whoAmI from diamondTrap" << std::endl;
    std::cout << "DiamonTrap " << this->name << std::endl;
    std::cout << "ClapTrap" << ClapTrap::name << std::endl;
}
