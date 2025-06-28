#pragma once
#include <SFML/Audio.hpp>
#include <string>
#include <iostream>

using namespace sf;
using namespace std;

namespace SoundSpace
{
    enum class SoundType
    {
        BALL_BOUNCE
    };

    class SoundManager
    {
    private:
        static sf::Music backgroundMusic;
        static sf::Sound soundEffect;
        static sf::SoundBuffer ballBounce;

        static float backgroundMusicVolume;
        static const std::string bgmPath;
        static const std::string ballBouncePath;

        static void LoadSoundFromFile();

    public:
        static void Initialize();
        static void PlaySoundEffect(SoundType soundType);
        static void PlayBackgroundMusic();
    };
}