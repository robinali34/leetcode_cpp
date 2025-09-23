/*
 * Copyright 2025 Robina Li. MIT License
 * @file : strategy_pattern.cpp
 * @desc : Strategy Design Pattern Implementation
 */

#include "strategy_pattern.h"
#include <iostream>
#include <algorithm>
#include <random>

namespace DesignPatterns {

// BubbleSort implementation
void BubbleSort::sort(std::vector<int>& data) {
    size_t n = data.size();
    for (size_t i = 0; i < n - 1; ++i) {
        for (size_t j = 0; j < n - i - 1; ++j) {
            if (data[j] > data[j + 1]) {
                std::swap(data[j], data[j + 1]);
            }
        }
    }
}

std::string BubbleSort::getName() const {
    return "Bubble Sort";
}

// QuickSort implementation
void QuickSort::sort(std::vector<int>& data) {
    if (data.size() <= 1) return;
    quickSortHelper(data, 0, data.size() - 1);
}

void QuickSort::quickSortHelper(std::vector<int>& data, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(data, low, high);
        quickSortHelper(data, low, pivotIndex - 1);
        quickSortHelper(data, pivotIndex + 1, high);
    }
}

int QuickSort::partition(std::vector<int>& data, int low, int high) {
    int pivot = data[high];
    int i = low - 1;
    
    for (int j = low; j < high; ++j) {
        if (data[j] <= pivot) {
            ++i;
            std::swap(data[i], data[j]);
        }
    }
    std::swap(data[i + 1], data[high]);
    return i + 1;
}

std::string QuickSort::getName() const {
    return "Quick Sort";
}

// MergeSort implementation
void MergeSort::sort(std::vector<int>& data) {
    if (data.size() <= 1) return;
    mergeSortHelper(data, 0, data.size() - 1);
}

void MergeSort::mergeSortHelper(std::vector<int>& data, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSortHelper(data, left, mid);
        mergeSortHelper(data, mid + 1, right);
        merge(data, left, mid, right);
    }
}

void MergeSort::merge(std::vector<int>& data, int left, int mid, int right) {
    std::vector<int> leftArray(data.begin() + left, data.begin() + mid + 1);
    std::vector<int> rightArray(data.begin() + mid + 1, data.begin() + right + 1);
    
    size_t i = 0, j = 0, k = left;
    
    while (i < leftArray.size() && j < rightArray.size()) {
        if (leftArray[i] <= rightArray[j]) {
            data[k] = leftArray[i];
            ++i;
        } else {
            data[k] = rightArray[j];
            ++j;
        }
        ++k;
    }
    
    while (i < leftArray.size()) {
        data[k] = leftArray[i];
        ++i;
        ++k;
    }
    
    while (j < rightArray.size()) {
        data[k] = rightArray[j];
        ++j;
        ++k;
    }
}

std::string MergeSort::getName() const {
    return "Merge Sort";
}

// Sorter implementation
Sorter::Sorter(std::unique_ptr<SortingStrategy> strategy) 
    : strategy_(std::move(strategy)) {}

void Sorter::setStrategy(std::unique_ptr<SortingStrategy> strategy) {
    strategy_ = std::move(strategy);
}

void Sorter::sortData(std::vector<int>& data) {
    if (strategy_) {
        strategy_->sort(data);
    }
}

std::string Sorter::getCurrentStrategy() const {
    return strategy_ ? strategy_->getName() : "No strategy set";
}

// Payment implementations
void CreditCardPayment::pay(double amount) {
    std::cout << "Paid $" << amount << " using Credit Card ending in " 
              << cardNumber_.substr(cardNumber_.length() - 4) << std::endl;
}

std::string CreditCardPayment::getPaymentMethod() const {
    return "Credit Card";
}

void PayPalPayment::pay(double amount) {
    std::cout << "Paid $" << amount << " using PayPal account: " << email_ << std::endl;
}

std::string PayPalPayment::getPaymentMethod() const {
    return "PayPal";
}

void BankTransferPayment::pay(double amount) {
    std::cout << "Paid $" << amount << " using Bank Transfer to account: " 
              << accountNumber_ << std::endl;
}

std::string BankTransferPayment::getPaymentMethod() const {
    return "Bank Transfer";
}

// PaymentProcessor implementation
PaymentProcessor::PaymentProcessor(std::unique_ptr<PaymentStrategy> strategy)
    : paymentStrategy_(std::move(strategy)) {}

void PaymentProcessor::setPaymentStrategy(std::unique_ptr<PaymentStrategy> strategy) {
    paymentStrategy_ = std::move(strategy);
}

void PaymentProcessor::processPayment(double amount) {
    if (paymentStrategy_) {
        paymentStrategy_->pay(amount);
    }
}

std::string PaymentProcessor::getCurrentPaymentMethod() const {
    return paymentStrategy_ ? paymentStrategy_->getPaymentMethod() : "No payment method set";
}

} // namespace DesignPatterns

