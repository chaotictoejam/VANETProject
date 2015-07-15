//
// Copyright (C) 2006-2011 Christoph Sommer <christoph.sommer@uibk.ac.at>
//
// Documentation for these modules is at http://veins.car2x.org/
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//

#include "v_TraCIColor.h"

v_TraCIColor::v_TraCIColor(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) :
        red(red), green(green), blue(blue), alpha(alpha)
{
}

v_TraCIColor v_TraCIColor::fromTkColor(std::string tkColorName)
{
    if (tkColorName == "alice blue")
        return v_TraCIColor(240, 248, 255, 255);
    if (tkColorName == "AliceBlue")
        return v_TraCIColor(240, 248, 255, 255);
    if (tkColorName == "antique white")
        return v_TraCIColor(250, 235, 215, 255);
    if (tkColorName == "AntiqueWhite")
        return v_TraCIColor(250, 235, 215, 255);
    if (tkColorName == "AntiqueWhite1")
        return v_TraCIColor(255, 239, 219, 255);
    if (tkColorName == "AntiqueWhite2")
        return v_TraCIColor(238, 223, 204, 255);
    if (tkColorName == "AntiqueWhite3")
        return v_TraCIColor(205, 192, 176, 255);
    if (tkColorName == "AntiqueWhite4")
        return v_TraCIColor(139, 131, 120, 255);
    if (tkColorName == "aquamarine")
        return v_TraCIColor(127, 255, 212, 255);
    if (tkColorName == "aquamarine1")
        return v_TraCIColor(127, 255, 212, 255);
    if (tkColorName == "aquamarine2")
        return v_TraCIColor(118, 238, 198, 255);
    if (tkColorName == "aquamarine3")
        return v_TraCIColor(102, 205, 170, 255);
    if (tkColorName == "aquamarine4")
        return v_TraCIColor(69, 139, 116, 255);
    if (tkColorName == "azure")
        return v_TraCIColor(240, 255, 255, 255);
    if (tkColorName == "azure1")
        return v_TraCIColor(240, 255, 255, 255);
    if (tkColorName == "azure2")
        return v_TraCIColor(224, 238, 238, 255);
    if (tkColorName == "azure3")
        return v_TraCIColor(193, 205, 205, 255);
    if (tkColorName == "azure4")
        return v_TraCIColor(131, 139, 139, 255);
    if (tkColorName == "beige")
        return v_TraCIColor(245, 245, 220, 255);
    if (tkColorName == "bisque")
        return v_TraCIColor(255, 228, 196, 255);
    if (tkColorName == "bisque1")
        return v_TraCIColor(255, 228, 196, 255);
    if (tkColorName == "bisque2")
        return v_TraCIColor(238, 213, 183, 255);
    if (tkColorName == "bisque3")
        return v_TraCIColor(205, 183, 158, 255);
    if (tkColorName == "bisque4")
        return v_TraCIColor(139, 125, 107, 255);
    if (tkColorName == "black")
        return v_TraCIColor(0, 0, 0, 255);
    if (tkColorName == "blanched almond")
        return v_TraCIColor(255, 235, 205, 255);
    if (tkColorName == "BlanchedAlmond")
        return v_TraCIColor(255, 235, 205, 255);
    if (tkColorName == "blue")
        return v_TraCIColor(0, 0, 255, 255);
    if (tkColorName == "blue violet")
        return v_TraCIColor(138, 43, 226, 255);
    if (tkColorName == "blue1")
        return v_TraCIColor(0, 0, 255, 255);
    if (tkColorName == "blue2")
        return v_TraCIColor(0, 0, 238, 255);
    if (tkColorName == "blue3")
        return v_TraCIColor(0, 0, 205, 255);
    if (tkColorName == "blue4")
        return v_TraCIColor(0, 0, 139, 255);
    if (tkColorName == "BlueViolet")
        return v_TraCIColor(138, 43, 226, 255);
    if (tkColorName == "brown")
        return v_TraCIColor(165, 42, 42, 255);
    if (tkColorName == "brown1")
        return v_TraCIColor(255, 64, 64, 255);
    if (tkColorName == "brown2")
        return v_TraCIColor(238, 59, 59, 255);
    if (tkColorName == "brown3")
        return v_TraCIColor(205, 51, 51, 255);
    if (tkColorName == "brown4")
        return v_TraCIColor(139, 35, 35, 255);
    if (tkColorName == "burlywood")
        return v_TraCIColor(222, 184, 135, 255);
    if (tkColorName == "burlywood1")
        return v_TraCIColor(255, 211, 155, 255);
    if (tkColorName == "burlywood2")
        return v_TraCIColor(238, 197, 145, 255);
    if (tkColorName == "burlywood3")
        return v_TraCIColor(205, 170, 125, 255);
    if (tkColorName == "burlywood4")
        return v_TraCIColor(139, 115, 85, 255);
    if (tkColorName == "cadet blue")
        return v_TraCIColor(95, 158, 160, 255);
    if (tkColorName == "CadetBlue")
        return v_TraCIColor(95, 158, 160, 255);
    if (tkColorName == "CadetBlue1")
        return v_TraCIColor(152, 245, 255, 255);
    if (tkColorName == "CadetBlue2")
        return v_TraCIColor(142, 229, 238, 255);
    if (tkColorName == "CadetBlue3")
        return v_TraCIColor(122, 197, 205, 255);
    if (tkColorName == "CadetBlue4")
        return v_TraCIColor(83, 134, 139, 255);
    if (tkColorName == "chartreuse")
        return v_TraCIColor(127, 255, 0, 255);
    if (tkColorName == "chartreuse1")
        return v_TraCIColor(127, 255, 0, 255);
    if (tkColorName == "chartreuse2")
        return v_TraCIColor(118, 238, 0, 255);
    if (tkColorName == "chartreuse3")
        return v_TraCIColor(102, 205, 0, 255);
    if (tkColorName == "chartreuse4")
        return v_TraCIColor(69, 139, 0, 255);
    if (tkColorName == "chocolate")
        return v_TraCIColor(210, 105, 30, 255);
    if (tkColorName == "chocolate1")
        return v_TraCIColor(255, 127, 36, 255);
    if (tkColorName == "chocolate2")
        return v_TraCIColor(238, 118, 33, 255);
    if (tkColorName == "chocolate3")
        return v_TraCIColor(205, 102, 29, 255);
    if (tkColorName == "chocolate4")
        return v_TraCIColor(139, 69, 19, 255);
    if (tkColorName == "coral")
        return v_TraCIColor(255, 127, 80, 255);
    if (tkColorName == "coral1")
        return v_TraCIColor(255, 114, 86, 255);
    if (tkColorName == "coral2")
        return v_TraCIColor(238, 106, 80, 255);
    if (tkColorName == "coral3")
        return v_TraCIColor(205, 91, 69, 255);
    if (tkColorName == "coral4")
        return v_TraCIColor(139, 62, 47, 255);
    if (tkColorName == "cornflower blue")
        return v_TraCIColor(100, 149, 237, 255);
    if (tkColorName == "CornflowerBlue")
        return v_TraCIColor(100, 149, 237, 255);
    if (tkColorName == "cornsilk")
        return v_TraCIColor(255, 248, 220, 255);
    if (tkColorName == "cornsilk1")
        return v_TraCIColor(255, 248, 220, 255);
    if (tkColorName == "cornsilk2")
        return v_TraCIColor(238, 232, 205, 255);
    if (tkColorName == "cornsilk3")
        return v_TraCIColor(205, 200, 177, 255);
    if (tkColorName == "cornsilk4")
        return v_TraCIColor(139, 136, 120, 255);
    if (tkColorName == "cyan")
        return v_TraCIColor(0, 255, 255, 255);
    if (tkColorName == "cyan1")
        return v_TraCIColor(0, 255, 255, 255);
    if (tkColorName == "cyan2")
        return v_TraCIColor(0, 238, 238, 255);
    if (tkColorName == "cyan3")
        return v_TraCIColor(0, 205, 205, 255);
    if (tkColorName == "cyan4")
        return v_TraCIColor(0, 139, 139, 255);
    if (tkColorName == "dark blue")
        return v_TraCIColor(0, 0, 139, 255);
    if (tkColorName == "dark cyan")
        return v_TraCIColor(0, 139, 139, 255);
    if (tkColorName == "dark goldenrod")
        return v_TraCIColor(184, 134, 11, 255);
    if (tkColorName == "dark gray")
        return v_TraCIColor(169, 169, 169, 255);
    if (tkColorName == "dark green")
        return v_TraCIColor(0, 100, 0, 255);
    if (tkColorName == "dark grey")
        return v_TraCIColor(169, 169, 169, 255);
    if (tkColorName == "dark khaki")
        return v_TraCIColor(189, 183, 107, 255);
    if (tkColorName == "dark magenta")
        return v_TraCIColor(139, 0, 139, 255);
    if (tkColorName == "dark olive green")
        return v_TraCIColor(85, 107, 47, 255);
    if (tkColorName == "dark orange")
        return v_TraCIColor(255, 140, 0, 255);
    if (tkColorName == "dark orchid")
        return v_TraCIColor(153, 50, 204, 255);
    if (tkColorName == "dark red")
        return v_TraCIColor(139, 0, 0, 255);
    if (tkColorName == "dark salmon")
        return v_TraCIColor(233, 150, 122, 255);
    if (tkColorName == "dark sea green")
        return v_TraCIColor(143, 188, 143, 255);
    if (tkColorName == "dark slate blue")
        return v_TraCIColor(72, 61, 139, 255);
    if (tkColorName == "dark slate gray")
        return v_TraCIColor(47, 79, 79, 255);
    if (tkColorName == "dark slate grey")
        return v_TraCIColor(47, 79, 79, 255);
    if (tkColorName == "dark turquoise")
        return v_TraCIColor(0, 206, 209, 255);
    if (tkColorName == "dark violet")
        return v_TraCIColor(148, 0, 211, 255);
    if (tkColorName == "DarkBlue")
        return v_TraCIColor(0, 0, 139, 255);
    if (tkColorName == "DarkCyan")
        return v_TraCIColor(0, 139, 139, 255);
    if (tkColorName == "DarkGoldenrod")
        return v_TraCIColor(184, 134, 11, 255);
    if (tkColorName == "DarkGoldenrod1")
        return v_TraCIColor(255, 185, 15, 255);
    if (tkColorName == "DarkGoldenrod2")
        return v_TraCIColor(238, 173, 14, 255);
    if (tkColorName == "DarkGoldenrod3")
        return v_TraCIColor(205, 149, 12, 255);
    if (tkColorName == "DarkGoldenrod4")
        return v_TraCIColor(139, 101, 8, 255);
    if (tkColorName == "DarkGray")
        return v_TraCIColor(169, 169, 169, 255);
    if (tkColorName == "DarkGreen")
        return v_TraCIColor(0, 100, 0, 255);
    if (tkColorName == "DarkGrey")
        return v_TraCIColor(169, 169, 169, 255);
    if (tkColorName == "DarkKhaki")
        return v_TraCIColor(189, 183, 107, 255);
    if (tkColorName == "DarkMagenta")
        return v_TraCIColor(139, 0, 139, 255);
    if (tkColorName == "DarkOliveGreen")
        return v_TraCIColor(85, 107, 47, 255);
    if (tkColorName == "DarkOliveGreen1")
        return v_TraCIColor(202, 255, 112, 255);
    if (tkColorName == "DarkOliveGreen2")
        return v_TraCIColor(188, 238, 104, 255);
    if (tkColorName == "DarkOliveGreen3")
        return v_TraCIColor(162, 205, 90, 255);
    if (tkColorName == "DarkOliveGreen4")
        return v_TraCIColor(110, 139, 61, 255);
    if (tkColorName == "DarkOrange")
        return v_TraCIColor(255, 140, 0, 255);
    if (tkColorName == "DarkOrange1")
        return v_TraCIColor(255, 127, 0, 255);
    if (tkColorName == "DarkOrange2")
        return v_TraCIColor(238, 118, 0, 255);
    if (tkColorName == "DarkOrange3")
        return v_TraCIColor(205, 102, 0, 255);
    if (tkColorName == "DarkOrange4")
        return v_TraCIColor(139, 69, 0, 255);
    if (tkColorName == "DarkOrchid")
        return v_TraCIColor(153, 50, 204, 255);
    if (tkColorName == "DarkOrchid1")
        return v_TraCIColor(191, 62, 255, 255);
    if (tkColorName == "DarkOrchid2")
        return v_TraCIColor(178, 58, 238, 255);
    if (tkColorName == "DarkOrchid3")
        return v_TraCIColor(154, 50, 205, 255);
    if (tkColorName == "DarkOrchid4")
        return v_TraCIColor(104, 34, 139, 255);
    if (tkColorName == "DarkRed")
        return v_TraCIColor(139, 0, 0, 255);
    if (tkColorName == "DarkSalmon")
        return v_TraCIColor(233, 150, 122, 255);
    if (tkColorName == "DarkSeaGreen")
        return v_TraCIColor(143, 188, 143, 255);
    if (tkColorName == "DarkSeaGreen1")
        return v_TraCIColor(193, 255, 193, 255);
    if (tkColorName == "DarkSeaGreen2")
        return v_TraCIColor(180, 238, 180, 255);
    if (tkColorName == "DarkSeaGreen3")
        return v_TraCIColor(155, 205, 155, 255);
    if (tkColorName == "DarkSeaGreen4")
        return v_TraCIColor(105, 139, 105, 255);
    if (tkColorName == "DarkSlateBlue")
        return v_TraCIColor(72, 61, 139, 255);
    if (tkColorName == "DarkSlateGray")
        return v_TraCIColor(47, 79, 79, 255);
    if (tkColorName == "DarkSlateGray1")
        return v_TraCIColor(151, 255, 255, 255);
    if (tkColorName == "DarkSlateGray2")
        return v_TraCIColor(141, 238, 238, 255);
    if (tkColorName == "DarkSlateGray3")
        return v_TraCIColor(121, 205, 205, 255);
    if (tkColorName == "DarkSlateGray4")
        return v_TraCIColor(82, 139, 139, 255);
    if (tkColorName == "DarkSlateGrey")
        return v_TraCIColor(47, 79, 79, 255);
    if (tkColorName == "DarkTurquoise")
        return v_TraCIColor(0, 206, 209, 255);
    if (tkColorName == "DarkViolet")
        return v_TraCIColor(148, 0, 211, 255);
    if (tkColorName == "deep pink")
        return v_TraCIColor(255, 20, 147, 255);
    if (tkColorName == "deep sky blue")
        return v_TraCIColor(0, 191, 255, 255);
    if (tkColorName == "DeepPink")
        return v_TraCIColor(255, 20, 147, 255);
    if (tkColorName == "DeepPink1")
        return v_TraCIColor(255, 20, 147, 255);
    if (tkColorName == "DeepPink2")
        return v_TraCIColor(238, 18, 137, 255);
    if (tkColorName == "DeepPink3")
        return v_TraCIColor(205, 16, 118, 255);
    if (tkColorName == "DeepPink4")
        return v_TraCIColor(139, 10, 80, 255);
    if (tkColorName == "DeepSkyBlue")
        return v_TraCIColor(0, 191, 255, 255);
    if (tkColorName == "DeepSkyBlue1")
        return v_TraCIColor(0, 191, 255, 255);
    if (tkColorName == "DeepSkyBlue2")
        return v_TraCIColor(0, 178, 238, 255);
    if (tkColorName == "DeepSkyBlue3")
        return v_TraCIColor(0, 154, 205, 255);
    if (tkColorName == "DeepSkyBlue4")
        return v_TraCIColor(0, 104, 139, 255);
    if (tkColorName == "dim gray")
        return v_TraCIColor(105, 105, 105, 255);
    if (tkColorName == "dim grey")
        return v_TraCIColor(105, 105, 105, 255);
    if (tkColorName == "DimGray")
        return v_TraCIColor(105, 105, 105, 255);
    if (tkColorName == "DimGrey")
        return v_TraCIColor(105, 105, 105, 255);
    if (tkColorName == "dodger blue")
        return v_TraCIColor(30, 144, 255, 255);
    if (tkColorName == "DodgerBlue")
        return v_TraCIColor(30, 144, 255, 255);
    if (tkColorName == "DodgerBlue1")
        return v_TraCIColor(30, 144, 255, 255);
    if (tkColorName == "DodgerBlue2")
        return v_TraCIColor(28, 134, 238, 255);
    if (tkColorName == "DodgerBlue3")
        return v_TraCIColor(24, 116, 205, 255);
    if (tkColorName == "DodgerBlue4")
        return v_TraCIColor(16, 78, 139, 255);
    if (tkColorName == "firebrick")
        return v_TraCIColor(178, 34, 34, 255);
    if (tkColorName == "firebrick1")
        return v_TraCIColor(255, 48, 48, 255);
    if (tkColorName == "firebrick2")
        return v_TraCIColor(238, 44, 44, 255);
    if (tkColorName == "firebrick3")
        return v_TraCIColor(205, 38, 38, 255);
    if (tkColorName == "firebrick4")
        return v_TraCIColor(139, 26, 26, 255);
    if (tkColorName == "floral white")
        return v_TraCIColor(255, 250, 240, 255);
    if (tkColorName == "FloralWhite")
        return v_TraCIColor(255, 250, 240, 255);
    if (tkColorName == "forest green")
        return v_TraCIColor(34, 139, 34, 255);
    if (tkColorName == "ForestGreen")
        return v_TraCIColor(34, 139, 34, 255);
    if (tkColorName == "gainsboro")
        return v_TraCIColor(220, 220, 220, 255);
    if (tkColorName == "ghost white")
        return v_TraCIColor(248, 248, 255, 255);
    if (tkColorName == "GhostWhite")
        return v_TraCIColor(248, 248, 255, 255);
    if (tkColorName == "gold")
        return v_TraCIColor(255, 215, 0, 255);
    if (tkColorName == "gold1")
        return v_TraCIColor(255, 215, 0, 255);
    if (tkColorName == "gold2")
        return v_TraCIColor(238, 201, 0, 255);
    if (tkColorName == "gold3")
        return v_TraCIColor(205, 173, 0, 255);
    if (tkColorName == "gold4")
        return v_TraCIColor(139, 117, 0, 255);
    if (tkColorName == "goldenrod")
        return v_TraCIColor(218, 165, 32, 255);
    if (tkColorName == "goldenrod1")
        return v_TraCIColor(255, 193, 37, 255);
    if (tkColorName == "goldenrod2")
        return v_TraCIColor(238, 180, 34, 255);
    if (tkColorName == "goldenrod3")
        return v_TraCIColor(205, 155, 29, 255);
    if (tkColorName == "goldenrod4")
        return v_TraCIColor(139, 105, 20, 255);
    if (tkColorName == "gray")
        return v_TraCIColor(190, 190, 190, 255);
    if (tkColorName == "gray0")
        return v_TraCIColor(0, 0, 0, 255);
    if (tkColorName == "gray1")
        return v_TraCIColor(3, 3, 3, 255);
    if (tkColorName == "gray2")
        return v_TraCIColor(5, 5, 5, 255);
    if (tkColorName == "gray3")
        return v_TraCIColor(8, 8, 8, 255);
    if (tkColorName == "gray4")
        return v_TraCIColor(10, 10, 10, 255);
    if (tkColorName == "gray5")
        return v_TraCIColor(13, 13, 13, 255);
    if (tkColorName == "gray6")
        return v_TraCIColor(15, 15, 15, 255);
    if (tkColorName == "gray7")
        return v_TraCIColor(18, 18, 18, 255);
    if (tkColorName == "gray8")
        return v_TraCIColor(20, 20, 20, 255);
    if (tkColorName == "gray9")
        return v_TraCIColor(23, 23, 23, 255);
    if (tkColorName == "gray10")
        return v_TraCIColor(26, 26, 26, 255);
    if (tkColorName == "gray11")
        return v_TraCIColor(28, 28, 28, 255);
    if (tkColorName == "gray12")
        return v_TraCIColor(31, 31, 31, 255);
    if (tkColorName == "gray13")
        return v_TraCIColor(33, 33, 33, 255);
    if (tkColorName == "gray14")
        return v_TraCIColor(36, 36, 36, 255);
    if (tkColorName == "gray15")
        return v_TraCIColor(38, 38, 38, 255);
    if (tkColorName == "gray16")
        return v_TraCIColor(41, 41, 41, 255);
    if (tkColorName == "gray17")
        return v_TraCIColor(43, 43, 43, 255);
    if (tkColorName == "gray18")
        return v_TraCIColor(46, 46, 46, 255);
    if (tkColorName == "gray19")
        return v_TraCIColor(48, 48, 48, 255);
    if (tkColorName == "gray20")
        return v_TraCIColor(51, 51, 51, 255);
    if (tkColorName == "gray21")
        return v_TraCIColor(54, 54, 54, 255);
    if (tkColorName == "gray22")
        return v_TraCIColor(56, 56, 56, 255);
    if (tkColorName == "gray23")
        return v_TraCIColor(59, 59, 59, 255);
    if (tkColorName == "gray24")
        return v_TraCIColor(61, 61, 61, 255);
    if (tkColorName == "gray25")
        return v_TraCIColor(64, 64, 64, 255);
    if (tkColorName == "gray26")
        return v_TraCIColor(66, 66, 66, 255);
    if (tkColorName == "gray27")
        return v_TraCIColor(69, 69, 69, 255);
    if (tkColorName == "gray28")
        return v_TraCIColor(71, 71, 71, 255);
    if (tkColorName == "gray29")
        return v_TraCIColor(74, 74, 74, 255);
    if (tkColorName == "gray30")
        return v_TraCIColor(77, 77, 77, 255);
    if (tkColorName == "gray31")
        return v_TraCIColor(79, 79, 79, 255);
    if (tkColorName == "gray32")
        return v_TraCIColor(82, 82, 82, 255);
    if (tkColorName == "gray33")
        return v_TraCIColor(84, 84, 84, 255);
    if (tkColorName == "gray34")
        return v_TraCIColor(87, 87, 87, 255);
    if (tkColorName == "gray35")
        return v_TraCIColor(89, 89, 89, 255);
    if (tkColorName == "gray36")
        return v_TraCIColor(92, 92, 92, 255);
    if (tkColorName == "gray37")
        return v_TraCIColor(94, 94, 94, 255);
    if (tkColorName == "gray38")
        return v_TraCIColor(97, 97, 97, 255);
    if (tkColorName == "gray39")
        return v_TraCIColor(99, 99, 99, 255);
    if (tkColorName == "gray40")
        return v_TraCIColor(102, 102, 102, 255);
    if (tkColorName == "gray41")
        return v_TraCIColor(105, 105, 105, 255);
    if (tkColorName == "gray42")
        return v_TraCIColor(107, 107, 107, 255);
    if (tkColorName == "gray43")
        return v_TraCIColor(110, 110, 110, 255);
    if (tkColorName == "gray44")
        return v_TraCIColor(112, 112, 112, 255);
    if (tkColorName == "gray45")
        return v_TraCIColor(115, 115, 115, 255);
    if (tkColorName == "gray46")
        return v_TraCIColor(117, 117, 117, 255);
    if (tkColorName == "gray47")
        return v_TraCIColor(120, 120, 120, 255);
    if (tkColorName == "gray48")
        return v_TraCIColor(122, 122, 122, 255);
    if (tkColorName == "gray49")
        return v_TraCIColor(125, 125, 125, 255);
    if (tkColorName == "gray50")
        return v_TraCIColor(127, 127, 127, 255);
    if (tkColorName == "gray51")
        return v_TraCIColor(130, 130, 130, 255);
    if (tkColorName == "gray52")
        return v_TraCIColor(133, 133, 133, 255);
    if (tkColorName == "gray53")
        return v_TraCIColor(135, 135, 135, 255);
    if (tkColorName == "gray54")
        return v_TraCIColor(138, 138, 138, 255);
    if (tkColorName == "gray55")
        return v_TraCIColor(140, 140, 140, 255);
    if (tkColorName == "gray56")
        return v_TraCIColor(143, 143, 143, 255);
    if (tkColorName == "gray57")
        return v_TraCIColor(145, 145, 145, 255);
    if (tkColorName == "gray58")
        return v_TraCIColor(148, 148, 148, 255);
    if (tkColorName == "gray59")
        return v_TraCIColor(150, 150, 150, 255);
    if (tkColorName == "gray60")
        return v_TraCIColor(153, 153, 153, 255);
    if (tkColorName == "gray61")
        return v_TraCIColor(156, 156, 156, 255);
    if (tkColorName == "gray62")
        return v_TraCIColor(158, 158, 158, 255);
    if (tkColorName == "gray63")
        return v_TraCIColor(161, 161, 161, 255);
    if (tkColorName == "gray64")
        return v_TraCIColor(163, 163, 163, 255);
    if (tkColorName == "gray65")
        return v_TraCIColor(166, 166, 166, 255);
    if (tkColorName == "gray66")
        return v_TraCIColor(168, 168, 168, 255);
    if (tkColorName == "gray67")
        return v_TraCIColor(171, 171, 171, 255);
    if (tkColorName == "gray68")
        return v_TraCIColor(173, 173, 173, 255);
    if (tkColorName == "gray69")
        return v_TraCIColor(176, 176, 176, 255);
    if (tkColorName == "gray70")
        return v_TraCIColor(179, 179, 179, 255);
    if (tkColorName == "gray71")
        return v_TraCIColor(181, 181, 181, 255);
    if (tkColorName == "gray72")
        return v_TraCIColor(184, 184, 184, 255);
    if (tkColorName == "gray73")
        return v_TraCIColor(186, 186, 186, 255);
    if (tkColorName == "gray74")
        return v_TraCIColor(189, 189, 189, 255);
    if (tkColorName == "gray75")
        return v_TraCIColor(191, 191, 191, 255);
    if (tkColorName == "gray76")
        return v_TraCIColor(194, 194, 194, 255);
    if (tkColorName == "gray77")
        return v_TraCIColor(196, 196, 196, 255);
    if (tkColorName == "gray78")
        return v_TraCIColor(199, 199, 199, 255);
    if (tkColorName == "gray79")
        return v_TraCIColor(201, 201, 201, 255);
    if (tkColorName == "gray80")
        return v_TraCIColor(204, 204, 204, 255);
    if (tkColorName == "gray81")
        return v_TraCIColor(207, 207, 207, 255);
    if (tkColorName == "gray82")
        return v_TraCIColor(209, 209, 209, 255);
    if (tkColorName == "gray83")
        return v_TraCIColor(212, 212, 212, 255);
    if (tkColorName == "gray84")
        return v_TraCIColor(214, 214, 214, 255);
    if (tkColorName == "gray85")
        return v_TraCIColor(217, 217, 217, 255);
    if (tkColorName == "gray86")
        return v_TraCIColor(219, 219, 219, 255);
    if (tkColorName == "gray87")
        return v_TraCIColor(222, 222, 222, 255);
    if (tkColorName == "gray88")
        return v_TraCIColor(224, 224, 224, 255);
    if (tkColorName == "gray89")
        return v_TraCIColor(227, 227, 227, 255);
    if (tkColorName == "gray90")
        return v_TraCIColor(229, 229, 229, 255);
    if (tkColorName == "gray91")
        return v_TraCIColor(232, 232, 232, 255);
    if (tkColorName == "gray92")
        return v_TraCIColor(235, 235, 235, 255);
    if (tkColorName == "gray93")
        return v_TraCIColor(237, 237, 237, 255);
    if (tkColorName == "gray94")
        return v_TraCIColor(240, 240, 240, 255);
    if (tkColorName == "gray95")
        return v_TraCIColor(242, 242, 242, 255);
    if (tkColorName == "gray96")
        return v_TraCIColor(245, 245, 245, 255);
    if (tkColorName == "gray97")
        return v_TraCIColor(247, 247, 247, 255);
    if (tkColorName == "gray98")
        return v_TraCIColor(250, 250, 250, 255);
    if (tkColorName == "gray99")
        return v_TraCIColor(252, 252, 252, 255);
    if (tkColorName == "gray100")
        return v_TraCIColor(255, 255, 255, 255);
    if (tkColorName == "green")
        return v_TraCIColor(0, 255, 0, 255);
    if (tkColorName == "green yellow")
        return v_TraCIColor(173, 255, 47, 255);
    if (tkColorName == "green1")
        return v_TraCIColor(0, 255, 0, 255);
    if (tkColorName == "green2")
        return v_TraCIColor(0, 238, 0, 255);
    if (tkColorName == "green3")
        return v_TraCIColor(0, 205, 0, 255);
    if (tkColorName == "green4")
        return v_TraCIColor(0, 139, 0, 255);
    if (tkColorName == "GreenYellow")
        return v_TraCIColor(173, 255, 47, 255);
    if (tkColorName == "grey")
        return v_TraCIColor(190, 190, 190, 255);
    if (tkColorName == "grey0")
        return v_TraCIColor(0, 0, 0, 255);
    if (tkColorName == "grey1")
        return v_TraCIColor(3, 3, 3, 255);
    if (tkColorName == "grey2")
        return v_TraCIColor(5, 5, 5, 255);
    if (tkColorName == "grey3")
        return v_TraCIColor(8, 8, 8, 255);
    if (tkColorName == "grey4")
        return v_TraCIColor(10, 10, 10, 255);
    if (tkColorName == "grey5")
        return v_TraCIColor(13, 13, 13, 255);
    if (tkColorName == "grey6")
        return v_TraCIColor(15, 15, 15, 255);
    if (tkColorName == "grey7")
        return v_TraCIColor(18, 18, 18, 255);
    if (tkColorName == "grey8")
        return v_TraCIColor(20, 20, 20, 255);
    if (tkColorName == "grey9")
        return v_TraCIColor(23, 23, 23, 255);
    if (tkColorName == "grey10")
        return v_TraCIColor(26, 26, 26, 255);
    if (tkColorName == "grey11")
        return v_TraCIColor(28, 28, 28, 255);
    if (tkColorName == "grey12")
        return v_TraCIColor(31, 31, 31, 255);
    if (tkColorName == "grey13")
        return v_TraCIColor(33, 33, 33, 255);
    if (tkColorName == "grey14")
        return v_TraCIColor(36, 36, 36, 255);
    if (tkColorName == "grey15")
        return v_TraCIColor(38, 38, 38, 255);
    if (tkColorName == "grey16")
        return v_TraCIColor(41, 41, 41, 255);
    if (tkColorName == "grey17")
        return v_TraCIColor(43, 43, 43, 255);
    if (tkColorName == "grey18")
        return v_TraCIColor(46, 46, 46, 255);
    if (tkColorName == "grey19")
        return v_TraCIColor(48, 48, 48, 255);
    if (tkColorName == "grey20")
        return v_TraCIColor(51, 51, 51, 255);
    if (tkColorName == "grey21")
        return v_TraCIColor(54, 54, 54, 255);
    if (tkColorName == "grey22")
        return v_TraCIColor(56, 56, 56, 255);
    if (tkColorName == "grey23")
        return v_TraCIColor(59, 59, 59, 255);
    if (tkColorName == "grey24")
        return v_TraCIColor(61, 61, 61, 255);
    if (tkColorName == "grey25")
        return v_TraCIColor(64, 64, 64, 255);
    if (tkColorName == "grey26")
        return v_TraCIColor(66, 66, 66, 255);
    if (tkColorName == "grey27")
        return v_TraCIColor(69, 69, 69, 255);
    if (tkColorName == "grey28")
        return v_TraCIColor(71, 71, 71, 255);
    if (tkColorName == "grey29")
        return v_TraCIColor(74, 74, 74, 255);
    if (tkColorName == "grey30")
        return v_TraCIColor(77, 77, 77, 255);
    if (tkColorName == "grey31")
        return v_TraCIColor(79, 79, 79, 255);
    if (tkColorName == "grey32")
        return v_TraCIColor(82, 82, 82, 255);
    if (tkColorName == "grey33")
        return v_TraCIColor(84, 84, 84, 255);
    if (tkColorName == "grey34")
        return v_TraCIColor(87, 87, 87, 255);
    if (tkColorName == "grey35")
        return v_TraCIColor(89, 89, 89, 255);
    if (tkColorName == "grey36")
        return v_TraCIColor(92, 92, 92, 255);
    if (tkColorName == "grey37")
        return v_TraCIColor(94, 94, 94, 255);
    if (tkColorName == "grey38")
        return v_TraCIColor(97, 97, 97, 255);
    if (tkColorName == "grey39")
        return v_TraCIColor(99, 99, 99, 255);
    if (tkColorName == "grey40")
        return v_TraCIColor(102, 102, 102, 255);
    if (tkColorName == "grey41")
        return v_TraCIColor(105, 105, 105, 255);
    if (tkColorName == "grey42")
        return v_TraCIColor(107, 107, 107, 255);
    if (tkColorName == "grey43")
        return v_TraCIColor(110, 110, 110, 255);
    if (tkColorName == "grey44")
        return v_TraCIColor(112, 112, 112, 255);
    if (tkColorName == "grey45")
        return v_TraCIColor(115, 115, 115, 255);
    if (tkColorName == "grey46")
        return v_TraCIColor(117, 117, 117, 255);
    if (tkColorName == "grey47")
        return v_TraCIColor(120, 120, 120, 255);
    if (tkColorName == "grey48")
        return v_TraCIColor(122, 122, 122, 255);
    if (tkColorName == "grey49")
        return v_TraCIColor(125, 125, 125, 255);
    if (tkColorName == "grey50")
        return v_TraCIColor(127, 127, 127, 255);
    if (tkColorName == "grey51")
        return v_TraCIColor(130, 130, 130, 255);
    if (tkColorName == "grey52")
        return v_TraCIColor(133, 133, 133, 255);
    if (tkColorName == "grey53")
        return v_TraCIColor(135, 135, 135, 255);
    if (tkColorName == "grey54")
        return v_TraCIColor(138, 138, 138, 255);
    if (tkColorName == "grey55")
        return v_TraCIColor(140, 140, 140, 255);
    if (tkColorName == "grey56")
        return v_TraCIColor(143, 143, 143, 255);
    if (tkColorName == "grey57")
        return v_TraCIColor(145, 145, 145, 255);
    if (tkColorName == "grey58")
        return v_TraCIColor(148, 148, 148, 255);
    if (tkColorName == "grey59")
        return v_TraCIColor(150, 150, 150, 255);
    if (tkColorName == "grey60")
        return v_TraCIColor(153, 153, 153, 255);
    if (tkColorName == "grey61")
        return v_TraCIColor(156, 156, 156, 255);
    if (tkColorName == "grey62")
        return v_TraCIColor(158, 158, 158, 255);
    if (tkColorName == "grey63")
        return v_TraCIColor(161, 161, 161, 255);
    if (tkColorName == "grey64")
        return v_TraCIColor(163, 163, 163, 255);
    if (tkColorName == "grey65")
        return v_TraCIColor(166, 166, 166, 255);
    if (tkColorName == "grey66")
        return v_TraCIColor(168, 168, 168, 255);
    if (tkColorName == "grey67")
        return v_TraCIColor(171, 171, 171, 255);
    if (tkColorName == "grey68")
        return v_TraCIColor(173, 173, 173, 255);
    if (tkColorName == "grey69")
        return v_TraCIColor(176, 176, 176, 255);
    if (tkColorName == "grey70")
        return v_TraCIColor(179, 179, 179, 255);
    if (tkColorName == "grey71")
        return v_TraCIColor(181, 181, 181, 255);
    if (tkColorName == "grey72")
        return v_TraCIColor(184, 184, 184, 255);
    if (tkColorName == "grey73")
        return v_TraCIColor(186, 186, 186, 255);
    if (tkColorName == "grey74")
        return v_TraCIColor(189, 189, 189, 255);
    if (tkColorName == "grey75")
        return v_TraCIColor(191, 191, 191, 255);
    if (tkColorName == "grey76")
        return v_TraCIColor(194, 194, 194, 255);
    if (tkColorName == "grey77")
        return v_TraCIColor(196, 196, 196, 255);
    if (tkColorName == "grey78")
        return v_TraCIColor(199, 199, 199, 255);
    if (tkColorName == "grey79")
        return v_TraCIColor(201, 201, 201, 255);
    if (tkColorName == "grey80")
        return v_TraCIColor(204, 204, 204, 255);
    if (tkColorName == "grey81")
        return v_TraCIColor(207, 207, 207, 255);
    if (tkColorName == "grey82")
        return v_TraCIColor(209, 209, 209, 255);
    if (tkColorName == "grey83")
        return v_TraCIColor(212, 212, 212, 255);
    if (tkColorName == "grey84")
        return v_TraCIColor(214, 214, 214, 255);
    if (tkColorName == "grey85")
        return v_TraCIColor(217, 217, 217, 255);
    if (tkColorName == "grey86")
        return v_TraCIColor(219, 219, 219, 255);
    if (tkColorName == "grey87")
        return v_TraCIColor(222, 222, 222, 255);
    if (tkColorName == "grey88")
        return v_TraCIColor(224, 224, 224, 255);
    if (tkColorName == "grey89")
        return v_TraCIColor(227, 227, 227, 255);
    if (tkColorName == "grey90")
        return v_TraCIColor(229, 229, 229, 255);
    if (tkColorName == "grey91")
        return v_TraCIColor(232, 232, 232, 255);
    if (tkColorName == "grey92")
        return v_TraCIColor(235, 235, 235, 255);
    if (tkColorName == "grey93")
        return v_TraCIColor(237, 237, 237, 255);
    if (tkColorName == "grey94")
        return v_TraCIColor(240, 240, 240, 255);
    if (tkColorName == "grey95")
        return v_TraCIColor(242, 242, 242, 255);
    if (tkColorName == "grey96")
        return v_TraCIColor(245, 245, 245, 255);
    if (tkColorName == "grey97")
        return v_TraCIColor(247, 247, 247, 255);
    if (tkColorName == "grey98")
        return v_TraCIColor(250, 250, 250, 255);
    if (tkColorName == "grey99")
        return v_TraCIColor(252, 252, 252, 255);
    if (tkColorName == "grey100")
        return v_TraCIColor(255, 255, 255, 255);
    if (tkColorName == "honeydew")
        return v_TraCIColor(240, 255, 240, 255);
    if (tkColorName == "honeydew1")
        return v_TraCIColor(240, 255, 240, 255);
    if (tkColorName == "honeydew2")
        return v_TraCIColor(224, 238, 224, 255);
    if (tkColorName == "honeydew3")
        return v_TraCIColor(193, 205, 193, 255);
    if (tkColorName == "honeydew4")
        return v_TraCIColor(131, 139, 131, 255);
    if (tkColorName == "hot pink")
        return v_TraCIColor(255, 105, 180, 255);
    if (tkColorName == "HotPink")
        return v_TraCIColor(255, 105, 180, 255);
    if (tkColorName == "HotPink1")
        return v_TraCIColor(255, 110, 180, 255);
    if (tkColorName == "HotPink2")
        return v_TraCIColor(238, 106, 167, 255);
    if (tkColorName == "HotPink3")
        return v_TraCIColor(205, 96, 144, 255);
    if (tkColorName == "HotPink4")
        return v_TraCIColor(139, 58, 98, 255);
    if (tkColorName == "indian red")
        return v_TraCIColor(205, 92, 92, 255);
    if (tkColorName == "IndianRed")
        return v_TraCIColor(205, 92, 92, 255);
    if (tkColorName == "IndianRed1")
        return v_TraCIColor(255, 106, 106, 255);
    if (tkColorName == "IndianRed2")
        return v_TraCIColor(238, 99, 99, 255);
    if (tkColorName == "IndianRed3")
        return v_TraCIColor(205, 85, 85, 255);
    if (tkColorName == "IndianRed4")
        return v_TraCIColor(139, 58, 58, 255);
    if (tkColorName == "ivory")
        return v_TraCIColor(255, 255, 240, 255);
    if (tkColorName == "ivory1")
        return v_TraCIColor(255, 255, 240, 255);
    if (tkColorName == "ivory2")
        return v_TraCIColor(238, 238, 224, 255);
    if (tkColorName == "ivory3")
        return v_TraCIColor(205, 205, 193, 255);
    if (tkColorName == "ivory4")
        return v_TraCIColor(139, 139, 131, 255);
    if (tkColorName == "khaki")
        return v_TraCIColor(240, 230, 140, 255);
    if (tkColorName == "khaki1")
        return v_TraCIColor(255, 246, 143, 255);
    if (tkColorName == "khaki2")
        return v_TraCIColor(238, 230, 133, 255);
    if (tkColorName == "khaki3")
        return v_TraCIColor(205, 198, 115, 255);
    if (tkColorName == "khaki4")
        return v_TraCIColor(139, 134, 78, 255);
    if (tkColorName == "lavender")
        return v_TraCIColor(230, 230, 250, 255);
    if (tkColorName == "lavender blush")
        return v_TraCIColor(255, 240, 245, 255);
    if (tkColorName == "LavenderBlush")
        return v_TraCIColor(255, 240, 245, 255);
    if (tkColorName == "LavenderBlush1")
        return v_TraCIColor(255, 240, 245, 255);
    if (tkColorName == "LavenderBlush2")
        return v_TraCIColor(238, 224, 229, 255);
    if (tkColorName == "LavenderBlush3")
        return v_TraCIColor(205, 193, 197, 255);
    if (tkColorName == "LavenderBlush4")
        return v_TraCIColor(139, 131, 134, 255);
    if (tkColorName == "lawn green")
        return v_TraCIColor(124, 252, 0, 255);
    if (tkColorName == "LawnGreen")
        return v_TraCIColor(124, 252, 0, 255);
    if (tkColorName == "lemon chiffon")
        return v_TraCIColor(255, 250, 205, 255);
    if (tkColorName == "LemonChiffon")
        return v_TraCIColor(255, 250, 205, 255);
    if (tkColorName == "LemonChiffon1")
        return v_TraCIColor(255, 250, 205, 255);
    if (tkColorName == "LemonChiffon2")
        return v_TraCIColor(238, 233, 191, 255);
    if (tkColorName == "LemonChiffon3")
        return v_TraCIColor(205, 201, 165, 255);
    if (tkColorName == "LemonChiffon4")
        return v_TraCIColor(139, 137, 112, 255);
    if (tkColorName == "light blue")
        return v_TraCIColor(173, 216, 230, 255);
    if (tkColorName == "light coral")
        return v_TraCIColor(240, 128, 128, 255);
    if (tkColorName == "light cyan")
        return v_TraCIColor(224, 255, 255, 255);
    if (tkColorName == "light goldenrod")
        return v_TraCIColor(238, 221, 130, 255);
    if (tkColorName == "light goldenrod yellow")
        return v_TraCIColor(250, 250, 210, 255);
    if (tkColorName == "light gray")
        return v_TraCIColor(211, 211, 211, 255);
    if (tkColorName == "light green")
        return v_TraCIColor(144, 238, 144, 255);
    if (tkColorName == "light grey")
        return v_TraCIColor(211, 211, 211, 255);
    if (tkColorName == "light pink")
        return v_TraCIColor(255, 182, 193, 255);
    if (tkColorName == "light salmon")
        return v_TraCIColor(255, 160, 122, 255);
    if (tkColorName == "light sea green")
        return v_TraCIColor(32, 178, 170, 255);
    if (tkColorName == "light sky blue")
        return v_TraCIColor(135, 206, 250, 255);
    if (tkColorName == "light slate blue")
        return v_TraCIColor(132, 112, 255, 255);
    if (tkColorName == "light slate gray")
        return v_TraCIColor(119, 136, 153, 255);
    if (tkColorName == "light slate grey")
        return v_TraCIColor(119, 136, 153, 255);
    if (tkColorName == "light steel blue")
        return v_TraCIColor(176, 196, 222, 255);
    if (tkColorName == "light yellow")
        return v_TraCIColor(255, 255, 224, 255);
    if (tkColorName == "LightBlue")
        return v_TraCIColor(173, 216, 230, 255);
    if (tkColorName == "LightBlue1")
        return v_TraCIColor(191, 239, 255, 255);
    if (tkColorName == "LightBlue2")
        return v_TraCIColor(178, 223, 238, 255);
    if (tkColorName == "LightBlue3")
        return v_TraCIColor(154, 192, 205, 255);
    if (tkColorName == "LightBlue4")
        return v_TraCIColor(104, 131, 139, 255);
    if (tkColorName == "LightCoral")
        return v_TraCIColor(240, 128, 128, 255);
    if (tkColorName == "LightCyan")
        return v_TraCIColor(224, 255, 255, 255);
    if (tkColorName == "LightCyan1")
        return v_TraCIColor(224, 255, 255, 255);
    if (tkColorName == "LightCyan2")
        return v_TraCIColor(209, 238, 238, 255);
    if (tkColorName == "LightCyan3")
        return v_TraCIColor(180, 205, 205, 255);
    if (tkColorName == "LightCyan4")
        return v_TraCIColor(122, 139, 139, 255);
    if (tkColorName == "LightGoldenrod")
        return v_TraCIColor(238, 221, 130, 255);
    if (tkColorName == "LightGoldenrod1")
        return v_TraCIColor(255, 236, 139, 255);
    if (tkColorName == "LightGoldenrod2")
        return v_TraCIColor(238, 220, 130, 255);
    if (tkColorName == "LightGoldenrod3")
        return v_TraCIColor(205, 190, 112, 255);
    if (tkColorName == "LightGoldenrod4")
        return v_TraCIColor(139, 129, 76, 255);
    if (tkColorName == "LightGoldenrodYellow")
        return v_TraCIColor(250, 250, 210, 255);
    if (tkColorName == "LightGray")
        return v_TraCIColor(211, 211, 211, 255);
    if (tkColorName == "LightGreen")
        return v_TraCIColor(144, 238, 144, 255);
    if (tkColorName == "LightGrey")
        return v_TraCIColor(211, 211, 211, 255);
    if (tkColorName == "LightPink")
        return v_TraCIColor(255, 182, 193, 255);
    if (tkColorName == "LightPink1")
        return v_TraCIColor(255, 174, 185, 255);
    if (tkColorName == "LightPink2")
        return v_TraCIColor(238, 162, 173, 255);
    if (tkColorName == "LightPink3")
        return v_TraCIColor(205, 140, 149, 255);
    if (tkColorName == "LightPink4")
        return v_TraCIColor(139, 95, 101, 255);
    if (tkColorName == "LightSalmon")
        return v_TraCIColor(255, 160, 122, 255);
    if (tkColorName == "LightSalmon1")
        return v_TraCIColor(255, 160, 122, 255);
    if (tkColorName == "LightSalmon2")
        return v_TraCIColor(238, 149, 114, 255);
    if (tkColorName == "LightSalmon3")
        return v_TraCIColor(205, 129, 98, 255);
    if (tkColorName == "LightSalmon4")
        return v_TraCIColor(139, 87, 66, 255);
    if (tkColorName == "LightSeaGreen")
        return v_TraCIColor(32, 178, 170, 255);
    if (tkColorName == "LightSkyBlue")
        return v_TraCIColor(135, 206, 250, 255);
    if (tkColorName == "LightSkyBlue1")
        return v_TraCIColor(176, 226, 255, 255);
    if (tkColorName == "LightSkyBlue2")
        return v_TraCIColor(164, 211, 238, 255);
    if (tkColorName == "LightSkyBlue3")
        return v_TraCIColor(141, 182, 205, 255);
    if (tkColorName == "LightSkyBlue4")
        return v_TraCIColor(96, 123, 139, 255);
    if (tkColorName == "LightSlateBlue")
        return v_TraCIColor(132, 112, 255, 255);
    if (tkColorName == "LightSlateGray")
        return v_TraCIColor(119, 136, 153, 255);
    if (tkColorName == "LightSlateGrey")
        return v_TraCIColor(119, 136, 153, 255);
    if (tkColorName == "LightSteelBlue")
        return v_TraCIColor(176, 196, 222, 255);
    if (tkColorName == "LightSteelBlue1")
        return v_TraCIColor(202, 225, 255, 255);
    if (tkColorName == "LightSteelBlue2")
        return v_TraCIColor(188, 210, 238, 255);
    if (tkColorName == "LightSteelBlue3")
        return v_TraCIColor(162, 181, 205, 255);
    if (tkColorName == "LightSteelBlue4")
        return v_TraCIColor(110, 123, 139, 255);
    if (tkColorName == "LightYellow")
        return v_TraCIColor(255, 255, 224, 255);
    if (tkColorName == "LightYellow1")
        return v_TraCIColor(255, 255, 224, 255);
    if (tkColorName == "LightYellow2")
        return v_TraCIColor(238, 238, 209, 255);
    if (tkColorName == "LightYellow3")
        return v_TraCIColor(205, 205, 180, 255);
    if (tkColorName == "LightYellow4")
        return v_TraCIColor(139, 139, 122, 255);
    if (tkColorName == "lime green")
        return v_TraCIColor(50, 205, 50, 255);
    if (tkColorName == "LimeGreen")
        return v_TraCIColor(50, 205, 50, 255);
    if (tkColorName == "linen")
        return v_TraCIColor(250, 240, 230, 255);
    if (tkColorName == "magenta")
        return v_TraCIColor(255, 0, 255, 255);
    if (tkColorName == "magenta1")
        return v_TraCIColor(255, 0, 255, 255);
    if (tkColorName == "magenta2")
        return v_TraCIColor(238, 0, 238, 255);
    if (tkColorName == "magenta3")
        return v_TraCIColor(205, 0, 205, 255);
    if (tkColorName == "magenta4")
        return v_TraCIColor(139, 0, 139, 255);
    if (tkColorName == "maroon")
        return v_TraCIColor(176, 48, 96, 255);
    if (tkColorName == "maroon1")
        return v_TraCIColor(255, 52, 179, 255);
    if (tkColorName == "maroon2")
        return v_TraCIColor(238, 48, 167, 255);
    if (tkColorName == "maroon3")
        return v_TraCIColor(205, 41, 144, 255);
    if (tkColorName == "maroon4")
        return v_TraCIColor(139, 28, 98, 255);
    if (tkColorName == "medium aquamarine")
        return v_TraCIColor(102, 205, 170, 255);
    if (tkColorName == "medium blue")
        return v_TraCIColor(0, 0, 205, 255);
    if (tkColorName == "medium orchid")
        return v_TraCIColor(186, 85, 211, 255);
    if (tkColorName == "medium purple")
        return v_TraCIColor(147, 112, 219, 255);
    if (tkColorName == "medium sea green")
        return v_TraCIColor(60, 179, 113, 255);
    if (tkColorName == "medium slate blue")
        return v_TraCIColor(123, 104, 238, 255);
    if (tkColorName == "medium spring green")
        return v_TraCIColor(0, 250, 154, 255);
    if (tkColorName == "medium turquoise")
        return v_TraCIColor(72, 209, 204, 255);
    if (tkColorName == "medium violet red")
        return v_TraCIColor(199, 21, 133, 255);
    if (tkColorName == "MediumAquamarine")
        return v_TraCIColor(102, 205, 170, 255);
    if (tkColorName == "MediumBlue")
        return v_TraCIColor(0, 0, 205, 255);
    if (tkColorName == "MediumOrchid")
        return v_TraCIColor(186, 85, 211, 255);
    if (tkColorName == "MediumOrchid1")
        return v_TraCIColor(224, 102, 255, 255);
    if (tkColorName == "MediumOrchid2")
        return v_TraCIColor(209, 95, 238, 255);
    if (tkColorName == "MediumOrchid3")
        return v_TraCIColor(180, 82, 205, 255);
    if (tkColorName == "MediumOrchid4")
        return v_TraCIColor(122, 55, 139, 255);
    if (tkColorName == "MediumPurple")
        return v_TraCIColor(147, 112, 219, 255);
    if (tkColorName == "MediumPurple1")
        return v_TraCIColor(171, 130, 255, 255);
    if (tkColorName == "MediumPurple2")
        return v_TraCIColor(159, 121, 238, 255);
    if (tkColorName == "MediumPurple3")
        return v_TraCIColor(137, 104, 205, 255);
    if (tkColorName == "MediumPurple4")
        return v_TraCIColor(93, 71, 139, 255);
    if (tkColorName == "MediumSeaGreen")
        return v_TraCIColor(60, 179, 113, 255);
    if (tkColorName == "MediumSlateBlue")
        return v_TraCIColor(123, 104, 238, 255);
    if (tkColorName == "MediumSpringGreen")
        return v_TraCIColor(0, 250, 154, 255);
    if (tkColorName == "MediumTurquoise")
        return v_TraCIColor(72, 209, 204, 255);
    if (tkColorName == "MediumVioletRed")
        return v_TraCIColor(199, 21, 133, 255);
    if (tkColorName == "midnight blue")
        return v_TraCIColor(25, 25, 112, 255);
    if (tkColorName == "MidnightBlue")
        return v_TraCIColor(25, 25, 112, 255);
    if (tkColorName == "mint cream")
        return v_TraCIColor(245, 255, 250, 255);
    if (tkColorName == "MintCream")
        return v_TraCIColor(245, 255, 250, 255);
    if (tkColorName == "misty rose")
        return v_TraCIColor(255, 228, 225, 255);
    if (tkColorName == "MistyRose")
        return v_TraCIColor(255, 228, 225, 255);
    if (tkColorName == "MistyRose1")
        return v_TraCIColor(255, 228, 225, 255);
    if (tkColorName == "MistyRose2")
        return v_TraCIColor(238, 213, 210, 255);
    if (tkColorName == "MistyRose3")
        return v_TraCIColor(205, 183, 181, 255);
    if (tkColorName == "MistyRose4")
        return v_TraCIColor(139, 125, 123, 255);
    if (tkColorName == "moccasin")
        return v_TraCIColor(255, 228, 181, 255);
    if (tkColorName == "navajo white")
        return v_TraCIColor(255, 222, 173, 255);
    if (tkColorName == "NavajoWhite")
        return v_TraCIColor(255, 222, 173, 255);
    if (tkColorName == "NavajoWhite1")
        return v_TraCIColor(255, 222, 173, 255);
    if (tkColorName == "NavajoWhite2")
        return v_TraCIColor(238, 207, 161, 255);
    if (tkColorName == "NavajoWhite3")
        return v_TraCIColor(205, 179, 139, 255);
    if (tkColorName == "NavajoWhite4")
        return v_TraCIColor(139, 121, 94, 255);
    if (tkColorName == "navy")
        return v_TraCIColor(0, 0, 128, 255);
    if (tkColorName == "navy blue")
        return v_TraCIColor(0, 0, 128, 255);
    if (tkColorName == "NavyBlue")
        return v_TraCIColor(0, 0, 128, 255);
    if (tkColorName == "old lace")
        return v_TraCIColor(253, 245, 230, 255);
    if (tkColorName == "OldLace")
        return v_TraCIColor(253, 245, 230, 255);
    if (tkColorName == "olive drab")
        return v_TraCIColor(107, 142, 35, 255);
    if (tkColorName == "OliveDrab")
        return v_TraCIColor(107, 142, 35, 255);
    if (tkColorName == "OliveDrab1")
        return v_TraCIColor(192, 255, 62, 255);
    if (tkColorName == "OliveDrab2")
        return v_TraCIColor(179, 238, 58, 255);
    if (tkColorName == "OliveDrab3")
        return v_TraCIColor(154, 205, 50, 255);
    if (tkColorName == "OliveDrab4")
        return v_TraCIColor(105, 139, 34, 255);
    if (tkColorName == "orange")
        return v_TraCIColor(255, 165, 0, 255);
    if (tkColorName == "orange red")
        return v_TraCIColor(255, 69, 0, 255);
    if (tkColorName == "orange1")
        return v_TraCIColor(255, 165, 0, 255);
    if (tkColorName == "orange2")
        return v_TraCIColor(238, 154, 0, 255);
    if (tkColorName == "orange3")
        return v_TraCIColor(205, 133, 0, 255);
    if (tkColorName == "orange4")
        return v_TraCIColor(139, 90, 0, 255);
    if (tkColorName == "OrangeRed")
        return v_TraCIColor(255, 69, 0, 255);
    if (tkColorName == "OrangeRed1")
        return v_TraCIColor(255, 69, 0, 255);
    if (tkColorName == "OrangeRed2")
        return v_TraCIColor(238, 64, 0, 255);
    if (tkColorName == "OrangeRed3")
        return v_TraCIColor(205, 55, 0, 255);
    if (tkColorName == "OrangeRed4")
        return v_TraCIColor(139, 37, 0, 255);
    if (tkColorName == "orchid")
        return v_TraCIColor(218, 112, 214, 255);
    if (tkColorName == "orchid1")
        return v_TraCIColor(255, 131, 250, 255);
    if (tkColorName == "orchid2")
        return v_TraCIColor(238, 122, 233, 255);
    if (tkColorName == "orchid3")
        return v_TraCIColor(205, 105, 201, 255);
    if (tkColorName == "orchid4")
        return v_TraCIColor(139, 71, 137, 255);
    if (tkColorName == "pale goldenrod")
        return v_TraCIColor(238, 232, 170, 255);
    if (tkColorName == "pale green")
        return v_TraCIColor(152, 251, 152, 255);
    if (tkColorName == "pale turquoise")
        return v_TraCIColor(175, 238, 238, 255);
    if (tkColorName == "pale violet red")
        return v_TraCIColor(219, 112, 147, 255);
    if (tkColorName == "PaleGoldenrod")
        return v_TraCIColor(238, 232, 170, 255);
    if (tkColorName == "PaleGreen")
        return v_TraCIColor(152, 251, 152, 255);
    if (tkColorName == "PaleGreen1")
        return v_TraCIColor(154, 255, 154, 255);
    if (tkColorName == "PaleGreen2")
        return v_TraCIColor(144, 238, 144, 255);
    if (tkColorName == "PaleGreen3")
        return v_TraCIColor(124, 205, 124, 255);
    if (tkColorName == "PaleGreen4")
        return v_TraCIColor(84, 139, 84, 255);
    if (tkColorName == "PaleTurquoise")
        return v_TraCIColor(175, 238, 238, 255);
    if (tkColorName == "PaleTurquoise1")
        return v_TraCIColor(187, 255, 255, 255);
    if (tkColorName == "PaleTurquoise2")
        return v_TraCIColor(174, 238, 238, 255);
    if (tkColorName == "PaleTurquoise3")
        return v_TraCIColor(150, 205, 205, 255);
    if (tkColorName == "PaleTurquoise4")
        return v_TraCIColor(102, 139, 139, 255);
    if (tkColorName == "PaleVioletRed")
        return v_TraCIColor(219, 112, 147, 255);
    if (tkColorName == "PaleVioletRed1")
        return v_TraCIColor(255, 130, 171, 255);
    if (tkColorName == "PaleVioletRed2")
        return v_TraCIColor(238, 121, 159, 255);
    if (tkColorName == "PaleVioletRed3")
        return v_TraCIColor(205, 104, 127, 255);
    if (tkColorName == "PaleVioletRed4")
        return v_TraCIColor(139, 71, 93, 255);
    if (tkColorName == "papaya whip")
        return v_TraCIColor(255, 239, 213, 255);
    if (tkColorName == "PapayaWhip")
        return v_TraCIColor(255, 239, 213, 255);
    if (tkColorName == "peach puff")
        return v_TraCIColor(255, 218, 185, 255);
    if (tkColorName == "PeachPuff")
        return v_TraCIColor(255, 218, 185, 255);
    if (tkColorName == "PeachPuff1")
        return v_TraCIColor(255, 218, 185, 255);
    if (tkColorName == "PeachPuff2")
        return v_TraCIColor(238, 203, 173, 255);
    if (tkColorName == "PeachPuff3")
        return v_TraCIColor(205, 175, 149, 255);
    if (tkColorName == "PeachPuff4")
        return v_TraCIColor(139, 119, 101, 255);
    if (tkColorName == "peru")
        return v_TraCIColor(205, 133, 63, 255);
    if (tkColorName == "pink")
        return v_TraCIColor(255, 192, 203, 255);
    if (tkColorName == "pink1")
        return v_TraCIColor(255, 181, 197, 255);
    if (tkColorName == "pink2")
        return v_TraCIColor(238, 169, 184, 255);
    if (tkColorName == "pink3")
        return v_TraCIColor(205, 145, 158, 255);
    if (tkColorName == "pink4")
        return v_TraCIColor(139, 99, 108, 255);
    if (tkColorName == "plum")
        return v_TraCIColor(221, 160, 221, 255);
    if (tkColorName == "plum1")
        return v_TraCIColor(255, 187, 255, 255);
    if (tkColorName == "plum2")
        return v_TraCIColor(238, 174, 238, 255);
    if (tkColorName == "plum3")
        return v_TraCIColor(205, 150, 205, 255);
    if (tkColorName == "plum4")
        return v_TraCIColor(139, 102, 139, 255);
    if (tkColorName == "powder blue")
        return v_TraCIColor(176, 224, 230, 255);
    if (tkColorName == "PowderBlue")
        return v_TraCIColor(176, 224, 230, 255);
    if (tkColorName == "purple")
        return v_TraCIColor(160, 32, 240, 255);
    if (tkColorName == "purple1")
        return v_TraCIColor(155, 48, 255, 255);
    if (tkColorName == "purple2")
        return v_TraCIColor(145, 44, 238, 255);
    if (tkColorName == "purple3")
        return v_TraCIColor(125, 38, 205, 255);
    if (tkColorName == "purple4")
        return v_TraCIColor(85, 26, 139, 255);
    if (tkColorName == "red")
        return v_TraCIColor(255, 0, 0, 255);
    if (tkColorName == "red1")
        return v_TraCIColor(255, 0, 0, 255);
    if (tkColorName == "red2")
        return v_TraCIColor(238, 0, 0, 255);
    if (tkColorName == "red3")
        return v_TraCIColor(205, 0, 0, 255);
    if (tkColorName == "red4")
        return v_TraCIColor(139, 0, 0, 255);
    if (tkColorName == "rosy brown")
        return v_TraCIColor(188, 143, 143, 255);
    if (tkColorName == "RosyBrown")
        return v_TraCIColor(188, 143, 143, 255);
    if (tkColorName == "RosyBrown1")
        return v_TraCIColor(255, 193, 193, 255);
    if (tkColorName == "RosyBrown2")
        return v_TraCIColor(238, 180, 180, 255);
    if (tkColorName == "RosyBrown3")
        return v_TraCIColor(205, 155, 155, 255);
    if (tkColorName == "RosyBrown4")
        return v_TraCIColor(139, 105, 105, 255);
    if (tkColorName == "royal blue")
        return v_TraCIColor(65, 105, 225, 255);
    if (tkColorName == "RoyalBlue")
        return v_TraCIColor(65, 105, 225, 255);
    if (tkColorName == "RoyalBlue1")
        return v_TraCIColor(72, 118, 255, 255);
    if (tkColorName == "RoyalBlue2")
        return v_TraCIColor(67, 110, 238, 255);
    if (tkColorName == "RoyalBlue3")
        return v_TraCIColor(58, 95, 205, 255);
    if (tkColorName == "RoyalBlue4")
        return v_TraCIColor(39, 64, 139, 255);
    if (tkColorName == "saddle brown")
        return v_TraCIColor(139, 69, 19, 255);
    if (tkColorName == "SaddleBrown")
        return v_TraCIColor(139, 69, 19, 255);
    if (tkColorName == "salmon")
        return v_TraCIColor(250, 128, 114, 255);
    if (tkColorName == "salmon1")
        return v_TraCIColor(255, 140, 105, 255);
    if (tkColorName == "salmon2")
        return v_TraCIColor(238, 130, 98, 255);
    if (tkColorName == "salmon3")
        return v_TraCIColor(205, 112, 84, 255);
    if (tkColorName == "salmon4")
        return v_TraCIColor(139, 76, 57, 255);
    if (tkColorName == "sandy brown")
        return v_TraCIColor(244, 164, 96, 255);
    if (tkColorName == "SandyBrown")
        return v_TraCIColor(244, 164, 96, 255);
    if (tkColorName == "sea green")
        return v_TraCIColor(46, 139, 87, 255);
    if (tkColorName == "SeaGreen")
        return v_TraCIColor(46, 139, 87, 255);
    if (tkColorName == "SeaGreen1")
        return v_TraCIColor(84, 255, 159, 255);
    if (tkColorName == "SeaGreen2")
        return v_TraCIColor(78, 238, 148, 255);
    if (tkColorName == "SeaGreen3")
        return v_TraCIColor(67, 205, 128, 255);
    if (tkColorName == "SeaGreen4")
        return v_TraCIColor(46, 139, 87, 255);
    if (tkColorName == "seashell")
        return v_TraCIColor(255, 245, 238, 255);
    if (tkColorName == "seashell1")
        return v_TraCIColor(255, 245, 238, 255);
    if (tkColorName == "seashell2")
        return v_TraCIColor(238, 229, 222, 255);
    if (tkColorName == "seashell3")
        return v_TraCIColor(205, 197, 191, 255);
    if (tkColorName == "seashell4")
        return v_TraCIColor(139, 134, 130, 255);
    if (tkColorName == "sienna")
        return v_TraCIColor(160, 82, 45, 255);
    if (tkColorName == "sienna1")
        return v_TraCIColor(255, 130, 71, 255);
    if (tkColorName == "sienna2")
        return v_TraCIColor(238, 121, 66, 255);
    if (tkColorName == "sienna3")
        return v_TraCIColor(205, 104, 57, 255);
    if (tkColorName == "sienna4")
        return v_TraCIColor(139, 71, 38, 255);
    if (tkColorName == "sky blue")
        return v_TraCIColor(135, 206, 235, 255);
    if (tkColorName == "SkyBlue")
        return v_TraCIColor(135, 206, 235, 255);
    if (tkColorName == "SkyBlue1")
        return v_TraCIColor(135, 206, 255, 255);
    if (tkColorName == "SkyBlue2")
        return v_TraCIColor(126, 192, 238, 255);
    if (tkColorName == "SkyBlue3")
        return v_TraCIColor(108, 166, 205, 255);
    if (tkColorName == "SkyBlue4")
        return v_TraCIColor(74, 112, 139, 255);
    if (tkColorName == "slate blue")
        return v_TraCIColor(106, 90, 205, 255);
    if (tkColorName == "slate gray")
        return v_TraCIColor(112, 128, 144, 255);
    if (tkColorName == "slate grey")
        return v_TraCIColor(112, 128, 144, 255);
    if (tkColorName == "SlateBlue")
        return v_TraCIColor(106, 90, 205, 255);
    if (tkColorName == "SlateBlue1")
        return v_TraCIColor(131, 111, 255, 255);
    if (tkColorName == "SlateBlue2")
        return v_TraCIColor(122, 103, 238, 255);
    if (tkColorName == "SlateBlue3")
        return v_TraCIColor(105, 89, 205, 255);
    if (tkColorName == "SlateBlue4")
        return v_TraCIColor(71, 60, 139, 255);
    if (tkColorName == "SlateGray")
        return v_TraCIColor(112, 128, 144, 255);
    if (tkColorName == "SlateGray1")
        return v_TraCIColor(198, 226, 255, 255);
    if (tkColorName == "SlateGray2")
        return v_TraCIColor(185, 211, 238, 255);
    if (tkColorName == "SlateGray3")
        return v_TraCIColor(159, 182, 205, 255);
    if (tkColorName == "SlateGray4")
        return v_TraCIColor(108, 123, 139, 255);
    if (tkColorName == "SlateGrey")
        return v_TraCIColor(112, 128, 144, 255);
    if (tkColorName == "snow")
        return v_TraCIColor(255, 250, 250, 255);
    if (tkColorName == "snow1")
        return v_TraCIColor(255, 250, 250, 255);
    if (tkColorName == "snow2")
        return v_TraCIColor(238, 233, 233, 255);
    if (tkColorName == "snow3")
        return v_TraCIColor(205, 201, 201, 255);
    if (tkColorName == "snow4")
        return v_TraCIColor(139, 137, 137, 255);
    if (tkColorName == "spring green")
        return v_TraCIColor(0, 255, 127, 255);
    if (tkColorName == "SpringGreen")
        return v_TraCIColor(0, 255, 127, 255);
    if (tkColorName == "SpringGreen1")
        return v_TraCIColor(0, 255, 127, 255);
    if (tkColorName == "SpringGreen2")
        return v_TraCIColor(0, 238, 118, 255);
    if (tkColorName == "SpringGreen3")
        return v_TraCIColor(0, 205, 102, 255);
    if (tkColorName == "SpringGreen4")
        return v_TraCIColor(0, 139, 69, 255);
    if (tkColorName == "steel blue")
        return v_TraCIColor(70, 130, 180, 255);
    if (tkColorName == "SteelBlue")
        return v_TraCIColor(70, 130, 180, 255);
    if (tkColorName == "SteelBlue1")
        return v_TraCIColor(99, 184, 255, 255);
    if (tkColorName == "SteelBlue2")
        return v_TraCIColor(92, 172, 238, 255);
    if (tkColorName == "SteelBlue3")
        return v_TraCIColor(79, 148, 205, 255);
    if (tkColorName == "SteelBlue4")
        return v_TraCIColor(54, 100, 139, 255);
    if (tkColorName == "tan")
        return v_TraCIColor(210, 180, 140, 255);
    if (tkColorName == "tan1")
        return v_TraCIColor(255, 165, 79, 255);
    if (tkColorName == "tan2")
        return v_TraCIColor(238, 154, 73, 255);
    if (tkColorName == "tan3")
        return v_TraCIColor(205, 133, 63, 255);
    if (tkColorName == "tan4")
        return v_TraCIColor(139, 90, 43, 255);
    if (tkColorName == "thistle")
        return v_TraCIColor(216, 191, 216, 255);
    if (tkColorName == "thistle1")
        return v_TraCIColor(255, 225, 255, 255);
    if (tkColorName == "thistle2")
        return v_TraCIColor(238, 210, 238, 255);
    if (tkColorName == "thistle3")
        return v_TraCIColor(205, 181, 205, 255);
    if (tkColorName == "thistle4")
        return v_TraCIColor(139, 123, 139, 255);
    if (tkColorName == "tomato")
        return v_TraCIColor(255, 99, 71, 255);
    if (tkColorName == "tomato1")
        return v_TraCIColor(255, 99, 71, 255);
    if (tkColorName == "tomato2")
        return v_TraCIColor(238, 92, 66, 255);
    if (tkColorName == "tomato3")
        return v_TraCIColor(205, 79, 57, 255);
    if (tkColorName == "tomato4")
        return v_TraCIColor(139, 54, 38, 255);
    if (tkColorName == "turquoise")
        return v_TraCIColor(64, 224, 208, 255);
    if (tkColorName == "turquoise1")
        return v_TraCIColor(0, 245, 255, 255);
    if (tkColorName == "turquoise2")
        return v_TraCIColor(0, 229, 238, 255);
    if (tkColorName == "turquoise3")
        return v_TraCIColor(0, 197, 205, 255);
    if (tkColorName == "turquoise4")
        return v_TraCIColor(0, 134, 139, 255);
    if (tkColorName == "violet")
        return v_TraCIColor(238, 130, 238, 255);
    if (tkColorName == "violet red")
        return v_TraCIColor(208, 32, 144, 255);
    if (tkColorName == "VioletRed")
        return v_TraCIColor(208, 32, 144, 255);
    if (tkColorName == "VioletRed1")
        return v_TraCIColor(255, 62, 150, 255);
    if (tkColorName == "VioletRed2")
        return v_TraCIColor(238, 58, 140, 255);
    if (tkColorName == "VioletRed3")
        return v_TraCIColor(205, 50, 120, 255);
    if (tkColorName == "VioletRed4")
        return v_TraCIColor(139, 34, 82, 255);
    if (tkColorName == "wheat")
        return v_TraCIColor(245, 222, 179, 255);
    if (tkColorName == "wheat1")
        return v_TraCIColor(255, 231, 186, 255);
    if (tkColorName == "wheat2")
        return v_TraCIColor(238, 216, 174, 255);
    if (tkColorName == "wheat3")
        return v_TraCIColor(205, 186, 150, 255);
    if (tkColorName == "wheat4")
        return v_TraCIColor(139, 126, 102, 255);
    if (tkColorName == "white")
        return v_TraCIColor(255, 255, 255, 255);
    if (tkColorName == "white smoke")
        return v_TraCIColor(245, 245, 245, 255);
    if (tkColorName == "WhiteSmoke")
        return v_TraCIColor(245, 245, 245, 255);
    if (tkColorName == "yellow")
        return v_TraCIColor(255, 255, 0, 255);
    if (tkColorName == "yellow green")
        return v_TraCIColor(154, 205, 50, 255);
    if (tkColorName == "yellow1")
        return v_TraCIColor(255, 255, 0, 255);
    if (tkColorName == "yellow2")
        return v_TraCIColor(238, 238, 0, 255);
    if (tkColorName == "yellow3")
        return v_TraCIColor(205, 205, 0, 255);
    if (tkColorName == "yellow4")
        return v_TraCIColor(139, 139, 0, 255);
    if (tkColorName == "YellowGreen")
        return v_TraCIColor(154, 205, 50, 255);
    opp_error("unknown color name ", tkColorName.c_str());
    return v_TraCIColor(255, 0, 0, 255);
}
