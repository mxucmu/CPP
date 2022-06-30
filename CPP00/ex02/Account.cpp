/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:15:04 by mxu               #+#    #+#             */
/*   Updated: 2021/07/28 18:34:43 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account(int initial_deposit)
{
    _nbAccounts += 1;
    _totalAmount += initial_deposit;
    _accountIndex = 
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void) 
{
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

static int  Account::getNbAccounts(void) {return _nbAccounts;}

static int  Account::getTotalAmount(void) {return _totalAmount;}

static int  Account::getNbDeposits(void) {return _totalNbDeposits;}

static int  Account::getNbWithdrawals(void) {return _totalNbWithdrawals;}

static void Account::displayAccountsInfos(void)
{
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" \
    << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void        Account::makeDeposit(int deposit)
{
    int p_amount = _amount;
    _totalAmount += deposit;
    _totalNbDeposits += 1;
    _amount += deposit;
    _nbDeposits += 1;
    std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit:" \
        << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool        Account::makeWithdrawal(int withdrawal)
{
    int p_amount = _amount;
    if (withdrawal <= _amount)
    {
        _totalAmount -= withdrawal;
        _totalNbWithdrawals += 1;
        _amount -= withdrawal;
        _nbWithdrawals += 1;
        std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:" \
            << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    }
    else
        std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:refused" \
             << std::endl;
}

int         Account::checkAmount(void) const {return _amount;}

void        Account::displayStatus(void) const
{
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" \
        << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}
