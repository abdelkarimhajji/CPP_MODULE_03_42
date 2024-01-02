/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:17:56 by ahajji            #+#    #+#             */
/*   Updated: 2024/01/02 13:05:03 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "This is the constructer FragTrap" << std::endl;
}

FragTrap::FragTrap()
{
    this->name = "fragTrap";
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "This is the default constructer FragTrap" << std::endl;
}
FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy.name)
{
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    std::cout << "This is the copy constructer FragTrap" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap&  copy)
{
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    std::cout << "This is the copy asginemnt operator FragTrap" << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "This is the destructer FragTrap" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name << " requests a high five." << std::endl;
}

