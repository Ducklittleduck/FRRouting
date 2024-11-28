#if HAVE_BFDD == 0
/* zebra_ptm_enable => "[no] ptm-enable" */
DEFUN_CMD_FUNC_DECL(zebra_ptm_enable)
#define funcdecl_zebra_ptm_enable static int zebra_ptm_enable_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_zebra_ptm_enable;
DEFUN_CMD_FUNC_TEXT(zebra_ptm_enable)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return zebra_ptm_enable_magic(self, vty, argc, argv, no);
}
#endif

/* zebra_route_map_timer => "[no] zebra route-map delay-timer ![(0-600)$delay]" */
DEFUN_CMD_FUNC_DECL(zebra_route_map_timer)
#define funcdecl_zebra_route_map_timer static int zebra_route_map_timer_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long delay,\
	const char * delay_str __attribute__ ((unused)))
funcdecl_zebra_route_map_timer;
DEFUN_CMD_FUNC_TEXT(zebra_route_map_timer)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long delay = 0;
	const char *delay_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "delay")) {
			delay_str = argv[_i]->arg;
			char *_end;
			delay = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return zebra_route_map_timer_magic(self, vty, argc, argv, no, delay, delay_str);
}

/* multicast_new => "[no] multicast <enable$on|disable$off>" */
DEFUN_CMD_FUNC_DECL(multicast_new)
#define funcdecl_multicast_new static int multicast_new_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * on,\
	const char * off)
funcdecl_multicast_new;
DEFUN_CMD_FUNC_TEXT(multicast_new)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *on = NULL;
	const char *off = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "on")) {
			on = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "off")) {
			off = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return multicast_new_magic(self, vty, argc, argv, no, on, off);
}

/* multicast => "[no] multicast" */
DEFUN_CMD_FUNC_DECL(multicast)
#define funcdecl_multicast static int multicast_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_multicast;
DEFUN_CMD_FUNC_TEXT(multicast)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return multicast_magic(self, vty, argc, argv, no);
}

/* mpls => "[no] mpls <enable$on|disable$off>" */
DEFUN_CMD_FUNC_DECL(mpls)
#define funcdecl_mpls static int mpls_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * on,\
	const char * off)
funcdecl_mpls;
DEFUN_CMD_FUNC_TEXT(mpls)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *on = NULL;
	const char *off = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "on")) {
			on = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "off")) {
			off = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return mpls_magic(self, vty, argc, argv, no, on, off);
}

/* linkdetect => "[no] link-detect" */
DEFUN_CMD_FUNC_DECL(linkdetect)
#define funcdecl_linkdetect static int linkdetect_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_linkdetect;
DEFUN_CMD_FUNC_TEXT(linkdetect)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return linkdetect_magic(self, vty, argc, argv, no);
}

/* shutdown_if => "[no] shutdown" */
DEFUN_CMD_FUNC_DECL(shutdown_if)
#define funcdecl_shutdown_if static int shutdown_if_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_shutdown_if;
DEFUN_CMD_FUNC_TEXT(shutdown_if)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return shutdown_if_magic(self, vty, argc, argv, no);
}

/* bandwidth_if => "[no] bandwidth ![(1-1000000)]$bw" */
DEFUN_CMD_FUNC_DECL(bandwidth_if)
#define funcdecl_bandwidth_if static int bandwidth_if_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long bw,\
	const char * bw_str __attribute__ ((unused)))
funcdecl_bandwidth_if;
DEFUN_CMD_FUNC_TEXT(bandwidth_if)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long bw = 0;
	const char *bw_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "bw")) {
			bw_str = argv[_i]->arg;
			char *_end;
			bw = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return bandwidth_if_magic(self, vty, argc, argv, no, bw, bw_str);
}

/* link_params_metric => "[no] metric ![(0-4294967295)]$metric" */
DEFUN_CMD_FUNC_DECL(link_params_metric)
#define funcdecl_link_params_metric static int link_params_metric_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long metric,\
	const char * metric_str __attribute__ ((unused)))
funcdecl_link_params_metric;
DEFUN_CMD_FUNC_TEXT(link_params_metric)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long metric = 0;
	const char *metric_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "metric")) {
			metric_str = argv[_i]->arg;
			char *_end;
			metric = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return link_params_metric_magic(self, vty, argc, argv, no, metric, metric_str);
}

/* link_params_maxbw => "max-bw BANDWIDTH" */
DEFUN_CMD_FUNC_DECL(link_params_maxbw)
#define funcdecl_link_params_maxbw static int link_params_maxbw_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * bandwidth)
funcdecl_link_params_maxbw;
DEFUN_CMD_FUNC_TEXT(link_params_maxbw)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *bandwidth = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "bandwidth")) {
			bandwidth = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!bandwidth) {
		vty_out(vty, "Internal CLI error [%s]\n", "bandwidth");
		return CMD_WARNING;
	}

	return link_params_maxbw_magic(self, vty, argc, argv, bandwidth);
}

/* link_params_max_rsv_bw => "max-rsv-bw BANDWIDTH" */
DEFUN_CMD_FUNC_DECL(link_params_max_rsv_bw)
#define funcdecl_link_params_max_rsv_bw static int link_params_max_rsv_bw_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * bandwidth)
funcdecl_link_params_max_rsv_bw;
DEFUN_CMD_FUNC_TEXT(link_params_max_rsv_bw)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *bandwidth = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "bandwidth")) {
			bandwidth = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!bandwidth) {
		vty_out(vty, "Internal CLI error [%s]\n", "bandwidth");
		return CMD_WARNING;
	}

	return link_params_max_rsv_bw_magic(self, vty, argc, argv, bandwidth);
}

/* link_params_unrsv_bw => "unrsv-bw (0-7)$priority BANDWIDTH" */
DEFUN_CMD_FUNC_DECL(link_params_unrsv_bw)
#define funcdecl_link_params_unrsv_bw static int link_params_unrsv_bw_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long priority,\
	const char * priority_str __attribute__ ((unused)),\
	const char * bandwidth)
funcdecl_link_params_unrsv_bw;
DEFUN_CMD_FUNC_TEXT(link_params_unrsv_bw)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long priority = 0;
	const char *priority_str = NULL;
	const char *bandwidth = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "priority")) {
			priority_str = argv[_i]->arg;
			char *_end;
			priority = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "bandwidth")) {
			bandwidth = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!priority_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "priority_str");
		return CMD_WARNING;
	}
	if (!bandwidth) {
		vty_out(vty, "Internal CLI error [%s]\n", "bandwidth");
		return CMD_WARNING;
	}

	return link_params_unrsv_bw_magic(self, vty, argc, argv, priority, priority_str, bandwidth);
}

/* link_params_admin_grp => "[no] admin-grp ![BITPATTERN]" */
DEFUN_CMD_FUNC_DECL(link_params_admin_grp)
#define funcdecl_link_params_admin_grp static int link_params_admin_grp_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * bitpattern)
funcdecl_link_params_admin_grp;
DEFUN_CMD_FUNC_TEXT(link_params_admin_grp)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *bitpattern = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "bitpattern")) {
			bitpattern = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return link_params_admin_grp_magic(self, vty, argc, argv, no, bitpattern);
}

