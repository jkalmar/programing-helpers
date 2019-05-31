#include <iostream>
#include <assert.h>
#include <string.h>
#include <string>
#include <chrono>

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

#define IFMODE


#ifdef HASH
ShinyEnum str2ShinyEnum( const char* aStr, size_t len )
{
   const TType *tmp = Functions::Lookup(aStr, len);

   if( tmp )
   {
      return tmp->val;
   }
   else
   {
      return E_UNK;
   }
}
#endif //HASH

#ifdef STRMODE
ShinyEnum str2ShinyEnum( const char* str, size_t size )
{
   if( size == 9 )
   {
      if( strncmp(str, "NRPPA_PDU", 9) == 0 ) return E_NRPPA_PDU;
   }
   if( size == 11 )
   {
      if( strncmp(str, "PDU_RES_NTY", 11) == 0 ) return E_PDU_RES_NTY;
   }
   if( size == 12 )
   {
      if( strncmp(str, "HANDOVER_CMD", 12) == 0 ) return E_HANDOVER_CMD;
   }
   if( size == 15 )
   {
      if( strncmp(str, "PDU_RES_REL_CMD", 15) == 0 ) return E_PDU_RES_REL_CMD;
      if( strncmp(str, "PDU_RES_REL_RSP", 15) == 0 ) return E_PDU_RES_REL_RSP;
      if( strncmp(str, "PDU_RES_MOD_REQ", 15) == 0 ) return E_PDU_RES_MOD_REQ;
      if( strncmp(str, "PDU_RES_MOD_RSP", 15) == 0 ) return E_PDU_RES_MOD_RSP;
      if( strncmp(str, "PDU_RES_NTY_REL", 15) == 0 ) return E_PDU_RES_NTY_REL;
      if( strncmp(str, "PDU_RES_MOD_IND", 15) == 0 ) return E_PDU_RES_MOD_IND;
      if( strncmp(str, "PDU_RES_MOD_CFM", 15) == 0 ) return E_PDU_RES_MOD_CFM;
      if( strncmp(str, "PATH_SWITCH_REQ", 15) == 0 ) return E_PATH_SWITCH_REQ;
   }
   if( size == 16 )
   {
      if( strncmp(str, "PDU_RES_MOD_FAIL", 16) == 0 ) return E_PDU_RES_MOD_FAIL;
      if( strncmp(str, "HANDOVER_REQ_ACK", 16) == 0 ) return E_HANDOVER_REQ_ACK;
   }
   if( size == 17 )
   {
      if( strncmp(str, "PDU_RES_SETUP_REQ", 17) == 0 ) return E_PDU_RES_SETUP_REQ;
      if( strncmp(str, "PDU_RES_SETUP_RSP", 17) == 0 ) return E_PDU_RES_SETUP_RSP;
      if( strncmp(str, "HANDOVER_REQUIRED", 17) == 0 ) return E_HANDOVER_REQUIRED;
   }
   if( size == 18 )
   {
      if( strncmp(str, "PDU_RES_SETUP_FAIL", 18) == 0 ) return E_PDU_RES_SETUP_FAIL;
      if( strncmp(str, "HANDOVER_PREP_FAIL", 18) == 0 ) return E_HANDOVER_PREP_FAIL;
   }
   if( size == 19 )
   {
      if( strncmp(str, "PATH_SWITCH_REQ_ACK", 19) == 0 ) return E_PATH_SWITCH_REQ_ACK;
      if( strncmp(str, "SON_CONFIG_TRANSFER", 19) == 0 ) return E_SON_CONFIG_TRANSFER;
      if( strncmp(str, "UE_RADIO_CAPABILITY", 19) == 0 ) return E_UE_RADIO_CAPABILITY;
   }
   if( size == 20 )
   {
      if( strncmp(str, "PATH_SWITCH_REQ_FAIL", 20) == 0 ) return E_PATH_SWITCH_REQ_FAIL;
      if( strncmp(str, "SRC_TO_TAR_CONTAINER", 20) == 0 ) return E_SRC_TO_TAR_CONTAINER;
      if( strncmp(str, "TAR_TO_SRC_CONTAINER", 20) == 0 ) return E_TAR_TO_SRC_CONTAINER;
   }
   if( size == 22 )
   {
      if( strncmp(str, "PATH_SWITCH_SETUP_FAIL", 22) == 0 ) return E_PATH_SWITCH_SETUP_FAIL;
   }
   if( size == 23 )
   {
      if( strncmp(str, "HANDOVER_RES_ALLOC_FAIL", 23) == 0 ) return E_HANDOVER_RES_ALLOC_FAIL;
   }
   if( size == 26 )
   {
      if( strncmp(str, "RAN_STATUS_TRANS_CONTAINER", 26) == 0 ) return E_RAN_STATUS_TRANS_CONTAINER;
   }
   return E_UNK;
}
#endif // STRMODE


