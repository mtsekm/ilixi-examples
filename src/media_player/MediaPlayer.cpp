/*
 Copyright 2010, 2011 Tarik Sekmen.

 All Rights Reserved.

 Written by Tarik Sekmen <tarik@ilixi.org>.

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU Lesser General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU Lesser General Public License for more details.

 You should have received a copy of the GNU Lesser General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "MediaPlayer.h"
#include "ui/HBoxLayout.h"
#include "ui/VideoPlayer.h"
#include "ui/Label.h"
#include "core/Logger.h"

using namespace ilixi;

MediaPlayer::MediaPlayer(int argc, char* argv[]) :
  Application(argc, argv)
{
  setTitle("Media Player");
  setLayout(new HBoxLayout());
  VideoPlayer* vp = new VideoPlayer();
  addWidget(vp);
  addWidget(new Label("Test"));
  vp->load(DATADIR"/test.avi");
}

MediaPlayer::~MediaPlayer()
{
}

int
main(int argc, char* argv[])
{
  MediaPlayer app(argc, argv);
  app.exec();
  return 0;
}