/* link_params_inter_as => "[no] neighbor ![A.B.C.D$ip as (1-4294967295)$as]" */
DEFUN_CMD_FUNC_DECL(link_params_inter_as)
#define funcdecl_link_params_inter_as static int link_params_inter_as_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	struct in_addr ip,\
	const char * ip_str __attribute__ ((unused)),\
	long as,\
	const char * as_str __attribute__ ((unused)))
funcdecl_link_params_inter_as;
DEFUN_CMD_FUNC_TEXT(link_params_inter_as)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct in_addr ip = { INADDR_ANY };
	const char *ip_str = NULL;
	long as = 0;
	const char *as_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "ip")) {
			ip_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &ip);
		}
		if (!strcmp(argv[_i]->varname, "as")) {
			as_str = argv[_i]->arg;
			char *_end;
			as = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return link_params_inter_as_magic(self, vty, argc, argv, no, ip, ip_str, as, as_str);
}

/* link_params_delay => "[no] delay ![(0-16777215)$delay [min (0-16777215)$min max (0-16777215)$max]]" */
DEFUN_CMD_FUNC_DECL(link_params_delay)
#define funcdecl_link_params_delay static int link_params_delay_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long delay,\
	const char * delay_str __attribute__ ((unused)),\
	long min,\
	const char * min_str __attribute__ ((unused)),\
	long max,\
	const char * max_str __attribute__ ((unused)))
funcdecl_link_params_delay;
DEFUN_CMD_FUNC_TEXT(link_params_delay)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long delay = 0;
	const char *delay_str = NULL;
	long min = 0;
	const char *min_str = NULL;
	long max = 0;
	const char *max_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "delay")) {
			delay_str = argv[_i]->arg;
			char *_end;
			delay = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "min")) {
			min_str = argv[_i]->arg;
			char *_end;
			min = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "max")) {
			max_str = argv[_i]->arg;
			char *_end;
			max = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return link_params_delay_magic(self, vty, argc, argv, no, delay, delay_str, min, min_str, max, max_str);
}

/* link_params_delay_var => "[no] delay-variation ![(0-16777215)$delay_var]" */
DEFUN_CMD_FUNC_DECL(link_params_delay_var)
#define funcdecl_link_params_delay_var static int link_params_delay_var_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long delay_var,\
	const char * delay_var_str __attribute__ ((unused)))
funcdecl_link_params_delay_var;
DEFUN_CMD_FUNC_TEXT(link_params_delay_var)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long delay_var = 0;
	const char *delay_var_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "delay_var")) {
			delay_var_str = argv[_i]->arg;
			char *_end;
			delay_var = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return link_params_delay_var_magic(self, vty, argc, argv, no, delay_var, delay_var_str);
}

/* link_params_pkt_loss => "[no] packet-loss ![PERCENTAGE]" */
DEFUN_CMD_FUNC_DECL(link_params_pkt_loss)
#define funcdecl_link_params_pkt_loss static int link_params_pkt_loss_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * percentage)
funcdecl_link_params_pkt_loss;
DEFUN_CMD_FUNC_TEXT(link_params_pkt_loss)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *percentage = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "percentage")) {
			percentage = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return link_params_pkt_loss_magic(self, vty, argc, argv, no, percentage);
}

/* link_params_res_bw => "[no] res-bw ![BANDWIDTH]" */
DEFUN_CMD_FUNC_DECL(link_params_res_bw)
#define funcdecl_link_params_res_bw static int link_params_res_bw_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * bandwidth)
funcdecl_link_params_res_bw;
DEFUN_CMD_FUNC_TEXT(link_params_res_bw)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *bandwidth = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "bandwidth")) {
			bandwidth = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return link_params_res_bw_magic(self, vty, argc, argv, no, bandwidth);
}

/* link_params_ava_bw => "[no] ava-bw ![BANDWIDTH]" */
DEFUN_CMD_FUNC_DECL(link_params_ava_bw)
#define funcdecl_link_params_ava_bw static int link_params_ava_bw_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * bandwidth)
funcdecl_link_params_ava_bw;
DEFUN_CMD_FUNC_TEXT(link_params_ava_bw)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *bandwidth = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "bandwidth")) {
			bandwidth = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return link_params_ava_bw_magic(self, vty, argc, argv, no, bandwidth);
}

/* link_params_use_bw => "[no] use-bw ![BANDWIDTH]" */
DEFUN_CMD_FUNC_DECL(link_params_use_bw)
#define funcdecl_link_params_use_bw static int link_params_use_bw_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * bandwidth)
funcdecl_link_params_use_bw;
DEFUN_CMD_FUNC_TEXT(link_params_use_bw)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *bandwidth = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "bandwidth")) {
			bandwidth = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return link_params_use_bw_magic(self, vty, argc, argv, no, bandwidth);
}

/* link_params_affinity => "[no] affinity NAME..." */
DEFUN_CMD_FUNC_DECL(link_params_affinity)
#define funcdecl_link_params_affinity static int link_params_affinity_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_link_params_affinity;
DEFUN_CMD_FUNC_TEXT(link_params_affinity)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return link_params_affinity_magic(self, vty, argc, argv, no);
}

/* link_params_affinity_mode => "[no] affinity-mode ![<standard|extended|both>$mode]" */
DEFUN_CMD_FUNC_DECL(link_params_affinity_mode)
#define funcdecl_link_params_affinity_mode static int link_params_affinity_mode_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * mode)
funcdecl_link_params_affinity_mode;
DEFUN_CMD_FUNC_TEXT(link_params_affinity_mode)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *mode = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "mode")) {
			mode = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return link_params_affinity_mode_magic(self, vty, argc, argv, no, mode);
}

#ifdef HAVE_NETLINK
/* ip_address => "[no] ip address A.B.C.D/M [label LINE$label]" */
DEFUN_CMD_FUNC_DECL(ip_address)
#define funcdecl_ip_address static int ip_address_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const struct prefix_ipv4 * address,\
	const char * address_str __attribute__ ((unused)),\
	const char * label)
funcdecl_ip_address;
DEFUN_CMD_FUNC_TEXT(ip_address)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct prefix_ipv4 address = { };
	const char *address_str = NULL;
	const char *label = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "address")) {
			address_str = argv[_i]->arg;
			_fail = !str2prefix_ipv4(argv[_i]->arg, &address);
		}
		if (!strcmp(argv[_i]->varname, "label")) {
			label = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!address_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "address_str");
		return CMD_WARNING;
	}

	return ip_address_magic(self, vty, argc, argv, no, &address, address_str, label);
}
#endif

#ifdef HAVE_NETLINK
#else
/* ip_address => "[no] ip address A.B.C.D/M" */
DEFUN_CMD_FUNC_DECL(ip_address)
#define funcdecl_ip_address static int ip_address_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const struct prefix_ipv4 * address,\
	const char * address_str __attribute__ ((unused)))
