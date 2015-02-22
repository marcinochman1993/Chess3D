/*
 * AllegroGameWindow.cpp
 *
 *  Created on: Feb 14, 2015
 *      Author: mochman
 */

#include <allegro5/allegro5.h>
#include <allegro5/allegro_opengl.h>
#include "AllegroGameWindow.hpp"
#include <iostream>

AllegroGameWindow::AllegroGameWindow()
{
	if(!init())
		throw "Init failed in AllegroGameWindow::init()";
}

bool AllegroGameWindow::init()
{
	if (!al_init())
		return false;
	al_set_new_display_flags(ALLEGRO_OPENGL|ALLEGRO_FULLSCREEN);
	m_allegroDisplay = al_create_display(640, 480);
	if (!m_allegroDisplay)
		return false;
	return true;
}

void AllegroGameWindow::updateWindow()
{
	al_flip_display();
}

AllegroGameWindow::~AllegroGameWindow()
{
	al_destroy_display(m_allegroDisplay);
}
