/*
 * Copyright 2025 Robina Li. MIT License
 * @file : adapter_pattern.cpp
 * @desc : Adapter Design Pattern Implementation
 */

#include "adapter_pattern.h"

namespace DesignPatterns {

// VlcPlayer implementation
std::string VlcPlayer::playVlc(const std::string& fileName) {
    return "Playing vlc file. Name: " + fileName;
}

std::string VlcPlayer::playMp4(const std::string& /*fileName*/) {
    return "VLC player cannot play mp4";
}

// Mp4Player implementation
std::string Mp4Player::playVlc(const std::string& /*fileName*/) {
    return "MP4 player cannot play vlc";
}

std::string Mp4Player::playMp4(const std::string& fileName) {
    return "Playing mp4 file. Name: " + fileName;
}

// MediaAdapter implementation
MediaAdapter::MediaAdapter(const std::string& audioType) {
    if (audioType == "vlc") {
        advancedPlayer_ = std::make_unique<VlcPlayer>();
    } else if (audioType == "mp4") {
        advancedPlayer_ = std::make_unique<Mp4Player>();
    }
}

std::string MediaAdapter::play(const std::string& audioType, const std::string& fileName) {
    if (!advancedPlayer_) {
        return "Unsupported format";
    }
    if (audioType == "vlc") {
        return advancedPlayer_->playVlc(fileName);
    } else if (audioType == "mp4") {
        return advancedPlayer_->playMp4(fileName);
    }
    return "Unsupported format";
}

// AudioPlayer implementation
std::string AudioPlayer::play(const std::string& audioType, const std::string& fileName) {
    if (audioType == "mp3") {
        return "Playing mp3 file. Name: " + fileName;
    } else if (audioType == "vlc" || audioType == "mp4") {
        MediaAdapter adapter(audioType);
        return adapter.play(audioType, fileName);
    }
    return "Invalid media. " + audioType + " format not supported";
}

// ------------ Another minimal example ------------

std::string LegacyRectangle::drawLegacy(int x, int y, int width, int height) {
    return "LegacyRectangle: x=" + std::to_string(x) + ", y=" + std::to_string(y) +
           ", w=" + std::to_string(width) + ", h=" + std::to_string(height);
}

RectangleAdapter::RectangleAdapter(int x, int y, int width, int height)
    : x_(x), y_(y), width_(width), height_(height) {}

std::string RectangleAdapter::draw() {
    return legacy_.drawLegacy(x_, y_, width_, height_);
}

} // namespace DesignPatterns