funcdecl_ip_address;
DEFUN_CMD_FUNC_TEXT(ip_address)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct prefix_ipv4 address = { };
	const char *address_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "address")) {
			address_str = argv[_i]->arg;
			_fail = !str2prefix_ipv4(argv[_i]->arg, &address);
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!address_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "address_str");
		return CMD_WARNING;
	}

	return ip_address_magic(self, vty, argc, argv, no, &address, address_str);
}
#endif

#ifdef HAVE_NETLINK
/* ip_address_peer => "[no] ip address A.B.C.D peer A.B.C.D/M [label LINE$label]" */
DEFUN_CMD_FUNC_DECL(ip_address_peer)
#define funcdecl_ip_address_peer static int ip_address_peer_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	struct in_addr address,\
	const char * address_str __attribute__ ((unused)),\
	const struct prefix_ipv4 * peer,\
	const char * peer_str __attribute__ ((unused)),\
	const char * label)
funcdecl_ip_address_peer;
DEFUN_CMD_FUNC_TEXT(ip_address_peer)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct in_addr address = { INADDR_ANY };
	const char *address_str = NULL;
	struct prefix_ipv4 peer = { };
	const char *peer_str = NULL;
	const char *label = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "address")) {
			address_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &address);
		}
		if (!strcmp(argv[_i]->varname, "peer")) {
			peer_str = argv[_i]->arg;
			_fail = !str2prefix_ipv4(argv[_i]->arg, &peer);
		}
		if (!strcmp(argv[_i]->varname, "label")) {
			label = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!address_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "address_str");
		return CMD_WARNING;
	}
	if (!peer_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "peer_str");
		return CMD_WARNING;
	}

	return ip_address_peer_magic(self, vty, argc, argv, no, address, address_str, &peer, peer_str, label);
}
#endif

#ifdef HAVE_NETLINK
#else
/* ip_address_peer => "[no] ip address A.B.C.D peer A.B.C.D/M" */
DEFUN_CMD_FUNC_DECL(ip_address_peer)
#define funcdecl_ip_address_peer static int ip_address_peer_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	struct in_addr address,\
	const char * address_str __attribute__ ((unused)),\
	const struct prefix_ipv4 * peer,\
	const char * peer_str __attribute__ ((unused)))
funcdecl_ip_address_peer;
DEFUN_CMD_FUNC_TEXT(ip_address_peer)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct in_addr address = { INADDR_ANY };
	const char *address_str = NULL;
	struct prefix_ipv4 peer = { };
	const char *peer_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "address")) {
			address_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &address);
		}
		if (!strcmp(argv[_i]->varname, "peer")) {
			peer_str = argv[_i]->arg;
			_fail = !str2prefix_ipv4(argv[_i]->arg, &peer);
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!address_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "address_str");
		return CMD_WARNING;
	}
	if (!peer_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "peer_str");
		return CMD_WARNING;
	}

	return ip_address_peer_magic(self, vty, argc, argv, no, address, address_str, &peer, peer_str);
}
#endif

/* ipv6_address => "[no] ipv6 address X:X::X:X/M" */
DEFUN_CMD_FUNC_DECL(ipv6_address)
#define funcdecl_ipv6_address static int ipv6_address_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const struct prefix_ipv6 * address,\
	const char * address_str __attribute__ ((unused)))
funcdecl_ipv6_address;
DEFUN_CMD_FUNC_TEXT(ipv6_address)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct prefix_ipv6 address = { };
	const char *address_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "address")) {
			address_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &address);
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!address_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "address_str");
		return CMD_WARNING;
	}

	return ipv6_address_magic(self, vty, argc, argv, no, &address, address_str);
}

/* zebra_evpn_es_bypass => "[no] evpn mh bypass" */
DEFUN_CMD_FUNC_DECL(zebra_evpn_es_bypass)
#define funcdecl_zebra_evpn_es_bypass static int zebra_evpn_es_bypass_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_zebra_evpn_es_bypass;
DEFUN_CMD_FUNC_TEXT(zebra_evpn_es_bypass)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return zebra_evpn_es_bypass_magic(self, vty, argc, argv, no);
}

/* zebra_evpn_es_pref => "[no$no] evpn mh es-df-pref ![(1-65535)$df_pref]" */
DEFUN_CMD_FUNC_DECL(zebra_evpn_es_pref)
#define funcdecl_zebra_evpn_es_pref static int zebra_evpn_es_pref_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long df_pref,\
	const char * df_pref_str __attribute__ ((unused)))
funcdecl_zebra_evpn_es_pref;
DEFUN_CMD_FUNC_TEXT(zebra_evpn_es_pref)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long df_pref = 0;
	const char *df_pref_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "df_pref")) {
			df_pref_str = argv[_i]->arg;
			char *_end;
			df_pref = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return zebra_evpn_es_pref_magic(self, vty, argc, argv, no, df_pref, df_pref_str);
}

/* zebra_evpn_es_sys_mac => "[no$no] evpn mh es-sys-mac ![X:X:X:X:X:X$mac]" */
DEFUN_CMD_FUNC_DECL(zebra_evpn_es_sys_mac)
#define funcdecl_zebra_evpn_es_sys_mac static int zebra_evpn_es_sys_mac_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	struct prefix_eth * mac,\
	const char * mac_str __attribute__ ((unused)))
funcdecl_zebra_evpn_es_sys_mac;
DEFUN_CMD_FUNC_TEXT(zebra_evpn_es_sys_mac)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct prefix_eth mac = { };
	const char *mac_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "mac")) {
			mac_str = argv[_i]->arg;
			_fail = !str2prefix_eth(argv[_i]->arg, &mac);
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return zebra_evpn_es_sys_mac_magic(self, vty, argc, argv, no, &mac, mac_str);
}

/* zebra_evpn_es_id => "[no$no] evpn mh es-id ![(1-16777215)$es_lid | NAME$esi_str]" */
DEFUN_CMD_FUNC_DECL(zebra_evpn_es_id)
#define funcdecl_zebra_evpn_es_id static int zebra_evpn_es_id_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long es_lid,\
	const char * es_lid_str __attribute__ ((unused)),\
	const char * esi_str)
funcdecl_zebra_evpn_es_id;
DEFUN_CMD_FUNC_TEXT(zebra_evpn_es_id)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long es_lid = 0;
	const char *es_lid_str = NULL;
	const char *esi_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "es_lid")) {
			es_lid_str = argv[_i]->arg;
			char *_end;
			es_lid = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "esi_str")) {
			esi_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return zebra_evpn_es_id_magic(self, vty, argc, argv, no, es_lid, es_lid_str, esi_str);
}

