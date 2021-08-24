#include <bits/stdc++.h>
using namespace std;

const int NUM_V = 15;
const int NUM_C = 66;
const int NUM_O = 10;

string up(string in) {
    in[0] = toupper(in[0]);
    return in;
}

string vowels[NUM_V][2] = {
    {"A", "a"}, {"E", "e"}, {"EU", "i"}, {"O", "o"}, {"U", "u"},
    {"AO", "oo"}, {"AE", "ea"}, {"AU", "au"}, {"OE", "oe"}, {"OU", "ou"},
    {"AOE", "ee"}, {"AOU", "eu"}, {"AEU", "ai"}, {"OEU", "oi"}, {"AOEU", "ie"}
};
string vowels_upper[NUM_V][2] = {
    {"A*", "a"}, {"*E", "e"}, {"*EU", "i"}, {"O*", "o"}, {"*U", "u"},
    {"AO*", "oo"}, {"A*E", "ea"}, {"A*U", "au"}, {"O*E", "oe"}, {"O*U", "ou"},
    {"AO*E", "ee"}, {"AO*U", "eu"}, {"A*EU", "ai"}, {"O*EU", "oi"}, {"AO*EU", "ie"}
};
string consonants[NUM_C][2] = {
    {"PW", "b"}, {"K", "c"}, {"TK", "d"}, {"TP", "f"}, {"TKPW", "g"},
    {"H", "h"}, {"SKWR", "j"}, {"STK", "k"}, {"HR", "l"}, {"PH", "m"},
    {"TPH", "n"}, {"P", "p"}, {"R", "r"}, {"S", "s"}, {"T", "t"},
    {"SR", "v"}, {"W", "w"}, {"KP", "x"}, {"KWR", "y"}, {"SWR", "z"}, {"STKP", "ck"},
    {"SH", "sh"}, {"KH", "ch"}, {"STKH", "kh"}, {"SPH", "ph"}, {"TH", "th"},
    {"SKH", "sch"}, {"TKPWH", "gh"}, {"TKH", "dh"}, {"KPH", "xh"}, {"KPR", "xc"},
    {"PHR", "pl"}, {"PWHR", "bl"}, {"KHR", "cl"}, {"STKHR", "kl"}, {"TKPWHR", "gl"}, {"PR", "pr"}, {"PWR", "br"},
    {"TR", "tr"}, {"TKR", "dr"}, {"KR", "cr"}, {"STKR", "kr"}, {"TKPWR", "gr"}, {"TW", "tw"}, {"TKW", "dw"},
    {"KW", "qu"}, {"STKW", "kw"}, {"TPHR", "fl"}, {"STPHR", "phl"}, {"SHR", "sl"},
    {"TPR", "fr"}, {"THR", "thr"}, {"SKHR", "shr"}, {"WH", "wh"}, {"SW", "sw"},
    {"SP", "sp"}, {"ST", "st"}, {"SK", "sc"}, {"STPH", "sn"}, {"STH", "sth"},
    {"SPHR", "spl"}, {"SPR", "spr"}, {"STR", "str"}, {"SKR", "scr"}, {"SKW", "squ"}, {"STPR", "phr"}
};
string others[NUM_O][2] = {
    {"TKWR", "ty"}, {"KPWR", "py"}, {"KWHR", "hy"}, {"STKWR", "sty"}, {"SKPWR", "spy"},
    {"SKWHR", "shy"}, {"TKWHR", "thy"}, {"KPWHR", "my"}, {"STKPWR", "phy"}, {"KW", "q"}
};
string ending = "PG";

int main() {
    ofstream output;
    output.open("output.txt");

    for (int i = 0; i < NUM_V; i++) { // v
        output << "{\\*\\cxs " << vowels[i][0] << ending << "}\\cxds " << vowels[i][1] << "\n";
    }
    for (int i = 0; i < NUM_V; i++) { // V
        output << "{\\*\\cxs " << vowels_upper[i][0] << ending << "}\\cxds " << up(vowels[i][1]) << "\n";
    }
    for (int i = 0; i < NUM_C; i++) { // c
        output << "{\\*\\cxs " << consonants[i][0] << "-" << ending << "}\\cxds " << consonants[i][1] << "\n";
    }
    for (int i = 0; i < NUM_C; i++) { // C
        output << "{\\*\\cxs " << consonants[i][0] << "*" << ending << "}\\cxds " << up(consonants[i][1]) << "\n";
    }
    for (int i = 0; i < NUM_C; i++) { // cv
        for (int j = 0; j < NUM_V; j++) {
            output << "{\\*\\cxs " << consonants[i][0] << vowels[j][0] << ending << "}\\cxds "
                << consonants[i][1] << vowels[j][1] << "\n";
        }
    }
    for (int i = 0; i < NUM_C; i++) { // Cv
        for (int j = 0; j < NUM_V; j++) {
            output << "{\\*\\cxs " << consonants[i][0] << vowels_upper[j][0] << ending << "}\\cxds "
                << up(consonants[i][1]) << vowels[j][1] << "\n";
        }
    }
    for (int i = 0; i < NUM_O; i++) { // o
        output << "{\\*\\cxs " << others[i][0] << "-" << ending << "}\\cxds " << others[i][1] << "\n";
    }
    for (int i = 0; i < NUM_O; i++) { // O
        output << "{\\*\\cxs " << others[i][0] << "*" << ending << "}\\cxds " << up(others[i][1]) << "\n";
    }
}