#ifdef IFMODE
ShinyEnum str2ShinyEnum( const char* str, size_t size )
{
   if( str[ 0 ] == 'P' )
   {
      if( str[ 1 ] == 'D' )
      {
         if( str[ 2 ] == 'U' )
         {
            if( str[ 3 ] == '_' )
            {
               if( str[ 4 ] == 'R' )
               {
                  if( str[ 5 ] == 'E' )
                  {
                     if( str[ 6 ] == 'S' )
                     {
                        if( str[ 7 ] == '_' )
                        {
                           if( str[ 8 ] == 'S' )
                           {
                              if( str[ 9 ] == 'E' )
                              {
                                 if( str[ 10 ] == 'T' )
                                 {
                                    if( str[ 11 ] == 'U' )
                                    {
                                       if( str[ 12 ] == 'P' )
                                       {
                                          if( str[ 13 ] == '_' )
                                          {
                                             if( str[ 14 ] == 'R' )
                                             {
                                                if( str[ 15 ] == 'E' )
                                                {
                                                   if( str[ 16 ] == 'Q' )
                                                   {
                                                      if( size == 17 ) return E_PDU_RES_SETUP_REQ;
                                                   }
                                                }
                                                if( str[ 15 ] == 'S' )
                                                {
                                                   if( str[ 16 ] == 'P' )
                                                   {
                                                      if( size == 17 ) return E_PDU_RES_SETUP_RSP;
                                                   }
                                                }
                                             }
                                             if( str[ 14 ] == 'F' )
                                             {
                                                if( str[ 15 ] == 'A' )
                                                {
                                                   if( str[ 16 ] == 'I' )
                                                   {
                                                      if( str[ 17 ] == 'L' )
                                                      {
                                                         if( size == 18 ) return E_PDU_RES_SETUP_FAIL;
                                                      }
                                                   }
                                                }
                                             }
                                          }
                                       }
                                    }
                                 }
                              }
                           }
                           if( str[ 8 ] == 'R' )
                           {
                              if( str[ 9 ] == 'E' )
                              {
                                 if( str[ 10 ] == 'L' )
                                 {
                                    if( str[ 11 ] == '_' )
                                    {
                                       if( str[ 12 ] == 'C' )
                                       {
                                          if( str[ 13 ] == 'M' )
                                          {
                                             if( str[ 14 ] == 'D' )
                                             {
                                                if( size == 15 ) return E_PDU_RES_REL_CMD;
                                             }
                                          }
                                       }
                                       if( str[ 12 ] == 'R' )
                                       {
                                          if( str[ 13 ] == 'S' )
                                          {
                                             if( str[ 14 ] == 'P' )
                                             {
                                                if( size == 15 ) return E_PDU_RES_REL_RSP;
                                             }
                                          }
                                       }
                                    }
                                 }
                              }
                           }
                           if( str[ 8 ] == 'M' )
                           {
                              if( str[ 9 ] == 'O' )
                              {
                                 if( str[ 10 ] == 'D' )
                                 {
                                    if( str[ 11 ] == '_' )
                                    {
                                       if( str[ 12 ] == 'R' )
                                       {
                                          if( str[ 13 ] == 'E' )
                                          {
                                             if( str[ 14 ] == 'Q' )
                                             {
                                                if( size == 15 ) return E_PDU_RES_MOD_REQ;
                                             }
                                          }
                                          if( str[ 13 ] == 'S' )
                                          {
                                             if( str[ 14 ] == 'P' )
                                             {
                                                if( size == 15 ) return E_PDU_RES_MOD_RSP;
                                             }
                                          }
                                       }
                                       if( str[ 12 ] == 'F' )
                                       {
                                          if( str[ 13 ] == 'A' )
                                          {
                                             if( str[ 14 ] == 'I' )
                                             {
                                                if( str[ 15 ] == 'L' )
                                                {
                                                   if( size == 16 ) return E_PDU_RES_MOD_FAIL;
                                                }
                                             }
                                          }
                                       }
                                       if( str[ 12 ] == 'I' )
                                       {
                                          if( str[ 13 ] == 'N' )
                                          {
                                             if( str[ 14 ] == 'D' )
                                             {
                                                if( size == 15 ) return E_PDU_RES_MOD_IND;
                                             }
                                          }
                                       }
                                       if( str[ 12 ] == 'C' )
                                       {
                                          if( str[ 13 ] == 'F' )
                                          {
                                             if( str[ 14 ] == 'M' )
                                             {
                                                if( size == 15 ) return E_PDU_RES_MOD_CFM;
                                             }
                                          }
                                       }
                                    }
                                 }
                              }
                           }
                           if( str[ 8 ] == 'N' )
                           {
                              if( str[ 9 ] == 'T' )
                              {
                                 if( str[ 10 ] == 'Y' )
                                 {
                                    if( size == 11 ) return E_PDU_RES_NTY;
                                    if( str[ 11 ] == '_' )
                                    {
                                       if( str[ 12 ] == 'R' )
                                       {
                                          if( str[ 13 ] == 'E' )
                                          {
                                             if( str[ 14 ] == 'L' )
                                             {
                                                if( size == 15 ) return E_PDU_RES_NTY_REL;
                                             }
                                          }
                                       }
                                    }
                                 }
                              }
                           }
                        }
                     }
                  }
               }
            }
         }
      }
      if( str[ 1 ] == 'A' )
      {
         if( str[ 2 ] == 'T' )
         {
            if( str[ 3 ] == 'H' )
            {
               if( str[ 4 ] == '_' )
               {
                  if( str[ 5 ] == 'S' )
                  {
                     if( str[ 6 ] == 'W' )
                     {
                        if( str[ 7 ] == 'I' )
                        {
                           if( str[ 8 ] == 'T' )
                           {
                              if( str[ 9 ] == 'C' )
                              {
                                 if( str[ 10 ] == 'H' )
                                 {
                                    if( str[ 11 ] == '_' )
                                    {
                                       if( str[ 12 ] == 'R' )
                                       {
                                          if( str[ 13 ] == 'E' )
                                          {
                                             if( str[ 14 ] == 'Q' )
                                             {
                                                if( size == 15 ) return E_PATH_SWITCH_REQ;
                                                if( str[ 15 ] == '_' )
                                                {
                                                   if( str[ 16 ] == 'A' )
                                                   {
                                                      if( str[ 17 ] == 'C' )
                                                      {
                                                         if( str[ 18 ] == 'K' )
                                                         {
                                                            if( size == 19 ) return E_PATH_SWITCH_REQ_ACK;
                                                         }
                                                      }
                                                   }
                                                   if( str[ 16 ] == 'F' )
                                                   {
                                                      if( str[ 17 ] == 'A' )
                                                      {
                                                         if( str[ 18 ] == 'I' )
                                                         {
                                                            if( str[ 19 ] == 'L' )
                                                            {
                                                               if( size == 20 ) return E_PATH_SWITCH_REQ_FAIL;
                                                            }
                                                         }
                                                      }
                                                   }
                                                }
                                             }
                                          }
                                       }
                                       if( str[ 12 ] == 'S' )
                                       {
                                          if( str[ 13 ] == 'E' )
                                          {
                                             if( str[ 14 ] == 'T' )
                                             {
                                                if( str[ 15 ] == 'U' )
                                                {
                                                   if( str[ 16 ] == 'P' )
                                                   {
                                                      if( str[ 17 ] == '_' )
                                                      {
                                                         if( str[ 18 ] == 'F' )
                                                         {
                                                            if( str[ 19 ] == 'A' )
                                                            {
                                                               if( str[ 20 ] == 'I' )
                                                               {
                                                                  if( str[ 21 ] == 'L' )
                                                                  {
                                                                     if( size == 22 ) return E_PATH_SWITCH_SETUP_FAIL;
                                                                  }
                                                               }
                                                            }
                                                         }
                                                      }
                                                   }
                                                }
                                             }
                                          }
                                       }
                                    }
                                 }
                              }
                           }
                        }
                     }
                  }
               }
            }
         }
      }
   }
   if( str[ 0 ] == 'H' )
   {
      if( str[ 1 ] == 'A' )
      {
         if( str[ 2 ] == 'N' )
         {
            if( str[ 3 ] == 'D' )
            {
               if( str[ 4 ] == 'O' )
               {
                  if( str[ 5 ] == 'V' )
                  {
                     if( str[ 6 ] == 'E' )
                     {
                        if( str[ 7 ] == 'R' )
                        {
                           if( str[ 8 ] == '_' )
                           {
                              if( str[ 9 ] == 'R' )
                              {
                                 if( str[ 10 ] == 'E' )
                                 {
                                    if( str[ 11 ] == 'Q' )
                                    {
                                       if( str[ 12 ] == 'U' )
                                       {
                                          if( str[ 13 ] == 'I' )
                                          {
                                             if( str[ 14 ] == 'R' )
                                             {
                                                if( str[ 15 ] == 'E' )
                                                {
                                                   if( str[ 16 ] == 'D' )
                                                   {
                                                      if( size == 17 ) return E_HANDOVER_REQUIRED;
                                                   }
                                                }
                                             }
                                          }
                                       }
                                       if( str[ 12 ] == '_' )
                                       {
                                          if( str[ 13 ] == 'A' )
                                          {
                                             if( str[ 14 ] == 'C' )
                                             {
                                                if( str[ 15 ] == 'K' )
                                                {
                                                   if( size == 16 ) return E_HANDOVER_REQ_ACK;
                                                }
                                             }
                                          }
                                       }
                                    }
                                    if( str[ 11 ] == 'S' )
                                    {
                                       if( str[ 12 ] == '_' )
                                       {
                                          if( str[ 13 ] == 'A' )
                                          {
                                             if( str[ 14 ] == 'L' )
                                             {
                                                if( str[ 15 ] == 'L' )
                                                {
                                                   if( str[ 16 ] == 'O' )
                                                   {
                                                      if( str[ 17 ] == 'C' )
                                                      {
                                                         if( str[ 18 ] == '_' )
                                                         {
                                                            if( str[ 19 ] == 'F' )
                                                            {
                                                               if( str[ 20 ] == 'A' )
                                                               {
                                                                  if( str[ 21 ] == 'I' )
                                                                  {
                                                                     if( str[ 22 ] == 'L' )
                                                                     {
                                                                        if( size == 23 ) return E_HANDOVER_RES_ALLOC_FAIL;
                                                                     }
                                                                  }
                                                               }
                                                            }
                                                         }
                                                      }
                                                   }
                                                }
                                             }
                                          }
                                       }
                                    }
                                 }
                              }
                              if( str[ 9 ] == 'C' )
                              {
                                 if( str[ 10 ] == 'M' )
                                 {
                                    if( str[ 11 ] == 'D' )
                                    {
                                       if( size == 12 ) return E_HANDOVER_CMD;
                                    }
                                 }
                              }
                              if( str[ 9 ] == 'P' )
                              {
                                 if( str[ 10 ] == 'R' )
                                 {
                                    if( str[ 11 ] == 'E' )
                                    {
                                       if( str[ 12 ] == 'P' )
                                       {
                                          if( str[ 13 ] == '_' )
                                          {
                                             if( str[ 14 ] == 'F' )
                                             {
                                                if( str[ 15 ] == 'A' )
                                                {
                                                   if( str[ 16 ] == 'I' )
                                                   {
                                                      if( str[ 17 ] == 'L' )
                                                      {
                                                         if( size == 18 ) return E_HANDOVER_PREP_FAIL;
                                                      }
                                                   }
                                                }
                                             }
                                          }
                                       }
                                    }
                                 }
                              }
                           }
                        }
                     }
                  }
               }
            }
         }
      }
   }
   if( str[ 0 ] == 'S' )
   {
      if( str[ 1 ] == 'R' )
      {
         if( str[ 2 ] == 'C' )
         {
            if( str[ 3 ] == '_' )
            {
               if( str[ 4 ] == 'T' )
               {
                  if( str[ 5 ] == 'O' )
                  {
                     if( str[ 6 ] == '_' )
                     {
                        if( str[ 7 ] == 'T' )
                        {
                           if( str[ 8 ] == 'A' )
                           {
                              if( str[ 9 ] == 'R' )
                              {
                                 if( str[ 10 ] == '_' )
                                 {
                                    if( str[ 11 ] == 'C' )
                                    {
                                       if( str[ 12 ] == 'O' )
                                       {
                                          if( str[ 13 ] == 'N' )
                                          {
                                             if( str[ 14 ] == 'T' )
                                             {
                                                if( str[ 15 ] == 'A' )
                                                {
                                                   if( str[ 16 ] == 'I' )
                                                   {
                                                      if( str[ 17 ] == 'N' )
                                                      {
                                                         if( str[ 18 ] == 'E' )
                                                         {
                                                            if( str[ 19 ] == 'R' )
                                                            {
                                                               if( size == 20 ) return E_SRC_TO_TAR_CONTAINER;
                                                            }
                                                         }
                                                      }
                                                   }
                                                }
                                             }
                                          }
                                       }
                                    }
                                 }
                              }
                           }
                        }
                     }
                  }
               }
            }
         }
      }
      if( str[ 1 ] == 'O' )
      {
         if( str[ 2 ] == 'N' )
         {
            if( str[ 3 ] == '_' )
            {
               if( str[ 4 ] == 'C' )
               {
                  if( str[ 5 ] == 'O' )
                  {
                     if( str[ 6 ] == 'N' )
                     {
                        if( str[ 7 ] == 'F' )
                        {
                           if( str[ 8 ] == 'I' )
                           {
                              if( str[ 9 ] == 'G' )
                              {
                                 if( str[ 10 ] == '_' )
                                 {
                                    if( str[ 11 ] == 'T' )
                                    {
                                       if( str[ 12 ] == 'R' )
                                       {
                                          if( str[ 13 ] == 'A' )
                                          {
                                             if( str[ 14 ] == 'N' )
                                             {
                                                if( str[ 15 ] == 'S' )
                                                {
                                                   if( str[ 16 ] == 'F' )
                                                   {
                                                      if( str[ 17 ] == 'E' )
                                                      {
                                                         if( str[ 18 ] == 'R' )
                                                         {
                                                            if( size == 19 ) return E_SON_CONFIG_TRANSFER;
                                                         }
                                                      }
                                                   }
                                                }
                                             }
                                          }
                                       }
                                    }
                                 }
                              }
                           }
                        }
                     }
                  }
               }
            }
         }
      }
   }
   if( str[ 0 ] == 'T' )
   {
      if( str[ 1 ] == 'A' )
      {
         if( str[ 2 ] == 'R' )
         {
            if( str[ 3 ] == '_' )
            {
               if( str[ 4 ] == 'T' )
               {
                  if( str[ 5 ] == 'O' )
                  {
                     if( str[ 6 ] == '_' )
                     {
                        if( str[ 7 ] == 'S' )
                        {
                           if( str[ 8 ] == 'R' )
                           {
                              if( str[ 9 ] == 'C' )
                              {
                                 if( str[ 10 ] == '_' )
                                 {
                                    if( str[ 11 ] == 'C' )
                                    {
                                       if( str[ 12 ] == 'O' )
                                       {
                                          if( str[ 13 ] == 'N' )
                                          {
                                             if( str[ 14 ] == 'T' )
                                             {
                                                if( str[ 15 ] == 'A' )
                                                {
                                                   if( str[ 16 ] == 'I' )
                                                   {
                                                      if( str[ 17 ] == 'N' )
                                                      {
                                                         if( str[ 18 ] == 'E' )
                                                         {
                                                            if( str[ 19 ] == 'R' )
                                                            {
                                                               if( size == 20 ) return E_TAR_TO_SRC_CONTAINER;
                                                            }
                                                         }
                                                      }
                                                   }
                                                }
                                             }
                                          }
                                       }
                                    }
                                 }
                              }
                           }
                        }
                     }
                  }
               }
            }
         }
      }
   }
   if( str[ 0 ] == 'R' )
   {
      if( str[ 1 ] == 'A' )
      {
         if( str[ 2 ] == 'N' )
         {
            if( str[ 3 ] == '_' )
            {
               if( str[ 4 ] == 'S' )
               {
                  if( str[ 5 ] == 'T' )
                  {
                     if( str[ 6 ] == 'A' )
                     {
                        if( str[ 7 ] == 'T' )
                        {
                           if( str[ 8 ] == 'U' )
                           {
                              if( str[ 9 ] == 'S' )
                              {
                                 if( str[ 10 ] == '_' )
                                 {
                                    if( str[ 11 ] == 'T' )
                                    {
                                       if( str[ 12 ] == 'R' )
                                       {
                                          if( str[ 13 ] == 'A' )
                                          {
                                             if( str[ 14 ] == 'N' )
                                             {
                                                if( str[ 15 ] == 'S' )
                                                {
                                                   if( str[ 16 ] == '_' )
                                                   {
                                                      if( str[ 17 ] == 'C' )
                                                      {
                                                         if( str[ 18 ] == 'O' )
                                                         {
                                                            if( str[ 19 ] == 'N' )
                                                            {
                                                               if( str[ 20 ] == 'T' )
                                                               {
                                                                  if( str[ 21 ] == 'A' )
                                                                  {
                                                                     if( str[ 22 ] == 'I' )
                                                                     {
                                                                        if( str[ 23 ] == 'N' )
                                                                        {
                                                                           if( str[ 24 ] == 'E' )
                                                                           {
                                                                              if( str[ 25 ] == 'R' )
                                                                              {
                                                                                 if( size == 26 ) return E_RAN_STATUS_TRANS_CONTAINER;
                                                                              }
                                                                           }
                                                                        }
                                                                     }
                                                                  }
                                                               }
                                                            }
                                                         }
                                                      }
                                                   }
                                                }
                                             }
                                          }
                                       }
                                    }
                                 }
                              }
                           }
                        }
                     }
                  }
               }
            }
         }
      }
   }
   if( str[ 0 ] == 'N' )
   {
      if( str[ 1 ] == 'R' )
      {
         if( str[ 2 ] == 'P' )
         {
            if( str[ 3 ] == 'P' )
            {
               if( str[ 4 ] == 'A' )
               {
                  if( str[ 5 ] == '_' )
                  {
                     if( str[ 6 ] == 'P' )
                     {
                        if( str[ 7 ] == 'D' )
                        {
                           if( str[ 8 ] == 'U' )
                           {
                              if( size == 9 ) return E_NRPPA_PDU;
                           }
                        }
                     }
                  }
               }
            }
         }
      }
   }
   if( str[ 0 ] == 'U' )
   {
      if( str[ 1 ] == 'E' )
      {
         if( str[ 2 ] == '_' )
         {
            if( str[ 3 ] == 'R' )
            {
               if( str[ 4 ] == 'A' )
               {
                  if( str[ 5 ] == 'D' )
                  {
                     if( str[ 6 ] == 'I' )
                     {
                        if( str[ 7 ] == 'O' )
                        {
                           if( str[ 8 ] == '_' )
                           {
                              if( str[ 9 ] == 'C' )
                              {
                                 if( str[ 10 ] == 'A' )
                                 {
                                    if( str[ 11 ] == 'P' )
                                    {
                                       if( str[ 12 ] == 'A' )
                                       {
                                          if( str[ 13 ] == 'B' )
                                          {
                                             if( str[ 14 ] == 'I' )
                                             {
                                                if( str[ 15 ] == 'L' )
                                                {
                                                   if( str[ 16 ] == 'I' )
                                                   {
                                                      if( str[ 17 ] == 'T' )
                                                      {
                                                         if( str[ 18 ] == 'Y' )
                                                         {
                                                            if( size == 19 ) return E_UE_RADIO_CAPABILITY;
                                                         }
                                                      }
                                                   }
                                                }
                                             }
                                          }
                                       }
                                    }
                                 }
                              }
                           }
                        }
                     }
                  }
               }
            }
         }
      }
   }
   return E_UNK;
}
#endif // IFMODE


