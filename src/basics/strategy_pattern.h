/*
 * Copyright 2025 Robina Li. MIT License
 * @file : strategy_pattern.h
 * @desc : Strategy Design Pattern Implementation
 * @pattern : Behavioral Pattern - Defines a family of algorithms and makes them interchangeable
 */

#ifndef STRATEGY_PATTERN_H
#define STRATEGY_PATTERN_H

#include <memory>
#include <vector>

namespace DesignPatterns {

// Strategy interface
class SortingStrategy {
public:
    virtual ~SortingStrategy() = default;
    virtual void sort(std::vector<int>& data) = 0;
    virtual std::string getName() const = 0;
};

// Concrete strategies
class BubbleSort : public SortingStrategy {
public:
    void sort(std::vector<int>& data) override;
    std::string getName() const override;
};

class QuickSort : public SortingStrategy {
public:
    void sort(std::vector<int>& data) override;
    std::string getName() const override;
    
private:
    void quickSortHelper(std::vector<int>& data, int low, int high);
    int partition(std::vector<int>& data, int low, int high);
};

class MergeSort : public SortingStrategy {
public:
    void sort(std::vector<int>& data) override;
    std::string getName() const override;
    
private:
    void mergeSortHelper(std::vector<int>& data, int left, int right);
    void merge(std::vector<int>& data, int left, int mid, int right);
};

// Context class
class Sorter {
private:
    std::unique_ptr<SortingStrategy> strategy_;
    
public:
    explicit Sorter(std::unique_ptr<SortingStrategy> strategy);
    
    void setStrategy(std::unique_ptr<SortingStrategy> strategy);
    void sortData(std::vector<int>& data);
    std::string getCurrentStrategy() const;
};

// Payment Strategy Example
class PaymentStrategy {
public:
    virtual ~PaymentStrategy() = default;
    virtual void pay(double amount) = 0;
    virtual std::string getPaymentMethod() const = 0;
};

class CreditCardPayment : public PaymentStrategy {
private:
    std::string cardNumber_;
    
public:
    explicit CreditCardPayment(const std::string& cardNumber) : cardNumber_(cardNumber) {}
    
    void pay(double amount) override;
    std::string getPaymentMethod() const override;
};

class PayPalPayment : public PaymentStrategy {
private:
    std::string email_;
    
public:
    explicit PayPalPayment(const std::string& email) : email_(email) {}
    
    void pay(double amount) override;
    std::string getPaymentMethod() const override;
};

class BankTransferPayment : public PaymentStrategy {
private:
    std::string accountNumber_;
    
public:
    explicit BankTransferPayment(const std::string& accountNumber) : accountNumber_(accountNumber) {}
    
    void pay(double amount) override;
    std::string getPaymentMethod() const override;
};

class PaymentProcessor {
private:
    std::unique_ptr<PaymentStrategy> paymentStrategy_;
    
public:
    explicit PaymentProcessor(std::unique_ptr<PaymentStrategy> strategy);
    
    void setPaymentStrategy(std::unique_ptr<PaymentStrategy> strategy);
    void processPayment(double amount);
    std::string getCurrentPaymentMethod() const;
};

} // namespace DesignPatterns

#endif // STRATEGY_PATTERN_H

