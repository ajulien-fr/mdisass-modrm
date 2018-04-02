#include "mdisass.h"
#include "insn/mdisass-insn.h"

disass_insn one_byte_insn[] =
{
    add_Eb_Gb,    // 0x00
    add_Ev_Gv,    // 0x01
    add_Gb_Eb,    // 0x02
    add_Gv_Ev,    // 0x03
};

