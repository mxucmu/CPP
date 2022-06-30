/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:14:22 by mxu               #+#    #+#             */
/*   Updated: 2021/07/28 18:24:34 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ACCOUNT_HPP_
#define _ACCOUNT_HPP_

#include <string>
#include <iostream>

class Account
{
    static int  _nbAccounts = 0;
    static int  _totalAmount = 0;
    static int  _totalNbDeposits = 0;
    static int  _totalNbWithdrawals = 0;
    int         _accountIndex;
    int         _amount;
    int         _nbDeposits;
    int         _nbWithdrawals;

    static void _displayTimestamp(void);
    Account(void);

public:

    typedef Account t;
    Account(int initial_deposit);
    ~Account(void);
    static int  getNbAccounts(void);
    static int  getTotalAmount(void);
    static int  getNbDeposits(void);
    static int  getNbWithdrawals(void);
    static void displayAccountsInfos(void);
    void        makeDeposit(int deposit);
    bool        makeWithdrawal(int withdrawal);
    int         checkAmount(void) const;
    void        displayStatus(void) const;
};

#endif
