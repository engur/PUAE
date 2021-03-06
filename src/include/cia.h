 /*
  * UAE - The Un*x Amiga Emulator
  *
  * CIA chip support
  *
  * (c) 1995 Bernd Schmidt
  */

#pragma once
#ifndef CIA_H
#define CIA_H

void CIA_reset (void);
void CIA_vsync_prehandler (void);
void CIA_hsync_prehandler (void);
void CIA_vsync_posthandler (bool);
void CIA_hsync_posthandler (bool);
void CIA_handler (void);
void CIAA_tod_inc (int);
void CIAB_tod_handler (int);

void cia_heartbeat (void);

void diskindex_handler (void);
void cia_parallelack (void);
void cia_diskindex (void);

void dumpcia (void);
void rethink_cias (void);
int resetwarning_do (int);
void cia_set_overlay (bool);

int parallel_direct_write_data (uae_u8, uae_u8);
int parallel_direct_read_data (uae_u8*);
int parallel_direct_write_status (uae_u8, uae_u8);
int parallel_direct_read_status (uae_u8*);

void rtc_hardreset (void);

#endif // CIA_H

