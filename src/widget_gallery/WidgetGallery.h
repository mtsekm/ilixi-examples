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

#ifndef TESTWIDGETS_H_
#define TESTWIDGETS_H_

#include "ui/Application.h"
#include "ui/Dialog.h"

using namespace ilixi;

class WidgetGallery : public Application
{
public:
  WidgetGallery(int argc, char* argv[]);

  virtual
  ~WidgetGallery();

private:
  Dialog* dia;
};

#endif /* TESTWIDGETS_H_ */