/* zebra_evpn_mh_uplink => "[no] evpn mh uplink" */
DEFUN_CMD_FUNC_DECL(zebra_evpn_mh_uplink)
#define funcdecl_zebra_evpn_mh_uplink static int zebra_evpn_mh_uplink_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_zebra_evpn_mh_uplink;
DEFUN_CMD_FUNC_TEXT(zebra_evpn_mh_uplink)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return zebra_evpn_mh_uplink_magic(self, vty, argc, argv, no);
}

#if defined(HAVE_RTADV)
/* ipv6_nd_ra_fast_retrans => "[no] ipv6 nd ra-fast-retrans" */
DEFUN_CMD_FUNC_DECL(ipv6_nd_ra_fast_retrans)
#define funcdecl_ipv6_nd_ra_fast_retrans static int ipv6_nd_ra_fast_retrans_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_ipv6_nd_ra_fast_retrans;
DEFUN_CMD_FUNC_TEXT(ipv6_nd_ra_fast_retrans)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return ipv6_nd_ra_fast_retrans_magic(self, vty, argc, argv, no);
}
#endif

#if defined(HAVE_RTADV)
/* ipv6_nd_ra_hop_limit => "[no] ipv6 nd ra-hop-limit ![(0-255)$hopcount]" */
DEFUN_CMD_FUNC_DECL(ipv6_nd_ra_hop_limit)
#define funcdecl_ipv6_nd_ra_hop_limit static int ipv6_nd_ra_hop_limit_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long hopcount,\
	const char * hopcount_str __attribute__ ((unused)))
funcdecl_ipv6_nd_ra_hop_limit;
DEFUN_CMD_FUNC_TEXT(ipv6_nd_ra_hop_limit)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long hopcount = 0;
	const char *hopcount_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "hopcount")) {
			hopcount_str = argv[_i]->arg;
			char *_end;
			hopcount = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return ipv6_nd_ra_hop_limit_magic(self, vty, argc, argv, no, hopcount, hopcount_str);
}
#endif

#if defined(HAVE_RTADV)
/* ipv6_nd_ra_retrans_interval => "[no] ipv6 nd ra-retrans-interval ![(0-4294967295)$interval]" */
DEFUN_CMD_FUNC_DECL(ipv6_nd_ra_retrans_interval)
#define funcdecl_ipv6_nd_ra_retrans_interval static int ipv6_nd_ra_retrans_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long interval,\
	const char * interval_str __attribute__ ((unused)))
funcdecl_ipv6_nd_ra_retrans_interval;
DEFUN_CMD_FUNC_TEXT(ipv6_nd_ra_retrans_interval)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long interval = 0;
	const char *interval_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "interval")) {
			interval_str = argv[_i]->arg;
			char *_end;
			interval = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return ipv6_nd_ra_retrans_interval_magic(self, vty, argc, argv, no, interval, interval_str);
}
#endif

#if defined(HAVE_RTADV)
/* ipv6_nd_suppress_ra => "[no] ipv6 nd suppress-ra" */
DEFUN_CMD_FUNC_DECL(ipv6_nd_suppress_ra)
#define funcdecl_ipv6_nd_suppress_ra static int ipv6_nd_suppress_ra_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_ipv6_nd_suppress_ra;
DEFUN_CMD_FUNC_TEXT(ipv6_nd_suppress_ra)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return ipv6_nd_suppress_ra_magic(self, vty, argc, argv, no);
}
#endif

#if defined(HAVE_RTADV)
/* ipv6_nd_ra_interval => "[no] ipv6 nd ra-interval ![<(1-1800)$sec|msec (70-1800000)$msec>]" */
DEFUN_CMD_FUNC_DECL(ipv6_nd_ra_interval)
#define funcdecl_ipv6_nd_ra_interval static int ipv6_nd_ra_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long sec,\
	const char * sec_str __attribute__ ((unused)),\
	long msec,\
	const char * msec_str __attribute__ ((unused)))
funcdecl_ipv6_nd_ra_interval;
DEFUN_CMD_FUNC_TEXT(ipv6_nd_ra_interval)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long sec = 0;
	const char *sec_str = NULL;
	long msec = 0;
	const char *msec_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "sec")) {
			sec_str = argv[_i]->arg;
			char *_end;
			sec = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "msec")) {
			msec_str = argv[_i]->arg;
			char *_end;
			msec = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return ipv6_nd_ra_interval_magic(self, vty, argc, argv, no, sec, sec_str, msec, msec_str);
}
#endif

#if defined(HAVE_RTADV)
/* ipv6_nd_ra_lifetime => "[no] ipv6 nd ra-lifetime ![(0-9000)$lifetime]" */
DEFUN_CMD_FUNC_DECL(ipv6_nd_ra_lifetime)
#define funcdecl_ipv6_nd_ra_lifetime static int ipv6_nd_ra_lifetime_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long lifetime,\
	const char * lifetime_str __attribute__ ((unused)))
funcdecl_ipv6_nd_ra_lifetime;
DEFUN_CMD_FUNC_TEXT(ipv6_nd_ra_lifetime)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long lifetime = 0;
	const char *lifetime_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "lifetime")) {
			lifetime_str = argv[_i]->arg;
			char *_end;
			lifetime = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return ipv6_nd_ra_lifetime_magic(self, vty, argc, argv, no, lifetime, lifetime_str);
}
#endif

#if defined(HAVE_RTADV)
/* ipv6_nd_reachable_time => "[no] ipv6 nd reachable-time ![(1-3600000)$msec]" */
DEFUN_CMD_FUNC_DECL(ipv6_nd_reachable_time)
#define funcdecl_ipv6_nd_reachable_time static int ipv6_nd_reachable_time_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long msec,\
	const char * msec_str __attribute__ ((unused)))
funcdecl_ipv6_nd_reachable_time;
DEFUN_CMD_FUNC_TEXT(ipv6_nd_reachable_time)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long msec = 0;
	const char *msec_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "msec")) {
			msec_str = argv[_i]->arg;
			char *_end;
			msec = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return ipv6_nd_reachable_time_magic(self, vty, argc, argv, no, msec, msec_str);
}
#endif

#if defined(HAVE_RTADV)
/* ipv6_nd_homeagent_preference => "[no] ipv6 nd home-agent-preference ![(0-65535)$pref]" */
DEFUN_CMD_FUNC_DECL(ipv6_nd_homeagent_preference)
#define funcdecl_ipv6_nd_homeagent_preference static int ipv6_nd_homeagent_preference_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long pref,\
	const char * pref_str __attribute__ ((unused)))
funcdecl_ipv6_nd_homeagent_preference;
DEFUN_CMD_FUNC_TEXT(ipv6_nd_homeagent_preference)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long pref = 0;
	const char *pref_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "pref")) {
			pref_str = argv[_i]->arg;
			char *_end;
			pref = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return ipv6_nd_homeagent_preference_magic(self, vty, argc, argv, no, pref, pref_str);
}
#endif

