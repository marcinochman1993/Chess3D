/*
 * AllegroGameWindow.hpp
 *
 *  Created on: Feb 14, 2015
 *      Author: mochman
 */

#ifndef PRJ_LIB_GAMEENGINE_INC_ALLEGROGAMEWINDOW_HPP_
#define PRJ_LIB_GAMEENGINE_INC_ALLEGROGAMEWINDOW_HPP_

#include <allegro5/allegro5.h>
#include "GameWindow.hpp"

class AllegroGameWindow: public GameWindow
{
	public:
		AllegroGameWindow();
		virtual void updateWindow() override;
		~AllegroGameWindow();
	private:
		bool init();
		ALLEGRO_DISPLAY* m_allegroDisplay;
};


#endif /* PRJ_LIB_GAMEENGINE_INC_ALLEGROGAMEWINDOW_HPP_ */
