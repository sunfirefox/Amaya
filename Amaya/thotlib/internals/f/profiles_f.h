/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 */

#ifndef __CEXTRACT__
#ifdef __STDC__

extern ThotBool Prof_BelongTable ( const char *name );
extern int Prof_BelongDoctype ( const char *name,
                                int docProfile,
                                ThotBool RO );
extern void Prof_InitTable ( char *profile );
extern void Prof_FreeTable ( void );
extern ThotBool TtaCanEdit ( void );
extern void TtaGetProfileFileName ( char *name,
                                    int length );
extern int TtaGetProfilesItems ( char **listEntries,
                                 int length );
extern ThotBool Prof_ShowSeparator ( Menu_Ctl *ptrmenu,
                                     int item,
                                     char LastItemType );
extern ThotBool Prof_ShowButton ( char *FunctionName );
extern ThotBool Prof_ShowSubMenu ( Menu_Ctl *ptrsubmenu );
extern ThotBool Prof_ShowMenu ( Menu_Ctl *ptrmenu );
extern ThotBool Prof_ShowGUI ( const char* name );

#else /* __STDC__ */

extern ThotBool Prof_BelongTable ( const char *name );
extern int Prof_BelongDoctype ( const char *name,
                                  int docProfile,
                                  ThotBool RO );
extern void Prof_InitTable ( char *profile );
extern void Prof_FreeTable ( void );
extern ThotBool TtaCanEdit ( void );
extern void TtaGetProfileFileName ( char *name,
                                      int length );
extern int TtaGetProfilesItems ( char **listEntries,
                                   int length );
extern ThotBool Prof_ShowSeparator ( Menu_Ctl *ptrmenu,
                                       int item,
                                       char LastItemType );
extern ThotBool Prof_ShowButton ( char *FunctionName );
extern ThotBool Prof_ShowSubMenu ( Menu_Ctl *ptrsubmenu );
extern ThotBool Prof_ShowMenu ( Menu_Ctl *ptrmenu );
extern ThotBool Prof_ShowGUI ( const char* name );

#endif /* __STDC__ */
#endif /* __CEXTRACT__ */