#if defined(HAVE_RTADV)
/* ipv6_nd_homeagent_lifetime => "[no] ipv6 nd home-agent-lifetime ![(1-65520)$lifetime]" */
DEFUN_CMD_FUNC_DECL(ipv6_nd_homeagent_lifetime)
#define funcdecl_ipv6_nd_homeagent_lifetime static int ipv6_nd_homeagent_lifetime_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long lifetime,\
	const char * lifetime_str __attribute__ ((unused)))
funcdecl_ipv6_nd_homeagent_lifetime;
DEFUN_CMD_FUNC_TEXT(ipv6_nd_homeagent_lifetime)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long lifetime = 0;
	const char *lifetime_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "lifetime")) {
			lifetime_str = argv[_i]->arg;
			char *_end;
			lifetime = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return ipv6_nd_homeagent_lifetime_magic(self, vty, argc, argv, no, lifetime, lifetime_str);
}
#endif

#if defined(HAVE_RTADV)
/* ipv6_nd_managed_config_flag => "[no] ipv6 nd managed-config-flag" */
DEFUN_CMD_FUNC_DECL(ipv6_nd_managed_config_flag)
#define funcdecl_ipv6_nd_managed_config_flag static int ipv6_nd_managed_config_flag_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_ipv6_nd_managed_config_flag;
DEFUN_CMD_FUNC_TEXT(ipv6_nd_managed_config_flag)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return ipv6_nd_managed_config_flag_magic(self, vty, argc, argv, no);
}
#endif

#if defined(HAVE_RTADV)
/* ipv6_nd_homeagent_config_flag => "[no] ipv6 nd home-agent-config-flag" */
DEFUN_CMD_FUNC_DECL(ipv6_nd_homeagent_config_flag)
#define funcdecl_ipv6_nd_homeagent_config_flag static int ipv6_nd_homeagent_config_flag_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_ipv6_nd_homeagent_config_flag;
DEFUN_CMD_FUNC_TEXT(ipv6_nd_homeagent_config_flag)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return ipv6_nd_homeagent_config_flag_magic(self, vty, argc, argv, no);
}
#endif

#if defined(HAVE_RTADV)
/* ipv6_nd_adv_interval_config_option => "[no] ipv6 nd adv-interval-option" */
DEFUN_CMD_FUNC_DECL(ipv6_nd_adv_interval_config_option)
#define funcdecl_ipv6_nd_adv_interval_config_option static int ipv6_nd_adv_interval_config_option_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_ipv6_nd_adv_interval_config_option;
DEFUN_CMD_FUNC_TEXT(ipv6_nd_adv_interval_config_option)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return ipv6_nd_adv_interval_config_option_magic(self, vty, argc, argv, no);
}
#endif

#if defined(HAVE_RTADV)
/* ipv6_nd_other_config_flag => "[no] ipv6 nd other-config-flag" */
DEFUN_CMD_FUNC_DECL(ipv6_nd_other_config_flag)
#define funcdecl_ipv6_nd_other_config_flag static int ipv6_nd_other_config_flag_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_ipv6_nd_other_config_flag;
DEFUN_CMD_FUNC_TEXT(ipv6_nd_other_config_flag)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return ipv6_nd_other_config_flag_magic(self, vty, argc, argv, no);
}
#endif

#if defined(HAVE_RTADV)
/* ipv6_nd_prefix => "[no] ipv6 nd prefix X:X::X:X/M$prefix [<(0-4294967295)|infinite>$valid <(0-4294967295)|infinite>$preferred] [{router-address$routeraddr|off-link$offlink|no-autoconfig$noautoconf}]" */
DEFUN_CMD_FUNC_DECL(ipv6_nd_prefix)
#define funcdecl_ipv6_nd_prefix static int ipv6_nd_prefix_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const struct prefix_ipv6 * prefix,\
	const char * prefix_str __attribute__ ((unused)),\
	const char * valid,\
	const char * preferred,\
	const char * routeraddr,\
	const char * offlink,\
	const char * noautoconf)
funcdecl_ipv6_nd_prefix;
DEFUN_CMD_FUNC_TEXT(ipv6_nd_prefix)
{
#if 7 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct prefix_ipv6 prefix = { };
	const char *prefix_str = NULL;
	const char *valid = NULL;
	const char *preferred = NULL;
	const char *routeraddr = NULL;
	const char *offlink = NULL;
	const char *noautoconf = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &prefix);
		}
		if (!strcmp(argv[_i]->varname, "valid")) {
			valid = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "preferred")) {
			preferred = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "routeraddr")) {
			routeraddr = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "offlink")) {
			offlink = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "noautoconf")) {
			noautoconf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!prefix_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "prefix_str");
		return CMD_WARNING;
	}

	return ipv6_nd_prefix_magic(self, vty, argc, argv, no, &prefix, prefix_str, valid, preferred, routeraddr, offlink, noautoconf);
}
#endif

#if defined(HAVE_RTADV)
/* ipv6_nd_router_preference => "[no] ipv6 nd router-preference ![<high|medium|low>$pref]" */
DEFUN_CMD_FUNC_DECL(ipv6_nd_router_preference)
#define funcdecl_ipv6_nd_router_preference static int ipv6_nd_router_preference_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * pref)
funcdecl_ipv6_nd_router_preference;
DEFUN_CMD_FUNC_TEXT(ipv6_nd_router_preference)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *pref = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "pref")) {
			pref = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return ipv6_nd_router_preference_magic(self, vty, argc, argv, no, pref);
}
#endif

#if defined(HAVE_RTADV)
/* ipv6_nd_mtu => "[no] ipv6 nd mtu ![(1-65535)]" */
DEFUN_CMD_FUNC_DECL(ipv6_nd_mtu)
#define funcdecl_ipv6_nd_mtu static int ipv6_nd_mtu_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long mtu,\
	const char * mtu_str __attribute__ ((unused)))
funcdecl_ipv6_nd_mtu;
DEFUN_CMD_FUNC_TEXT(ipv6_nd_mtu)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long mtu = 0;
	const char *mtu_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "mtu")) {
			mtu_str = argv[_i]->arg;
			char *_end;
			mtu = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return ipv6_nd_mtu_magic(self, vty, argc, argv, no, mtu, mtu_str);
}
#endif

#if defined(HAVE_RTADV)
/* ipv6_nd_rdnss => "[no] ipv6 nd rdnss X:X::X:X$addr [<(0-4294967295)|infinite>]$lifetime" */
DEFUN_CMD_FUNC_DECL(ipv6_nd_rdnss)
#define funcdecl_ipv6_nd_rdnss static int ipv6_nd_rdnss_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	struct in6_addr addr,\
	const char * addr_str __attribute__ ((unused)),\
	const char * lifetime)
funcdecl_ipv6_nd_rdnss;
DEFUN_CMD_FUNC_TEXT(ipv6_nd_rdnss)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct in6_addr addr = {};
	const char *addr_str = NULL;
	const char *lifetime = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "addr")) {
			addr_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &addr);
		}
		if (!strcmp(argv[_i]->varname, "lifetime")) {
			lifetime = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!addr_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "addr_str");
		return CMD_WARNING;
	}

	return ipv6_nd_rdnss_magic(self, vty, argc, argv, no, addr, addr_str, lifetime);
}
#endif

