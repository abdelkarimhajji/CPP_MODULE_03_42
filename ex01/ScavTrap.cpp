/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 10:55:03 by ahajji            #+#    #+#             */
/*   Updated: 2023/12/19 13:02:50 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "i am from scavTrap consturcter\n";
}

ScavTrap::~ScavTrap() 
{
    std::cout << "i am from scavTrap descructer\n";
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now is grate keeper" << std::endl;
}
void ScavTrap::attack(const std::string& target)
{
    if(this->hitPoints > 0 && this->energyPoints > 0)
        {
            this->energyPoints--;
            std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing ";
            std::cout << this->attackDamage << " points of damage!" << std::endl;
        }
        else
            std::cout << "ScavTrap " << this->name << " can not attack because he dosen't have hit point or energy points\n";
}