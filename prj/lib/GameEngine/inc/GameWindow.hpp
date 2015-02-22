/*
 * GameWindow.hpp
 *
 *  Created on: Feb 14, 2015
 *      Author: mochman
 */

#ifndef PRJ_LIB_GAMEENGINE_INC_GAMEWINDOW_HPP_
#define PRJ_LIB_GAMEENGINE_INC_GAMEWINDOW_HPP_

class GameWindow
{
	public:
		GameWindow() = default;
		GameWindow(const GameWindow& gameWnd) = delete;
		virtual void updateWindow() { }
		virtual ~GameWindow() { }
};

#endif /* PRJ_LIB_GAMEENGINE_INC_GAMEWINDOW_HPP_ */
