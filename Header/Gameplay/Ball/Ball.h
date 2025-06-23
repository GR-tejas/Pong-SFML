#pragma once
#include <SFML/Graphics.hpp>
#include "../../Header/Gameplay/Paddle/Paddle.h"
using namespace sf;
using namespace std;

namespace Gameplay
{
    class Ball
    {
    private:
        float ball_speed = 0.1f;
        Vector2f velocity = Vector2f(ball_speed, ball_speed);

        Texture pong_ball_texture;
        const string texture_path = "Assets/Textures/Ball.png";
        Sprite pong_ball_sprite;

        const float scale_x = 0.05f;
        const float scale_y = 0.05f;

        const float position_x = 615.0f;
        const float position_y = 335.0f;

        void LoadTexture();
        void InitializeVariables();
        void Move();

    public:
        Ball();

        void Update();
        void Render(RenderWindow* game_window);
    };
}