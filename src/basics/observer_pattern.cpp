/*
 * Copyright 2025 Robina Li. MIT License
 * @file : observer_pattern.cpp
 * @desc : Observer Design Pattern Implementation
 */

#include "observer_pattern.h"
#include <iostream>

namespace DesignPatterns {

// NewsAgency implementation
void NewsAgency::attach(std::shared_ptr<Observer> observer) {
    observers_.push_back(observer);
}

void NewsAgency::detach(std::shared_ptr<Observer> observer) {
    observers_.erase(
        std::remove(observers_.begin(), observers_.end(), observer),
        observers_.end()
    );
}

void NewsAgency::notify(const std::string& message) {
    for (auto& observer : observers_) {
        observer->update(message);
    }
}

void NewsAgency::setNews(const std::string& news) {
    latestNews_ = news;
    notify(news);
}

std::string NewsAgency::getLatestNews() const {
    return latestNews_;
}

// NewsChannel implementation
void NewsChannel::update(const std::string& message) {
    std::cout << "[" << channelName_ << "] Breaking News: " << message << std::endl;
}

std::string NewsChannel::getChannelName() const {
    return channelName_;
}

// NewsWebsite implementation
void NewsWebsite::update(const std::string& message) {
    std::cout << "[" << websiteName_ << "] Latest Update: " << message << std::endl;
}

std::string NewsWebsite::getWebsiteName() const {
    return websiteName_;
}

// WeatherData implementation
void WeatherData::attach(std::shared_ptr<Observer> observer) {
    observers_.push_back(observer);
}

void WeatherData::detach(std::shared_ptr<Observer> observer) {
    observers_.erase(
        std::remove(observers_.begin(), observers_.end(), observer),
        observers_.end()
    );
}

void WeatherData::notify(const std::string& message) {
    for (auto& observer : observers_) {
        observer->update(message);
    }
}

void WeatherData::setMeasurements(double temperature, double humidity, double pressure) {
    temperature_ = temperature;
    humidity_ = humidity;
    pressure_ = pressure;
    
    std::string message = "Temperature: " + std::to_string(temperature) + 
                         "°C, Humidity: " + std::to_string(humidity) + 
                         "%, Pressure: " + std::to_string(pressure) + " hPa";
    notify(message);
}

double WeatherData::getTemperature() const {
    return temperature_;
}

double WeatherData::getHumidity() const {
    return humidity_;
}

double WeatherData::getPressure() const {
    return pressure_;
}

// WeatherDisplay implementation
void WeatherDisplay::update(const std::string& message) {
    std::cout << "[" << displayName_ << "] Weather Update: " << message << std::endl;
}

std::string WeatherDisplay::getDisplayName() const {
    return displayName_;
}

} // namespace DesignPatterns

