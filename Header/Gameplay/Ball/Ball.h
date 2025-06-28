#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include"../../Utility/TimeService.h"
#include"../../Sound/SoundManager.h"
#include"../Paddle/Paddle.h"

using namespace SoundSpace;
using namespace sf;
using namespace std;

namespace Gameplay
{
    class Ball
    {
    private:
        float ball_speed = 50.0f;
        int speed_multiplier = 10;
        Vector2f velocity = Vector2f(ball_speed, ball_speed);

        Texture pong_ball_texture;
        const string texture_path = "Assets/Textures/Ball.png";
        Sprite pong_ball_sprite;

        const float scale_x = 0.05f;
        const float scale_y = 0.05f;

        const float position_x = 615.0f;
        const float position_y = 335.0f;

        const float top_boundary = 20.0f;
        const float bottom_boundary = 700.0f;

        const float left_boundary = 0.0f;
        const float right_boundary = 1280.0f;

        const float center_position_x = 615.0f;
        const float center_position_y = 325.0f;

        bool had_left_collison = false;
        bool had_right_collison = false;

        void LoadTexture();
        void InitializeVariables();
        void Move(TimeService* timeService);

    public:
        Ball();

        /*bool isLeftCollisionOccurred();
        void updateLeftCollisionState(bool value);

        bool isRightCollisionOccurred();
        void updateRightCollisionState(bool value);*/

        bool IsCollisionOccurred(bool isLeft);
        void UpdateCollisionState(bool value, bool isLeft);

        void HandleBoudaryCollision();
        void HandleOutofBoundCollision();

        void HandlePaddleCollision(Paddle* player1, Paddle* player2);
        void OnCollision(Paddle* player1, Paddle* player2);

        void Reset();

        void Update(Paddle* player1, Paddle* player2, TimeService* timeService);
        void Render(RenderWindow* game_window);
    };
}