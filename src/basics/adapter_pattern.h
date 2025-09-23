/*
 * Copyright 2025 Robina Li. MIT License
 * @file : adapter_pattern.h
 * @desc : Adapter Design Pattern Interfaces
 * @pattern : Structural Pattern - Converts the interface of a class into another interface clients expect
 */

#ifndef ADAPTER_PATTERN_H
#define ADAPTER_PATTERN_H

#include <memory>
#include <string>

namespace DesignPatterns {

// Target interface
class MediaPlayer {
public:
    virtual ~MediaPlayer() = default;
    virtual std::string play(const std::string& audioType, const std::string& fileName) = 0;
};

// Adaptee with incompatible interface
class AdvancedMediaPlayer {
public:
    virtual ~AdvancedMediaPlayer() = default;
    virtual std::string playVlc(const std::string& fileName) = 0;
    virtual std::string playMp4(const std::string& fileName) = 0;
};

// Concrete adaptees
class VlcPlayer : public AdvancedMediaPlayer {
public:
    std::string playVlc(const std::string& fileName) override;
    std::string playMp4(const std::string& fileName) override;
};

class Mp4Player : public AdvancedMediaPlayer {
public:
    std::string playVlc(const std::string& fileName) override;
    std::string playMp4(const std::string& fileName) override;
};

// Adapter: implements target and uses an adaptee
class MediaAdapter : public MediaPlayer {
private:
    std::unique_ptr<AdvancedMediaPlayer> advancedPlayer_;

public:
    explicit MediaAdapter(const std::string& audioType);
    std::string play(const std::string& audioType, const std::string& fileName) override;
};

// Client using the target interface
class AudioPlayer : public MediaPlayer {
public:
    std::string play(const std::string& audioType, const std::string& fileName) override;
};

// ------------ Another minimal example ------------

// Legacy API (adaptee)
class LegacyRectangle {
public:
    std::string drawLegacy(int x, int y, int width, int height);
};

// Target interface (renamed to avoid collision with Factory Pattern)
class Drawable {
public:
    virtual ~Drawable() = default;
    virtual std::string draw() = 0;
};

// Adapter wrapping the legacy rectangle
class RectangleAdapter : public Drawable {
private:
    LegacyRectangle legacy_;
    int x_;
    int y_;
    int width_;
    int height_;

public:
    RectangleAdapter(int x, int y, int width, int height);
    std::string draw() override;
};

} // namespace DesignPatterns

#endif // ADAPTER_PATTERN_H


