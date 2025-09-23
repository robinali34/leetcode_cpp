/*
 * Copyright 2025 Robina Li. MIT License
 * @file : observer_pattern.h
 * @desc : Observer Design Pattern Implementation
 * @pattern : Behavioral Pattern - Defines a one-to-many dependency between objects
 */

#ifndef OBSERVER_PATTERN_H
#define OBSERVER_PATTERN_H

#include <vector>
#include <memory>
#include <string>
#include <algorithm>

namespace DesignPatterns {

// Forward declaration
class Subject;

// Observer interface
class Observer {
public:
    virtual ~Observer() = default;
    virtual void update(const std::string& message) = 0;
};

// Subject interface
class Subject {
public:
    virtual ~Subject() = default;
    virtual void attach(std::shared_ptr<Observer> observer) = 0;
    virtual void detach(std::shared_ptr<Observer> observer) = 0;
    virtual void notify(const std::string& message) = 0;
};

// Concrete Subject
class NewsAgency : public Subject {
private:
    std::vector<std::shared_ptr<Observer>> observers_;
    std::string latestNews_;
    
public:
    void attach(std::shared_ptr<Observer> observer) override;
    void detach(std::shared_ptr<Observer> observer) override;
    void notify(const std::string& message) override;
    
    void setNews(const std::string& news);
    std::string getLatestNews() const;
};

// Concrete Observers
class NewsChannel : public Observer {
private:
    std::string channelName_;
    
public:
    explicit NewsChannel(const std::string& name) : channelName_(name) {}
    
    void update(const std::string& message) override;
    std::string getChannelName() const;
};

class NewsWebsite : public Observer {
private:
    std::string websiteName_;
    
public:
    explicit NewsWebsite(const std::string& name) : websiteName_(name) {}
    
    void update(const std::string& message) override;
    std::string getWebsiteName() const;
};

// Weather Station Example
class WeatherData : public Subject {
private:
    std::vector<std::shared_ptr<Observer>> observers_;
    double temperature_;
    double humidity_;
    double pressure_;
    
public:
    void attach(std::shared_ptr<Observer> observer) override;
    void detach(std::shared_ptr<Observer> observer) override;
    void notify(const std::string& message) override;
    
    void setMeasurements(double temperature, double humidity, double pressure);
    double getTemperature() const;
    double getHumidity() const;
    double getPressure() const;
};

class WeatherDisplay : public Observer {
private:
    std::string displayName_;
    
public:
    explicit WeatherDisplay(const std::string& name) : displayName_(name) {}
    
    void update(const std::string& message) override;
    std::string getDisplayName() const;
};

} // namespace DesignPatterns

#endif // OBSERVER_PATTERN_H

