/*
**  Xbox360 USB Gamepad Userspace Driver
**  Copyright (C) 2011 Ingo Ruhnke <grumbel@gmx.de>
**
**  This program is free software: you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation, either version 3 of the License, or
**  (at your option) any later version.
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef HEADER_XBOXDRV_MODIFIER_IR2AXIS_MODIFIER_HPP
#define HEADER_XBOXDRV_MODIFIER_IR2AXIS_MODIFIER_HPP

#include "modifier.hpp"

#include <vector>

#include "xboxmsg.hpp"

class IR2AxisModifier : public Modifier
{
public:
  static IR2AxisModifier* from_string(const std::vector<std::string>& args);

private:
  XboxAxis m_axis_x;
  XboxAxis m_axis_y;

public:
  IR2AxisModifier(XboxAxis axis_x, XboxAxis axis_y);

  void update(int msec_delta, ControllerMessage& msg);
  std::string str() const;

private:
  IR2AxisModifier(const IR2AxisModifier&);
  IR2AxisModifier& operator=(const IR2AxisModifier&);
};

#endif

/* EOF */