#if defined(HAVE_RTADV)
/* ipv6_nd_dnssl => "[no] ipv6 nd dnssl SUFFIX [<(0-4294967295)|infinite>]$lifetime" */
DEFUN_CMD_FUNC_DECL(ipv6_nd_dnssl)
#define funcdecl_ipv6_nd_dnssl static int ipv6_nd_dnssl_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * suffix,\
	const char * lifetime)
funcdecl_ipv6_nd_dnssl;
DEFUN_CMD_FUNC_TEXT(ipv6_nd_dnssl)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *suffix = NULL;
	const char *lifetime = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "suffix")) {
			suffix = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "lifetime")) {
			lifetime = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!suffix) {
		vty_out(vty, "Internal CLI error [%s]\n", "suffix");
		return CMD_WARNING;
	}

	return ipv6_nd_dnssl_magic(self, vty, argc, argv, no, suffix, lifetime);
}
#endif

#if HAVE_BFDD == 0
/* zebra_ptm_enable_if => "[no] ptm-enable" */
DEFUN_CMD_FUNC_DECL(zebra_ptm_enable_if)
#define funcdecl_zebra_ptm_enable_if static int zebra_ptm_enable_if_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_zebra_ptm_enable_if;
DEFUN_CMD_FUNC_TEXT(zebra_ptm_enable_if)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return zebra_ptm_enable_if_magic(self, vty, argc, argv, no);
}
#endif

/* ip_router_id => "[no] ip router-id A.B.C.D$id vrf NAME" */
DEFUN_CMD_FUNC_DECL(ip_router_id)
#define funcdecl_ip_router_id static int ip_router_id_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	struct in_addr id,\
	const char * id_str __attribute__ ((unused)),\
	const char * vrf)
funcdecl_ip_router_id;
DEFUN_CMD_FUNC_TEXT(ip_router_id)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct in_addr id = { INADDR_ANY };
	const char *id_str = NULL;
	const char *vrf = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "id")) {
			id_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &id);
		}
		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!id_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "id_str");
		return CMD_WARNING;
	}
	if (!vrf) {
		vty_out(vty, "Internal CLI error [%s]\n", "vrf");
		return CMD_WARNING;
	}

	return ip_router_id_magic(self, vty, argc, argv, no, id, id_str, vrf);
}

/* ipv6_router_id => "[no] ipv6 router-id X:X::X:X$id vrf NAME" */
DEFUN_CMD_FUNC_DECL(ipv6_router_id)
#define funcdecl_ipv6_router_id static int ipv6_router_id_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	struct in6_addr id,\
	const char * id_str __attribute__ ((unused)),\
	const char * vrf)
funcdecl_ipv6_router_id;
DEFUN_CMD_FUNC_TEXT(ipv6_router_id)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct in6_addr id = {};
	const char *id_str = NULL;
	const char *vrf = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "id")) {
			id_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &id);
		}
		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!id_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "id_str");
		return CMD_WARNING;
	}
	if (!vrf) {
		vty_out(vty, "Internal CLI error [%s]\n", "vrf");
		return CMD_WARNING;
	}

	return ipv6_router_id_magic(self, vty, argc, argv, no, id, id_str, vrf);
}

/* ip_router_id_in_vrf => "[no] ip router-id ![A.B.C.D$id]" */
DEFUN_CMD_FUNC_DECL(ip_router_id_in_vrf)
#define funcdecl_ip_router_id_in_vrf static int ip_router_id_in_vrf_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	struct in_addr id,\
	const char * id_str __attribute__ ((unused)))
funcdecl_ip_router_id_in_vrf;
DEFUN_CMD_FUNC_TEXT(ip_router_id_in_vrf)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct in_addr id = { INADDR_ANY };
	const char *id_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "id")) {
			id_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &id);
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return ip_router_id_in_vrf_magic(self, vty, argc, argv, no, id, id_str);
}

/* ipv6_router_id_in_vrf => "[no] ipv6 router-id ![X:X::X:X$id]" */
DEFUN_CMD_FUNC_DECL(ipv6_router_id_in_vrf)
#define funcdecl_ipv6_router_id_in_vrf static int ipv6_router_id_in_vrf_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	struct in6_addr id,\
	const char * id_str __attribute__ ((unused)))
funcdecl_ipv6_router_id_in_vrf;
DEFUN_CMD_FUNC_TEXT(ipv6_router_id_in_vrf)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct in6_addr id = {};
	const char *id_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "id")) {
			id_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &id);
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return ipv6_router_id_in_vrf_magic(self, vty, argc, argv, no, id, id_str);
}

/* ip_protocol => "[no] ip protocol <kernel|connected|local|static|rip|ospf|isis|bgp|eigrp|table|vnc|babel|openfabric|table-direct|any> $proto ![route-map ROUTE-MAP$rmap]" */
DEFUN_CMD_FUNC_DECL(ip_protocol)
#define funcdecl_ip_protocol static int ip_protocol_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * proto,\
	const char * rmap)
funcdecl_ip_protocol;
DEFUN_CMD_FUNC_TEXT(ip_protocol)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *proto = NULL;
	const char *rmap = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "proto")) {
			proto = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "rmap")) {
			rmap = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!proto) {
		vty_out(vty, "Internal CLI error [%s]\n", "proto");
		return CMD_WARNING;
	}

	return ip_protocol_magic(self, vty, argc, argv, no, proto, rmap);
}

/* ipv6_protocol => "[no] ipv6 protocol <kernel|connected|local|static|ripng|ospf6|isis|bgp|table|vnc|babel|openfabric|table-direct|any> $proto ![route-map ROUTE-MAP$rmap]" */
DEFUN_CMD_FUNC_DECL(ipv6_protocol)
#define funcdecl_ipv6_protocol static int ipv6_protocol_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * proto,\
	const char * rmap)
funcdecl_ipv6_protocol;
DEFUN_CMD_FUNC_TEXT(ipv6_protocol)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *proto = NULL;
	const char *rmap = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "proto")) {
			proto = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "rmap")) {
			rmap = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!proto) {
		vty_out(vty, "Internal CLI error [%s]\n", "proto");
		return CMD_WARNING;
	}

	return ipv6_protocol_magic(self, vty, argc, argv, no, proto, rmap);
}

/* ip_protocol_nht_rmap => "[no] ip nht <kernel|connected|local|static|rip|ospf|isis|bgp|eigrp|table|vnc|babel|openfabric|table-direct|any> $proto ![route-map ROUTE-MAP$rmap]" */
DEFUN_CMD_FUNC_DECL(ip_protocol_nht_rmap)
#define funcdecl_ip_protocol_nht_rmap static int ip_protocol_nht_rmap_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * proto,\
	const char * rmap)