int main( int argc, char **argv )
{
   int iterations = 1000000;

   if( argc >= 2 )
   {
      iterations = std::stoi( argv[1] );
   }

   const char *strs[] = { "PDU_RES_SETUP_REQ", "PDU_RES_SETUP_RSP", "PDU_RES_SETUP_FAIL", "PDU_RES_REL_CMD", "PDU_RES_REL_RSP",
                          "PDU_RES_MOD_REQ", "PDU_RES_MOD_RSP", "PDU_RES_MOD_FAIL", "PDU_RES_NTY", "PDU_RES_NTY_REL", "PDU_RES_MOD_IND", "PDU_RES_MOD_CFM",
                          "PATH_SWITCH_REQ", "PATH_SWITCH_SETUP_FAIL", "PATH_SWITCH_REQ_ACK", "PATH_SWITCH_REQ_FAIL", "HANDOVER_REQUIRED", "HANDOVER_CMD",
                          "HANDOVER_PREP_FAIL", "HANDOVER_REQ_ACK", "HANDOVER_RES_ALLOC_FAIL", "SRC_TO_TAR_CONTAINER", "TAR_TO_SRC_CONTAINER",
                          "RAN_STATUS_TRANS_CONTAINER", "SON_CONFIG_TRANSFER", "NRPPA_PDU", "UE_RADIO_CAPABILITY"
                        };

   size_t sizes[] = { 17, 17, 18, 15, 15, 15, 15, 16, 11, 15, 15, 15, 15, 22, 19, 20, 17, 12, 18, 16, 23, 20, 20, 26, 19, 9, 19 };

   ShinyEnum enums[] = { E_PDU_RES_SETUP_REQ, E_PDU_RES_SETUP_RSP, E_PDU_RES_SETUP_FAIL, E_PDU_RES_REL_CMD, E_PDU_RES_REL_RSP,
                         E_PDU_RES_MOD_REQ, E_PDU_RES_MOD_RSP, E_PDU_RES_MOD_FAIL, E_PDU_RES_NTY, E_PDU_RES_NTY_REL, E_PDU_RES_MOD_IND, E_PDU_RES_MOD_CFM,
                         E_PATH_SWITCH_REQ, E_PATH_SWITCH_SETUP_FAIL, E_PATH_SWITCH_REQ_ACK, E_PATH_SWITCH_REQ_FAIL, E_HANDOVER_REQUIRED, E_HANDOVER_CMD,
                         E_HANDOVER_PREP_FAIL, E_HANDOVER_REQ_ACK, E_HANDOVER_RES_ALLOC_FAIL, E_SRC_TO_TAR_CONTAINER, E_TAR_TO_SRC_CONTAINER,
                         E_RAN_STATUS_TRANS_CONTAINER, E_SON_CONFIG_TRANSFER, E_NRPPA_PDU, E_UE_RADIO_CAPABILITY
                       };


   for( int i = 0; i < sizeof( strs ) / sizeof( strs[0] ); ++i )
   {
      std::cout << "Converting: " << strs[i] << std::endl;
      assert( strlen( strs[ i ] ) == sizes[ i ] );
      assert( str2ShinyEnum( strs[i], sizes[ i ] ) == enums[ i ] );
   }

   std::cout << "Doing test with " << iterations << " iterations" << std::endl;

   auto start = std::chrono::steady_clock::now();

   for( int it = 0; it < iterations; it++ )
   {
      for( int i = 0; i < sizeof( strs ) / sizeof( strs[0] ); ++i )
      {
         assert( str2ShinyEnum( strs[i], sizes[ i ] ) == enums[ i ] );
      }
   }

   auto end = std::chrono::steady_clock::now();

   std::cout << "Done" << std::endl;
   std::cout << "Test took: " << std::chrono::duration_cast< std::chrono::milliseconds >( end - start ).count() << " ms" << std::endl;

   std::cout << "Sizeof wordlist: " << sizeof(wordlist) << std::endl;
   std::cout << "Number of elements in wordlist: " << sizeof(wordlist) / sizeof(wordlist[0]) << std::endl;

   return 0;
}
