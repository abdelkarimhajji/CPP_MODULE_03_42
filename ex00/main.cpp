/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:32:48 by ahajji            #+#    #+#             */
/*   Updated: 2023/12/17 10:50:58 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    // Create a ClapTrap instance
    ClapTrap clapTrap("CL4P-TP");

    // Test attack, takeDamage, and beRepaired functions
    clapTrap.attack("Enemy1");
    clapTrap.takeDamage(3);
    clapTrap.beRepaired(2);
    clapTrap.attack("Enemy2");

    return 0;
}