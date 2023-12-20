/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:42:59 by ahajji            #+#    #+#             */
/*   Updated: 2023/12/17 10:28:55 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}
ClapTrap::~ClapTrap()
{
    
}

void ClapTrap::attack(const std::string& target)
{
    if(this->hitPoints > 0 && this->energyPoints > 0)
    {
        this->energyPoints--;
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing ";
        std::cout << this->attackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << " can not attack because he dosen't have hit point or energy points\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints > 0)
    {
        this->hitPoints    -= amount;
        std::cout << "ClapTrap " << this->name << " takes " << amount << " ponts of damage ";
        std::cout << "my hitpoint " << this->hitPoints << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << " is defeated" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoints > 0)
    {
        this->energyPoints--;
        this->hitPoints += amount;
        std::cout << "ClapTrap " << this->name << " is reapaird for " << amount << " points. my hitpoint ";
        std::cout << this->hitPoints << " and my energyPoints is " << this->energyPoints << std::endl;   
    }
}