#include <iostream>
#include <assert.h>
#include <string.h>
#include <string>
#include <chrono>

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

   return 0;
}
