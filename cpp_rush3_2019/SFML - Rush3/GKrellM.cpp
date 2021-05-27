/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** GKrellM with SFML
*/

#include <iostream>
#include "GKrellM.hpp"
#include "Error.hpp"
#include "rsrc.hpp"

GKrellM::GKrellM() : _os{sf::Vector2f{0, 0}}, _disk{sf::Vector2f{0, 0}}, _network{sf::Vector2f{0, 0}}, _ram{sf::Vector2f{0, 0}}, _cpug{sf::Vector2f{0, 0}}
{
    _window.create(sf::VideoMode::getDesktopMode(), "Sugar Panel", sf::Style::Default);

    // Set framerate
    _window.setVerticalSyncEnabled(true);

    // Set icon
    sf::Image icon;
    if (!icon.loadFromFile(PEPO_AKERMAN))
	throw Error{std::string{"Impossible to load: "} + PEPO_AKERMAN};
    _window.setIcon(498, 373, icon.getPixelsPtr());

    // Init texts
    if (!_font.loadFromFile(ARIAL))
	throw Error{std::string{"Impossible to load: "} + ARIAL};

    if (!_texture.loadFromFile(WPP))
	throw Error{"Impossible to load"};
    _sprite.setTexture(_texture);
//    _sprite.setTextureRect(sf::IntRect{0, 0, (int)tmp.width, (int)tmp.height});
    _sprite.setScale(0.667f, 0.667f);

    // Init MainModule
    _main = new MainModule{std::string{"Super Bleu"}, sf::VideoMode::getDesktopMode()};

    // Set position according to screen
    // todo Impelemnte height
    sf::VideoMode tmp = sf::VideoMode::getDesktopMode();
    float width = tmp.width - 900;
    if (0 >= width || (0 == (width / 4.0f))) {
	_disk.setPosition(sf::Vector2f{0, 5});
	_os.setPosition(sf::Vector2f{300, 5});
	_network.setPosition(sf::Vector2f{600, 5});
	_ram.setPosition(sf::Vector2f{0, 500});
        _cpug.setPosition(sf::Vector2f{600, 500});
    } else {
	float size = width / 4.0f;
	_disk.setPosition(sf::Vector2f{size, 5});
	_os.setPosition(sf::Vector2f{size * 2 + 300, 5});
	_network.setPosition(sf::Vector2f{size * 3 + 300 * 2, 5});
	_ram.setPosition(sf::Vector2f{size, 500});
        _cpug.setPosition(sf::Vector2f{size * 3 + 300 * 2, 500});
    }
}

void GKrellM::run()
{
    while (_window.isOpen()) {
	update();
	display();
    }
}

void GKrellM::update()
{
    sf::Event event;
    while (_window.pollEvent(event)) {
	// Close requested event
	if (sf::Event::Closed == event.type)
	    _window.close();
    }
    sf::Time elapsed = _clock.getElapsedTime();
    if (1000 <= elapsed.asMilliseconds()) {
	//_main->update("Super Smoothie");
	_disk.update();
	_os.update();
	_network.update();
	_ram.update();
	_cpug.update();
	//_hearts.update();
	_clock.restart();
    }
}

void GKrellM::display()
{
    _window.clear(sf::Color::Black);

    _window.draw(_sprite);
    _window.draw(_rectangle);
    for (std::vector<sf::Text>::iterator it = _texts.begin(), et = _texts.end(); et != it; ++it)
	_window.draw(*it);

    //_main->display(_window);

    // Draw modules
    _disk.draw(_window);
    _os.draw(_window);
    _network.draw(_window);
    _ram.draw(_window);
    _cpug.draw(_window);
    //_hearts.draw(_window);

    _window.display();
}
