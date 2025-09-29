/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Employee Bonus
 * Reference : https://leetcode.com/problems/employee-bonus/
 */

#include "solution.h"

namespace EmployeeBonus {

std::string Solution::getEmployeeBonusQuery() {
    return "SELECT e.name, b.bonus FROM Employee e LEFT JOIN Bonus b ON e.empId = b.empId WHERE b.bonus < 1000 OR b.bonus IS NULL;";
}

}
