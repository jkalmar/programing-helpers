/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf -tCG N2.gperf  */
/* Computed positions: -k'9,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 1 "N2.gperf"

/* gperf -tCG N2.gperf > N2.cpp */
#include <stdio.h>
#include <string.h>

typedef enum
{
   E_PDU_RES_SETUP_REQ = 0,
   E_PDU_RES_SETUP_RSP,
   E_PDU_RES_SETUP_FAIL,
   E_PDU_RES_REL_CMD,
   E_PDU_RES_REL_RSP,
   E_PDU_RES_MOD_REQ,
   E_PDU_RES_MOD_RSP,
   E_PDU_RES_MOD_FAIL,
   E_PDU_RES_NTY,
   E_PDU_RES_NTY_REL,
   E_PDU_RES_MOD_IND,
   E_PDU_RES_MOD_CFM,
   E_PATH_SWITCH_REQ,
   E_PATH_SWITCH_SETUP_FAIL,
   E_PATH_SWITCH_REQ_ACK,
   E_PATH_SWITCH_REQ_FAIL,
   E_HANDOVER_REQUIRED,
   E_HANDOVER_CMD,
   E_HANDOVER_PREP_FAIL,
   E_HANDOVER_REQ_ACK,
   E_HANDOVER_RES_ALLOC_FAIL,
   E_SRC_TO_TAR_CONTAINER,
   E_TAR_TO_SRC_CONTAINER,
   E_RAN_STATUS_TRANS_CONTAINER,
   E_SON_CONFIG_TRANSFER,
   E_NRPPA_PDU,
   E_UE_RADIO_CAPABILITY,
   E_UNK
} ShinyEnum;


struct TType {
    const char *name;
    ShinyEnum val;
};
#line 48 "N2.gperf"
struct TType;

#define TOTAL_KEYWORDS 27
#define MIN_WORD_LENGTH 9
#define MAX_WORD_LENGTH 26
#define MIN_HASH_VALUE 9
#define MAX_HASH_VALUE 60
/* maximum key range = 52, duplicates = 0 */

class Functions
{
private:
  static inline unsigned int hash (const char *str, size_t len);
public:
  static const struct TType *Lookup (const char *str, size_t len);
};

inline unsigned int
Functions::hash (const char *str, size_t len)
{
  static const unsigned char asso_values[] =
    {
      61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
      61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
      61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
      61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
      61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
      61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
      61, 61, 61, 61, 61, 30, 61, 61,  5, 61,
      61, 61, 61,  5, 61,  5,  0,  0, 20, 61,
      28, 30, 10, 10,  5,  0, 61, 61, 61,  0,
      61, 61, 61, 61, 61,  0, 61, 61, 61, 61,
      61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
      61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
      61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
      61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
      61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
      61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
      61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
      61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
      61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
      61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
      61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
      61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
      61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
      61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
      61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
      61, 61, 61, 61, 61, 61
    };
  return len + asso_values[static_cast<unsigned char>(str[8])] + asso_values[static_cast<unsigned char>(str[len - 1])];
}

static const struct TType wordlist[] =
  {
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 76 "N2.gperf"
    {"NRPPA_PDU", E_NRPPA_PDU},
    {""}, {""}, {""}, {""}, {""},
#line 62 "N2.gperf"
    {"PDU_RES_MOD_CFM", E_PDU_RES_MOD_CFM},
#line 58 "N2.gperf"
    {"PDU_RES_MOD_FAIL", E_PDU_RES_MOD_FAIL},
#line 68 "N2.gperf"
    {"HANDOVER_CMD", E_HANDOVER_CMD},
#line 69 "N2.gperf"
    {"HANDOVER_PREP_FAIL", E_HANDOVER_PREP_FAIL},
#line 77 "N2.gperf"
    {"UE_RADIO_CAPABILITY", E_UE_RADIO_CAPABILITY},
#line 61 "N2.gperf"
    {"PDU_RES_MOD_IND", E_PDU_RES_MOD_IND},
#line 70 "N2.gperf"
    {"HANDOVER_REQ_ACK", E_HANDOVER_REQ_ACK},
#line 67 "N2.gperf"
    {"HANDOVER_REQUIRED", E_HANDOVER_REQUIRED},
#line 71 "N2.gperf"
    {"HANDOVER_RES_ALLOC_FAIL", E_HANDOVER_RES_ALLOC_FAIL},
    {""},
#line 66 "N2.gperf"
    {"PATH_SWITCH_REQ_FAIL", E_PATH_SWITCH_REQ_FAIL},
    {""},
#line 64 "N2.gperf"
    {"PATH_SWITCH_SETUP_FAIL", E_PATH_SWITCH_SETUP_FAIL},
#line 53 "N2.gperf"
    {"PDU_RES_SETUP_FAIL", E_PDU_RES_SETUP_FAIL},
#line 65 "N2.gperf"
    {"PATH_SWITCH_REQ_ACK", E_PATH_SWITCH_REQ_ACK},
#line 54 "N2.gperf"
    {"PDU_RES_REL_CMD", E_PDU_RES_REL_CMD},
#line 59 "N2.gperf"
    {"PDU_RES_NTY", E_PDU_RES_NTY},
    {""}, {""},
#line 75 "N2.gperf"
    {"SON_CONFIG_TRANSFER", E_SON_CONFIG_TRANSFER},
#line 60 "N2.gperf"
    {"PDU_RES_NTY_REL", E_PDU_RES_NTY_REL},
#line 74 "N2.gperf"
    {"RAN_STATUS_TRANS_CONTAINER", E_RAN_STATUS_TRANS_CONTAINER},
    {""}, {""}, {""},
#line 73 "N2.gperf"
    {"TAR_TO_SRC_CONTAINER", E_TAR_TO_SRC_CONTAINER},
    {""}, {""},
#line 57 "N2.gperf"
    {"PDU_RES_MOD_RSP", E_PDU_RES_MOD_RSP},
    {""},
#line 56 "N2.gperf"
    {"PDU_RES_MOD_REQ", E_PDU_RES_MOD_REQ},
    {""}, {""}, {""}, {""},
#line 63 "N2.gperf"
    {"PATH_SWITCH_REQ", E_PATH_SWITCH_REQ},
    {""}, {""},
#line 55 "N2.gperf"
    {"PDU_RES_REL_RSP", E_PDU_RES_REL_RSP},
    {""},
#line 52 "N2.gperf"
    {"PDU_RES_SETUP_RSP", E_PDU_RES_SETUP_RSP},
    {""},
#line 51 "N2.gperf"
    {"PDU_RES_SETUP_REQ", E_PDU_RES_SETUP_REQ},
    {""}, {""},
#line 72 "N2.gperf"
    {"SRC_TO_TAR_CONTAINER", E_SRC_TO_TAR_CONTAINER}
  };

const struct TType *
Functions::Lookup (const char *str, size_t len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
