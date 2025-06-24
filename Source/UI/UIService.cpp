#include"../../Header/UI/UIService.h"

namespace UI
{
	UIService::UIService()
	{
		Initialize();
	}

	void UIService::Initialize()
	{
		LoadFontTexture();
		CreateScoreText(left_score_text, left_score_postion_x);
		CreateScoreText(right_score_text, right_score_position_x);
	}

	void UIService::LoadFontTexture()
	{
		font.loadFromFile(texture_path);
	}

	void UIService::CreateScoreText(Text& score_text, float score_position_x)
	{
		score_text.setFont(font);
		score_text.setString(initial_string);
		score_text.setCharacterSize(font_size);
		score_text.setFillColor(font_color);
		score_text.setPosition(score_position_x, score_postion_y);
	}

	void UIService::Render(RenderWindow* game_window)
	{
		game_window->draw(left_score_text);
		game_window->draw(right_score_text);
	}
}