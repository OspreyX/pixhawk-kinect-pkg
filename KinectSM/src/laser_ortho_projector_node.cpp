/*
*  Laser Ortho Projector
*  Copyright (C) 2010, CCNY Robotics Lab
*  Ivan Dryanovski <ivan.dryanovski@gmail.com>
*  William Morris <morris@ee.ccny.cuny.edu>
*  http://robotics.ccny.cuny.edu
*
*  This program is free software: you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation, either version 3 of the License, or
*  (at your option) any later version.
*
*  This program is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*  GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "laser_ortho_projector.h"

int main (int argc, char **argv)
{
  ros::init (argc, argv, "LaserOrthoProjector");
  ros::NodeHandle nh;
  ros::NodeHandle nh_private("~");
  scan_tools::LaserOrthoProjector laser_ortho_projector(nh, nh_private);
  ros::spin ();
  return 0;
}
