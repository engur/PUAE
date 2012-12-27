#ifndef SRC_MISC_H_INCLUDED
#define SRC_MISC_H_INCLUDED 1

/*
 * PUAE - The Un*x Amiga Emulator
 *
 * Misc
 *
 * Copyright 2010-2013 Mustafa TUFAN
 */

int ispressed (int key);

int D3D_goodenough (void);
int DirectDraw_CurrentRefreshRate (void);
int DirectDraw_GetVerticalBlankStatus (void);
double getcurrentvblankrate (void);
int isfullscreen (void);
void fetch_configurationpath (TCHAR *out, int size);
TCHAR* buf_out (TCHAR *buffer, int *bufsize, const TCHAR *format, ...);
TCHAR *au (const char *s);
char *ua (const TCHAR *s);
char *uutf8 (const char *s);
char *utf8u (const char *s);
int my_existsdir (const char *name);
bool target_graphics_buffer_update (void);
bool show_screen_maybe (bool show);
bool render_screen (bool immediate);
void show_screen (void);
TCHAR *au_copy (TCHAR *dst, int maxlen, const char *src);
FILE *my_opentext (const TCHAR *name);
int my_existsfile (const char *name);
void fetch_statefilepath (TCHAR *out, int size);
void fetch_datapath (TCHAR *out, int size);
void fetch_inputfilepath (TCHAR *out, int size);
void fetch_ripperpath (TCHAR *out, int size);
uae_u32 emulib_target_getcpurate (uae_u32 v, uae_u32 *low);
void fetch_saveimagepath (TCHAR *out, int size, int dir);
char *ua_copy (char *dst, int maxlen, const char *src);

#endif /* SRC_MISC_H_INCLUDED */
