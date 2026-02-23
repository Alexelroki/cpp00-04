/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 12:14:37 by adruz-to          #+#    #+#             */
/*   Updated: 2026/01/19 15:50:22 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime> // for _displayTimestamp()

/* Static variables */
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/* Private funtion */
void	Account::_displayTimestamp(void)
{
	std::time_t rawTime;
	std::tm		*timeInfo;

	std::time(&rawTime);
	timeInfo = std::localtime(&rawTime);
	
	std::cout << "[" << timeInfo->tm_year + 1900;

	if (timeInfo->tm_mon + 1 < 10)
		std::cout << "0";
	std::cout << timeInfo->tm_mon + 1;

	if (timeInfo->tm_mday < 10)
		std::cout << "0";
	std::cout << timeInfo->tm_mday << "_";

	if (timeInfo->tm_hour < 10)
		std::cout << "0";
	std::cout << timeInfo->tm_hour;

	if (timeInfo->tm_min < 10)
		std::cout << "0";
	std::cout << timeInfo->tm_min;

	if (timeInfo->tm_sec < 10)
		std::cout << "0";
	std::cout << timeInfo->tm_sec << "]";
}

/* Constructor */
Account::Account(int initial_deposit)
	: _accountIndex(_nbAccounts),
	  _amount(initial_deposit),
	  _nbDeposits(0),
	  _nbWithdrawals(0)
{
	_displayTimestamp();
	std::cout << "index" << _accountIndex
			  << ";amount:" << _amount
			  << ";created" << std::endl;
	_nbAccounts++;
	_totalAmount += _amount;
}

/* Destructor */
Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			 << ";amount:" << _amount
			 << ";closed" << std::endl;
}

/****************** Methods ******************/

// Getters
int	Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return _totalAmount;
}

int	Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accouts:" << _nbAccounts
			<< ";total:" << _totalAmount
			<< ";deposits:" << _totalNbDeposits
			<< ";withdrawals:" << _totalNbWithdrawals
			<< std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";p_amount:" << _amount
			<< ";deposit:" << deposit;
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;

	std::cout << ";amount:" << _amount
			<< ";nb_deposits:" << _nbDeposits
			<< std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";pamount:" << _amount;
	
	if (withdrawal > _amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}

	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;

	std::cout << ";withdrawal:" << withdrawal
			<< ";amount:" << _amount
			<< std::endl;
	return true;
}

int	Account::checkAmount(void) const
{
	return _amount;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";deposits:" << _nbDeposits
			<< ";withdrawals:" << _nbWithdrawals
			<< std::endl;
}

