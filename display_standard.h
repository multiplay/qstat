/*
 * qstat
 * by Steve Jankowski
 * steve@qstat.org
 * http://www.qstat.org
 *
 * Inspired by QuakePing by Len Norton
 *
 * Legacy output
 *
 * Copyright 1996,1997,1998,1999,2000,2001,2002,2003,2004 by Steve Jankowski
 *
 * Licensed under the Artistic License, see LICENSE.txt for license terms
 */

#include <stdio.h>

#include "qstat.h"
#include "qserver.h"
#include "xform.h"

void standard_display_header();

void standard_display_qwmaster(struct qserver *server);

void standard_display_server(struct qserver *server);
void standard_display_server_rules(struct qserver *server);

void standard_display_armyops_player_info(struct qserver *server);
void standard_display_bfbc2_player_info(struct qserver *server);
void standard_display_bfris_player_info(struct qserver *server);
void standard_display_descent3_player_info(struct qserver *server);
void standard_display_doom3_player_info(struct qserver *server);
void standard_display_eye_player_info(struct qserver *server);
void standard_display_farcry_player_info(struct qserver *server);
void standard_display_fl_player_info(struct qserver *server);
void standard_display_ghostrecon_player_info(struct qserver *server);
void standard_display_gs2_player_info(struct qserver *server);
void standard_display_halflife_player_info(struct qserver *server);
void standard_display_q2_player_info(struct qserver *server);
void standard_display_q_player_info(struct qserver *server);
void standard_display_qw_player_info(struct qserver *server);
void standard_display_ravenshield_player_info(struct qserver *server);
void standard_display_savage_player_info(struct qserver *server);
void standard_display_shogo_player_info(struct qserver *server);
void standard_display_starmade_player_info(struct qserver *server);
void standard_display_tee_player_info(struct qserver *server);
void standard_display_tm_player_info(struct qserver *server);
void standard_display_tribes2_player_info(struct qserver *server);
void standard_display_tribes_player_info(struct qserver *server);
void standard_display_ts2_player_info(struct qserver *server);
void standard_display_ts3_player_info(struct qserver *server);
void standard_display_unreal_player_info(struct qserver *server);
void standard_display_ventrilo_player_info(struct qserver *server);
void standard_display_wic_player_info(struct qserver *server);