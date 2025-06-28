#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;
using namespace std;

namespace UI
{
	class UIService
	{
	private:
		Font font;
		Text left_score_text;
		Text right_score_text;

		string texture_path = "Assets/Fonts/Aloevera-OVoWO.ttf";

		int font_size = 40;
		Color font_color = Color::White;
		string initial_string = "00";

		float left_score_postion_x = 570.0f;

		float right_score_position_x = 670.0f;

		float score_postion_y = 30.0f;

		int player1_score = 0;
		int player2_score = 0;

		void Initialize();

	public:
		UIService();
		void LoadFontTexture();
		void CreateScoreText(Text& score_text, float score_position_x);
		string FormatScore(int score);
		void IncrementPlayerScore(bool isP1);

		void Render(RenderWindow* game_window);
		void Update();
	};
}