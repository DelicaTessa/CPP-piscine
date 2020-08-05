/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 14:43:18 by tclement      #+#    #+#                 */
/*   Updated: 2020/08/05 15:56:02 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"

Account::Account (int initial_deposit)
{
    return;
}

Account::~Account (void)
{
    return;
}

int	Account::getNbAccounts( void )
{
    return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (Account::_totalNbWithdrawals);
}

void	displayAccountsInfos( void );
}