funcdecl_ip_protocol_nht_rmap;
DEFUN_CMD_FUNC_TEXT(ip_protocol_nht_rmap)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *proto = NULL;
	const char *rmap = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "proto")) {
			proto = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "rmap")) {
			rmap = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!proto) {
		vty_out(vty, "Internal CLI error [%s]\n", "proto");
		return CMD_WARNING;
	}

	return ip_protocol_nht_rmap_magic(self, vty, argc, argv, no, proto, rmap);
}

/* ipv6_protocol_nht_rmap => "[no] ipv6 nht <kernel|connected|local|static|ripng|ospf6|isis|bgp|table|vnc|babel|openfabric|table-direct|any> $proto ![route-map ROUTE-MAP$rmap]" */
DEFUN_CMD_FUNC_DECL(ipv6_protocol_nht_rmap)
#define funcdecl_ipv6_protocol_nht_rmap static int ipv6_protocol_nht_rmap_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * proto,\
	const char * rmap)
funcdecl_ipv6_protocol_nht_rmap;
DEFUN_CMD_FUNC_TEXT(ipv6_protocol_nht_rmap)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *proto = NULL;
	const char *rmap = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "proto")) {
			proto = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "rmap")) {
			rmap = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!proto) {
		vty_out(vty, "Internal CLI error [%s]\n", "proto");
		return CMD_WARNING;
	}

	return ipv6_protocol_nht_rmap_magic(self, vty, argc, argv, no, proto, rmap);
}

/* ip_nht_default_route => "[no] ip nht resolve-via-default" */
DEFUN_CMD_FUNC_DECL(ip_nht_default_route)
#define funcdecl_ip_nht_default_route static int ip_nht_default_route_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_ip_nht_default_route;
DEFUN_CMD_FUNC_TEXT(ip_nht_default_route)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return ip_nht_default_route_magic(self, vty, argc, argv, no);
}

/* ipv6_nht_default_route => "[no] ipv6 nht resolve-via-default" */
DEFUN_CMD_FUNC_DECL(ipv6_nht_default_route)
#define funcdecl_ipv6_nht_default_route static int ipv6_nht_default_route_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_ipv6_nht_default_route;
DEFUN_CMD_FUNC_TEXT(ipv6_nht_default_route)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return ipv6_nht_default_route_magic(self, vty, argc, argv, no);
}

/* mpls_fec_nexthop_resolution => "[no$no] mpls fec nexthop-resolution" */
DEFUN_CMD_FUNC_DECL(mpls_fec_nexthop_resolution)
#define funcdecl_mpls_fec_nexthop_resolution static int mpls_fec_nexthop_resolution_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_mpls_fec_nexthop_resolution;
DEFUN_CMD_FUNC_TEXT(mpls_fec_nexthop_resolution)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return mpls_fec_nexthop_resolution_magic(self, vty, argc, argv, no);
}

/* vrf_netns => "[no] netns ![NAME$netns_name]" */
DEFUN_CMD_FUNC_DECL(vrf_netns)
#define funcdecl_vrf_netns static int vrf_netns_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * netns_name)
funcdecl_vrf_netns;
DEFUN_CMD_FUNC_TEXT(vrf_netns)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *netns_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "netns_name")) {
			netns_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return vrf_netns_magic(self, vty, argc, argv, no, netns_name);
}

/* ip_table_range => "[no] ip table range ![(1-4294967295)$start (1-4294967295)$end]" */
DEFUN_CMD_FUNC_DECL(ip_table_range)
#define funcdecl_ip_table_range static int ip_table_range_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long start,\
	const char * start_str __attribute__ ((unused)),\
	long end,\
	const char * end_str __attribute__ ((unused)))
funcdecl_ip_table_range;
DEFUN_CMD_FUNC_TEXT(ip_table_range)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long start = 0;
	const char *start_str = NULL;
	long end = 0;
	const char *end_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "start")) {
			start_str = argv[_i]->arg;
			char *_end;
			start = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "end")) {
			end_str = argv[_i]->arg;
			char *_end;
			end = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return ip_table_range_magic(self, vty, argc, argv, no, start, start_str, end, end_str);
}

/* vni_mapping => "[no] vni ![(1-16777215)[prefix-routes-only$filter]]" */
DEFUN_CMD_FUNC_DECL(vni_mapping)
#define funcdecl_vni_mapping static int vni_mapping_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long vni,\
	const char * vni_str __attribute__ ((unused)),\
	const char * filter)
funcdecl_vni_mapping;
DEFUN_CMD_FUNC_TEXT(vni_mapping)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long vni = 0;
	const char *vni_str = NULL;
	const char *filter = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "vni")) {
			vni_str = argv[_i]->arg;
			char *_end;
			vni = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "filter")) {
			filter = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return vni_mapping_magic(self, vty, argc, argv, no, vni, vni_str, filter);
}

/* match_ip_address_prefix_len => "match ip address prefix-len (0-32)$length" */
DEFUN_CMD_FUNC_DECL(match_ip_address_prefix_len)
#define funcdecl_match_ip_address_prefix_len static int match_ip_address_prefix_len_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long length,\
	const char * length_str __attribute__ ((unused)))
funcdecl_match_ip_address_prefix_len;
DEFUN_CMD_FUNC_TEXT(match_ip_address_prefix_len)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long length = 0;
	const char *length_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "length")) {
			length_str = argv[_i]->arg;
			char *_end;
			length = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!length_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "length_str");
		return CMD_WARNING;
	}

	return match_ip_address_prefix_len_magic(self, vty, argc, argv, length, length_str);
}

/* no_match_ip_address_prefix_len => "no match ip address prefix-len [(0-32)]" */
DEFUN_CMD_FUNC_DECL(no_match_ip_address_prefix_len)
#define funcdecl_no_match_ip_address_prefix_len static int no_match_ip_address_prefix_len_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long prefix_len,\
	const char * prefix_len_str __attribute__ ((unused)))
funcdecl_no_match_ip_address_prefix_len;
DEFUN_CMD_FUNC_TEXT(no_match_ip_address_prefix_len)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long prefix_len = 0;
	const char *prefix_len_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "prefix_len")) {
			prefix_len_str = argv[_i]->arg;
			char *_end;
			prefix_len = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return no_match_ip_address_prefix_len_magic(self, vty, argc, argv, prefix_len, prefix_len_str);
}

/* match_ipv6_address_prefix_len => "match ipv6 address prefix-len (0-128)$length" */
DEFUN_CMD_FUNC_DECL(match_ipv6_address_prefix_len)
#define funcdecl_match_ipv6_address_prefix_len static int match_ipv6_address_prefix_len_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long length,\
	const char * length_str __attribute__ ((unused)))
funcdecl_match_ipv6_address_prefix_len;
DEFUN_CMD_FUNC_TEXT(match_ipv6_address_prefix_len)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long length = 0;
	const char *length_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "length")) {
			length_str = argv[_i]->arg;
			char *_end;
			length = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!length_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "length_str");
		return CMD_WARNING;
	}

	return match_ipv6_address_prefix_len_magic(self, vty, argc, argv, length, length_str);
}

