#ifndef VIEWMODE_HPP
#define VIEWMODE_HPP

#include "command.h"
#include "bio_crt.h"

class WWIVDrawMain;

class ViewModeCommand : public Command
{
private:
  void putpixel(SDL_Surface *surface, int x, int y, Uint32 pixel);
public:
  ViewModeCommand(WWIVDrawMain* win) : Command(win) {}
  void run();
};

#endif
