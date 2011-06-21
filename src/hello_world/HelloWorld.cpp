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

#include "HelloWorld.h"
#include "ui/VBoxLayout.h"
#include "ui/Label.h"

using namespace ilixi;

HelloWorld::HelloWorld(int argc, char* argv[]) :
  Application(argc, argv)
{
  setLayout(new VBoxLayout());
  setTitle("Hello World");
  Label* label = new Label("Hello World!");
  addWidget(label);
}

HelloWorld::~HelloWorld()
{
}

int
main(int argc, char* argv[])
{
  HelloWorld app(argc, argv);
  app.exec();
  return 0;
}