/* no_match_ipv6_address_prefix_len => "no match ipv6 address prefix-len [(0-128)]" */
DEFUN_CMD_FUNC_DECL(no_match_ipv6_address_prefix_len)
#define funcdecl_no_match_ipv6_address_prefix_len static int no_match_ipv6_address_prefix_len_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long prefix_len,\
	const char * prefix_len_str __attribute__ ((unused)))
funcdecl_no_match_ipv6_address_prefix_len;
DEFUN_CMD_FUNC_TEXT(no_match_ipv6_address_prefix_len)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long prefix_len = 0;
	const char *prefix_len_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "prefix_len")) {
			prefix_len_str = argv[_i]->arg;
			char *_end;
			prefix_len = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return no_match_ipv6_address_prefix_len_magic(self, vty, argc, argv, prefix_len, prefix_len_str);
}

/* match_ip_nexthop_prefix_len => "match ip next-hop prefix-len (0-32)$length" */
DEFUN_CMD_FUNC_DECL(match_ip_nexthop_prefix_len)
#define funcdecl_match_ip_nexthop_prefix_len static int match_ip_nexthop_prefix_len_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long length,\
	const char * length_str __attribute__ ((unused)))
funcdecl_match_ip_nexthop_prefix_len;
DEFUN_CMD_FUNC_TEXT(match_ip_nexthop_prefix_len)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long length = 0;
	const char *length_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "length")) {
			length_str = argv[_i]->arg;
			char *_end;
			length = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!length_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "length_str");
		return CMD_WARNING;
	}

	return match_ip_nexthop_prefix_len_magic(self, vty, argc, argv, length, length_str);
}

/* no_match_ip_nexthop_prefix_len => "no match ip next-hop prefix-len [(0-32)]" */
DEFUN_CMD_FUNC_DECL(no_match_ip_nexthop_prefix_len)
#define funcdecl_no_match_ip_nexthop_prefix_len static int no_match_ip_nexthop_prefix_len_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long prefix_len,\
	const char * prefix_len_str __attribute__ ((unused)))
funcdecl_no_match_ip_nexthop_prefix_len;
DEFUN_CMD_FUNC_TEXT(no_match_ip_nexthop_prefix_len)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long prefix_len = 0;
	const char *prefix_len_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "prefix_len")) {
			prefix_len_str = argv[_i]->arg;
			char *_end;
			prefix_len = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return no_match_ip_nexthop_prefix_len_magic(self, vty, argc, argv, prefix_len, prefix_len_str);
}

/* match_source_protocol => "match source-protocol <kernel|connected|local|static|rip|ripng|ospf|ospf6|isis|bgp|eigrp|table|vnc|babel|openfabric|table-direct>$proto" */
DEFUN_CMD_FUNC_DECL(match_source_protocol)
#define funcdecl_match_source_protocol static int match_source_protocol_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * proto)
funcdecl_match_source_protocol;
DEFUN_CMD_FUNC_TEXT(match_source_protocol)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *proto = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "proto")) {
			proto = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!proto) {
		vty_out(vty, "Internal CLI error [%s]\n", "proto");
		return CMD_WARNING;
	}

	return match_source_protocol_magic(self, vty, argc, argv, proto);
}

/* no_match_source_protocol => "no match source-protocol [<kernel|connected|local|static|rip|ripng|ospf|ospf6|isis|bgp|eigrp|table|vnc|babel|openfabric|table-direct>]" */
DEFUN_CMD_FUNC_DECL(no_match_source_protocol)
#define funcdecl_no_match_source_protocol static int no_match_source_protocol_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_no_match_source_protocol;
DEFUN_CMD_FUNC_TEXT(no_match_source_protocol)
{
#if 0 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return no_match_source_protocol_magic(self, vty, argc, argv);
}

/* match_source_instance => "match source-instance (0-255)$instance" */
DEFUN_CMD_FUNC_DECL(match_source_instance)
#define funcdecl_match_source_instance static int match_source_instance_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long instance,\
	const char * instance_str __attribute__ ((unused)))
funcdecl_match_source_instance;
DEFUN_CMD_FUNC_TEXT(match_source_instance)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long instance = 0;
	const char *instance_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "instance")) {
			instance_str = argv[_i]->arg;
			char *_end;
			instance = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!instance_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "instance_str");
		return CMD_WARNING;
	}

	return match_source_instance_magic(self, vty, argc, argv, instance, instance_str);
}

/* no_match_source_instance => "no match source-instance [(0-255)]" */
DEFUN_CMD_FUNC_DECL(no_match_source_instance)
#define funcdecl_no_match_source_instance static int no_match_source_instance_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long source_instance,\
	const char * source_instance_str __attribute__ ((unused)))
funcdecl_no_match_source_instance;
DEFUN_CMD_FUNC_TEXT(no_match_source_instance)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long source_instance = 0;
	const char *source_instance_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "source_instance")) {
			source_instance_str = argv[_i]->arg;
			char *_end;
			source_instance = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return no_match_source_instance_magic(self, vty, argc, argv, source_instance, source_instance_str);
}

/* set_src => "set src <A.B.C.D$addrv4|X:X::X:X$addrv6>" */
DEFUN_CMD_FUNC_DECL(set_src)
#define funcdecl_set_src static int set_src_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in_addr addrv4,\
	const char * addrv4_str __attribute__ ((unused)),\
	struct in6_addr addrv6,\
	const char * addrv6_str __attribute__ ((unused)))
funcdecl_set_src;
DEFUN_CMD_FUNC_TEXT(set_src)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in_addr addrv4 = { INADDR_ANY };
	const char *addrv4_str = NULL;
	struct in6_addr addrv6 = {};
	const char *addrv6_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "addrv4")) {
			addrv4_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &addrv4);
		}
		if (!strcmp(argv[_i]->varname, "addrv6")) {
			addrv6_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &addrv6);
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return set_src_magic(self, vty, argc, argv, addrv4, addrv4_str, addrv6, addrv6_str);
}

/* no_set_src => "no set src [<A.B.C.D|X:X::X:X>]" */
DEFUN_CMD_FUNC_DECL(no_set_src)
#define funcdecl_no_set_src static int no_set_src_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const union sockunion * src,\
	const char * src_str __attribute__ ((unused)))
funcdecl_no_set_src;
DEFUN_CMD_FUNC_TEXT(no_set_src)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	union sockunion s__src = { .sa.sa_family = AF_UNSPEC }, *src = NULL;
	const char *src_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "src")) {
			src_str = argv[_i]->arg;
			if (argv[_i]->text[0] == 'X') {
				s__src.sa.sa_family = AF_INET6;
				_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s__src.sin6.sin6_addr);
				src = &s__src;
			} else {
				s__src.sa.sa_family = AF_INET;
				_fail = !inet_aton(argv[_i]->arg, &s__src.sin.sin_addr);
				src = &s__src;
			}
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return no_set_src_magic(self, vty, argc, argv, src, src_str);
}

