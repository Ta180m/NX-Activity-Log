#include <fstream>
#include "utils.hpp"

namespace Utils {
    // Map from HidControllerKeys -> int
    std::map<HidControllerKeys, int> key_map = {
        {KEY_A, 0},
        {KEY_B, 1},
        {KEY_X, 2},
        {KEY_Y, 3},
        {KEY_LSTICK, 4},
        {KEY_RSTICK, 5},
        {KEY_L, 6},
        {KEY_R, 7},
        {KEY_ZL, 8},
        {KEY_ZR, 9},
        {KEY_PLUS, 10},
        {KEY_MINUS, 11},
        {KEY_DLEFT, 12},
        {KEY_DUP, 13},
        {KEY_DRIGHT, 14},
        {KEY_DDOWN, 15},
        {KEY_LSTICK_LEFT, 16},
        {KEY_LSTICK_UP, 17},
        {KEY_LSTICK_RIGHT, 18},
        {KEY_LSTICK_DOWN, 19},
        {KEY_RSTICK_LEFT, 20},
        {KEY_RSTICK_UP, 21},
        {KEY_RSTICK_RIGHT, 22},
        {KEY_RSTICK_DOWN, 23},
        {KEY_SL_LEFT, 24},
        {KEY_SR_RIGHT, 25},
        {KEY_SL_LEFT, 26},
        {KEY_SR_RIGHT, 27}
    };

    void copyFile(std::string src, std::string dest) {
        std::ifstream srcF(src, std::ios::binary);
        std::ofstream destF(dest, std::ios::binary);

        destF << srcF.rdbuf();

        srcF.close();
        destF.flush();
        destF.close();
    }

    // Add commas to a number (only does one but shhh)
    std::string formatNumberComma(u32 number) {
        std::string s = std::to_string(number);
        if (s.length() > 3) {
            return s.substr(0, s.length() - 3) + "," + s.substr(s.length() - 3, 3);
        }
        return s;
    }
};