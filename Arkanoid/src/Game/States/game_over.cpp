#include "game_over.h"

#include "Elements/ball.h"
#include "Elements/buttons.h"
#include "Elements/levels.h"
#include "Elements/paddle.h"

namespace game
{
namespace game_over
{
void Update()
{
	buttons::UpdateButton(buttons::return_);
}

void Draw()
{
	buttons::DrawButton(buttons::return_);

	victory ? DrawText("YOU WIN :)", static_cast<int>(screenWidth / 2 - 100), static_cast<int>(screenHeight / 2), 35, RAYWHITE) :
	DrawText("YOU LOSE :(", static_cast<int>(screenWidth / 2 - 100), static_cast<int>(screenHeight / 2), 35, RAYWHITE);
}
}
}