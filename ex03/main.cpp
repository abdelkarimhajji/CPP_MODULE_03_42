/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:32:48 by ahajji            #+#    #+#             */
/*   Updated: 2023/12/19 15:47:05 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    // Create a ClapTrap instance
    FragTrap fragTrap("CL4P-TP");

    // Test attack, takeDamage, and beRepaired functions
    fragTrap.attack("Enemy1");
    fragTrap.takeDamage(3);
    fragTrap.beRepaired(2);
    fragTrap.attack("Enemy2");

    return 0;
}