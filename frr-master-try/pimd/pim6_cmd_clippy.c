/* router_pim6 => "router pim6 [vrf NAME]" */
DEFUN_CMD_FUNC_DECL(router_pim6)
#define funcdecl_router_pim6 static int router_pim6_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf)
funcdecl_router_pim6;
DEFUN_CMD_FUNC_TEXT(router_pim6)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return router_pim6_magic(self, vty, argc, argv, vrf);
}

/* no_router_pim6 => "no router pim6 [vrf NAME]" */
DEFUN_CMD_FUNC_DECL(no_router_pim6)
#define funcdecl_no_router_pim6 static int no_router_pim6_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf)
funcdecl_no_router_pim6;
DEFUN_CMD_FUNC_TEXT(no_router_pim6)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return no_router_pim6_magic(self, vty, argc, argv, vrf);
}

/* pim6_joinprune_time => "join-prune-interval (1-65535)$jpi" */
DEFUN_CMD_FUNC_DECL(pim6_joinprune_time)
#define funcdecl_pim6_joinprune_time static int pim6_joinprune_time_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long jpi,\
	const char * jpi_str __attribute__ ((unused)))
funcdecl_pim6_joinprune_time;
DEFUN_CMD_FUNC_TEXT(pim6_joinprune_time)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long jpi = 0;
	const char *jpi_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "jpi")) {
			jpi_str = argv[_i]->arg;
			char *_end;
			jpi = strtol(argv[_i]->arg, &_end, 10);
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
	if (!jpi_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "jpi_str");
		return CMD_WARNING;
	}

	return pim6_joinprune_time_magic(self, vty, argc, argv, jpi, jpi_str);
}

/* ipv6_joinprune_time => "ipv6 pim join-prune-interval (1-65535)$jpi" */
DEFUN_CMD_FUNC_DECL(ipv6_joinprune_time)
#define funcdecl_ipv6_joinprune_time static int ipv6_joinprune_time_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long jpi,\
	const char * jpi_str __attribute__ ((unused)))
funcdecl_ipv6_joinprune_time;
DEFUN_CMD_FUNC_TEXT(ipv6_joinprune_time)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long jpi = 0;
	const char *jpi_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "jpi")) {
			jpi_str = argv[_i]->arg;
			char *_end;
			jpi = strtol(argv[_i]->arg, &_end, 10);
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
	if (!jpi_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "jpi_str");
		return CMD_WARNING;
	}

	return ipv6_joinprune_time_magic(self, vty, argc, argv, jpi, jpi_str);
}

/* no_pim6_joinprune_time => "no join-prune-interval [(1-65535)]" */
DEFUN_CMD_FUNC_DECL(no_pim6_joinprune_time)
#define funcdecl_no_pim6_joinprune_time static int no_pim6_joinprune_time_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long join_prune_interval,\
	const char * join_prune_interval_str __attribute__ ((unused)))
funcdecl_no_pim6_joinprune_time;
DEFUN_CMD_FUNC_TEXT(no_pim6_joinprune_time)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long join_prune_interval = 0;
	const char *join_prune_interval_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "join_prune_interval")) {
			join_prune_interval_str = argv[_i]->arg;
			char *_end;
			join_prune_interval = strtol(argv[_i]->arg, &_end, 10);
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

	return no_pim6_joinprune_time_magic(self, vty, argc, argv, join_prune_interval, join_prune_interval_str);
}

/* no_ipv6_pim_joinprune_time => "no ipv6 pim join-prune-interval [(1-65535)]" */
DEFUN_CMD_FUNC_DECL(no_ipv6_pim_joinprune_time)
#define funcdecl_no_ipv6_pim_joinprune_time static int no_ipv6_pim_joinprune_time_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long join_prune_interval,\
	const char * join_prune_interval_str __attribute__ ((unused)))
funcdecl_no_ipv6_pim_joinprune_time;
DEFUN_CMD_FUNC_TEXT(no_ipv6_pim_joinprune_time)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long join_prune_interval = 0;
	const char *join_prune_interval_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "join_prune_interval")) {
			join_prune_interval_str = argv[_i]->arg;
			char *_end;
			join_prune_interval = strtol(argv[_i]->arg, &_end, 10);
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

	return no_ipv6_pim_joinprune_time_magic(self, vty, argc, argv, join_prune_interval, join_prune_interval_str);
}

/* pim6_spt_switchover_infinity => "spt-switchover infinity-and-beyond" */
DEFUN_CMD_FUNC_DECL(pim6_spt_switchover_infinity)
#define funcdecl_pim6_spt_switchover_infinity static int pim6_spt_switchover_infinity_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_pim6_spt_switchover_infinity;
DEFUN_CMD_FUNC_TEXT(pim6_spt_switchover_infinity)
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

	return pim6_spt_switchover_infinity_magic(self, vty, argc, argv);
}

/* ipv6_spt_switchover_infinity => "ipv6 pim spt-switchover infinity-and-beyond" */
DEFUN_CMD_FUNC_DECL(ipv6_spt_switchover_infinity)
#define funcdecl_ipv6_spt_switchover_infinity static int ipv6_spt_switchover_infinity_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_ipv6_spt_switchover_infinity;
DEFUN_CMD_FUNC_TEXT(ipv6_spt_switchover_infinity)
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

	return ipv6_spt_switchover_infinity_magic(self, vty, argc, argv);
}

/* pim6_spt_switchover_infinity_plist => "spt-switchover infinity-and-beyond prefix-list PREFIXLIST6_NAME$plist" */
DEFUN_CMD_FUNC_DECL(pim6_spt_switchover_infinity_plist)
#define funcdecl_pim6_spt_switchover_infinity_plist static int pim6_spt_switchover_infinity_plist_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * plist)
funcdecl_pim6_spt_switchover_infinity_plist;
DEFUN_CMD_FUNC_TEXT(pim6_spt_switchover_infinity_plist)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *plist = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "plist")) {
			plist = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!plist) {
		vty_out(vty, "Internal CLI error [%s]\n", "plist");
		return CMD_WARNING;
	}

	return pim6_spt_switchover_infinity_plist_magic(self, vty, argc, argv, plist);
}

/* ipv6_spt_switchover_infinity_plist => "ipv6 pim spt-switchover infinity-and-beyond prefix-list PREFIXLIST6_NAME$plist" */
DEFUN_CMD_FUNC_DECL(ipv6_spt_switchover_infinity_plist)
#define funcdecl_ipv6_spt_switchover_infinity_plist static int ipv6_spt_switchover_infinity_plist_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * plist)
funcdecl_ipv6_spt_switchover_infinity_plist;
DEFUN_CMD_FUNC_TEXT(ipv6_spt_switchover_infinity_plist)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *plist = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "plist")) {
			plist = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!plist) {
		vty_out(vty, "Internal CLI error [%s]\n", "plist");
		return CMD_WARNING;
	}

	return ipv6_spt_switchover_infinity_plist_magic(self, vty, argc, argv, plist);
}

/* no_pim6_spt_switchover_infinity => "no spt-switchover infinity-and-beyond" */
DEFUN_CMD_FUNC_DECL(no_pim6_spt_switchover_infinity)
#define funcdecl_no_pim6_spt_switchover_infinity static int no_pim6_spt_switchover_infinity_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_no_pim6_spt_switchover_infinity;
DEFUN_CMD_FUNC_TEXT(no_pim6_spt_switchover_infinity)
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

	return no_pim6_spt_switchover_infinity_magic(self, vty, argc, argv);
}

/* no_ipv6_pim_spt_switchover_infinity => "no ipv6 pim spt-switchover infinity-and-beyond" */
DEFUN_CMD_FUNC_DECL(no_ipv6_pim_spt_switchover_infinity)
#define funcdecl_no_ipv6_pim_spt_switchover_infinity static int no_ipv6_pim_spt_switchover_infinity_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_no_ipv6_pim_spt_switchover_infinity;
DEFUN_CMD_FUNC_TEXT(no_ipv6_pim_spt_switchover_infinity)
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

	return no_ipv6_pim_spt_switchover_infinity_magic(self, vty, argc, argv);
}

/* no_pim6_spt_switchover_infinity_plist => "no spt-switchover infinity-and-beyond prefix-list PREFIXLIST6_NAME" */
DEFUN_CMD_FUNC_DECL(no_pim6_spt_switchover_infinity_plist)
#define funcdecl_no_pim6_spt_switchover_infinity_plist static int no_pim6_spt_switchover_infinity_plist_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * prefixlist6_name)
funcdecl_no_pim6_spt_switchover_infinity_plist;
DEFUN_CMD_FUNC_TEXT(no_pim6_spt_switchover_infinity_plist)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *prefixlist6_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "prefixlist6_name")) {
			prefixlist6_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!prefixlist6_name) {
		vty_out(vty, "Internal CLI error [%s]\n", "prefixlist6_name");
		return CMD_WARNING;
	}

	return no_pim6_spt_switchover_infinity_plist_magic(self, vty, argc, argv, prefixlist6_name);
}

/* no_ipv6_pim_spt_switchover_infinity_plist => "no ipv6 pim spt-switchover infinity-and-beyond prefix-list PREFIXLIST6_NAME" */
DEFUN_CMD_FUNC_DECL(no_ipv6_pim_spt_switchover_infinity_plist)
#define funcdecl_no_ipv6_pim_spt_switchover_infinity_plist static int no_ipv6_pim_spt_switchover_infinity_plist_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * prefixlist6_name)
funcdecl_no_ipv6_pim_spt_switchover_infinity_plist;
DEFUN_CMD_FUNC_TEXT(no_ipv6_pim_spt_switchover_infinity_plist)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *prefixlist6_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "prefixlist6_name")) {
			prefixlist6_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!prefixlist6_name) {
		vty_out(vty, "Internal CLI error [%s]\n", "prefixlist6_name");
		return CMD_WARNING;
	}

	return no_ipv6_pim_spt_switchover_infinity_plist_magic(self, vty, argc, argv, prefixlist6_name);
}

/* pim6_packets => "packets (1-255)" */
DEFUN_CMD_FUNC_DECL(pim6_packets)
#define funcdecl_pim6_packets static int pim6_packets_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long packets,\
	const char * packets_str __attribute__ ((unused)))
funcdecl_pim6_packets;
DEFUN_CMD_FUNC_TEXT(pim6_packets)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long packets = 0;
	const char *packets_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "packets")) {
			packets_str = argv[_i]->arg;
			char *_end;
			packets = strtol(argv[_i]->arg, &_end, 10);
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
	if (!packets_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "packets_str");
		return CMD_WARNING;
	}

	return pim6_packets_magic(self, vty, argc, argv, packets, packets_str);
}

/* ipv6_pim_packets => "ipv6 pim packets (1-255)" */
DEFUN_CMD_FUNC_DECL(ipv6_pim_packets)
#define funcdecl_ipv6_pim_packets static int ipv6_pim_packets_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long packets,\
	const char * packets_str __attribute__ ((unused)))
funcdecl_ipv6_pim_packets;
DEFUN_CMD_FUNC_TEXT(ipv6_pim_packets)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long packets = 0;
	const char *packets_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "packets")) {
			packets_str = argv[_i]->arg;
			char *_end;
			packets = strtol(argv[_i]->arg, &_end, 10);
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
	if (!packets_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "packets_str");
		return CMD_WARNING;
	}

	return ipv6_pim_packets_magic(self, vty, argc, argv, packets, packets_str);
}

/* no_pim6_packets => "no packets [(1-255)]" */
DEFUN_CMD_FUNC_DECL(no_pim6_packets)
#define funcdecl_no_pim6_packets static int no_pim6_packets_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long packets,\
	const char * packets_str __attribute__ ((unused)))
funcdecl_no_pim6_packets;
DEFUN_CMD_FUNC_TEXT(no_pim6_packets)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long packets = 0;
	const char *packets_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "packets")) {
			packets_str = argv[_i]->arg;
			char *_end;
			packets = strtol(argv[_i]->arg, &_end, 10);
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

	return no_pim6_packets_magic(self, vty, argc, argv, packets, packets_str);
}

/* no_ipv6_pim_packets => "no ipv6 pim packets [(1-255)]" */
DEFUN_CMD_FUNC_DECL(no_ipv6_pim_packets)
#define funcdecl_no_ipv6_pim_packets static int no_ipv6_pim_packets_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long packets,\
	const char * packets_str __attribute__ ((unused)))
funcdecl_no_ipv6_pim_packets;
DEFUN_CMD_FUNC_TEXT(no_ipv6_pim_packets)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long packets = 0;
	const char *packets_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "packets")) {
			packets_str = argv[_i]->arg;
			char *_end;
			packets = strtol(argv[_i]->arg, &_end, 10);
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

	return no_ipv6_pim_packets_magic(self, vty, argc, argv, packets, packets_str);
}

/* pim6_keep_alive => "keep-alive-timer (1-65535)$kat" */
DEFUN_CMD_FUNC_DECL(pim6_keep_alive)
#define funcdecl_pim6_keep_alive static int pim6_keep_alive_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long kat,\
	const char * kat_str __attribute__ ((unused)))
funcdecl_pim6_keep_alive;
DEFUN_CMD_FUNC_TEXT(pim6_keep_alive)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long kat = 0;
	const char *kat_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "kat")) {
			kat_str = argv[_i]->arg;
			char *_end;
			kat = strtol(argv[_i]->arg, &_end, 10);
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
	if (!kat_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "kat_str");
		return CMD_WARNING;
	}

	return pim6_keep_alive_magic(self, vty, argc, argv, kat, kat_str);
}

/* ipv6_pim_keep_alive => "ipv6 pim keep-alive-timer (1-65535)$kat" */
DEFUN_CMD_FUNC_DECL(ipv6_pim_keep_alive)
#define funcdecl_ipv6_pim_keep_alive static int ipv6_pim_keep_alive_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long kat,\
	const char * kat_str __attribute__ ((unused)))
funcdecl_ipv6_pim_keep_alive;
DEFUN_CMD_FUNC_TEXT(ipv6_pim_keep_alive)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long kat = 0;
	const char *kat_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "kat")) {
			kat_str = argv[_i]->arg;
			char *_end;
			kat = strtol(argv[_i]->arg, &_end, 10);
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
	if (!kat_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "kat_str");
		return CMD_WARNING;
	}

	return ipv6_pim_keep_alive_magic(self, vty, argc, argv, kat, kat_str);
}

/* no_pim6_keep_alive => "no keep-alive-timer [(1-65535)]" */
DEFUN_CMD_FUNC_DECL(no_pim6_keep_alive)
#define funcdecl_no_pim6_keep_alive static int no_pim6_keep_alive_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long keep_alive_timer,\
	const char * keep_alive_timer_str __attribute__ ((unused)))
funcdecl_no_pim6_keep_alive;
DEFUN_CMD_FUNC_TEXT(no_pim6_keep_alive)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long keep_alive_timer = 0;
	const char *keep_alive_timer_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "keep_alive_timer")) {
			keep_alive_timer_str = argv[_i]->arg;
			char *_end;
			keep_alive_timer = strtol(argv[_i]->arg, &_end, 10);
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

	return no_pim6_keep_alive_magic(self, vty, argc, argv, keep_alive_timer, keep_alive_timer_str);
}

/* no_ipv6_pim_keep_alive => "no ipv6 pim keep-alive-timer [(1-65535)]" */
DEFUN_CMD_FUNC_DECL(no_ipv6_pim_keep_alive)
#define funcdecl_no_ipv6_pim_keep_alive static int no_ipv6_pim_keep_alive_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long keep_alive_timer,\
	const char * keep_alive_timer_str __attribute__ ((unused)))
funcdecl_no_ipv6_pim_keep_alive;
DEFUN_CMD_FUNC_TEXT(no_ipv6_pim_keep_alive)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long keep_alive_timer = 0;
	const char *keep_alive_timer_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "keep_alive_timer")) {
			keep_alive_timer_str = argv[_i]->arg;
			char *_end;
			keep_alive_timer = strtol(argv[_i]->arg, &_end, 10);
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

	return no_ipv6_pim_keep_alive_magic(self, vty, argc, argv, keep_alive_timer, keep_alive_timer_str);
}

/* pim6_rp_keep_alive => "rp keep-alive-timer (1-65535)$kat" */
DEFUN_CMD_FUNC_DECL(pim6_rp_keep_alive)
#define funcdecl_pim6_rp_keep_alive static int pim6_rp_keep_alive_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long kat,\
	const char * kat_str __attribute__ ((unused)))
funcdecl_pim6_rp_keep_alive;
DEFUN_CMD_FUNC_TEXT(pim6_rp_keep_alive)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long kat = 0;
	const char *kat_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "kat")) {
			kat_str = argv[_i]->arg;
			char *_end;
			kat = strtol(argv[_i]->arg, &_end, 10);
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
	if (!kat_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "kat_str");
		return CMD_WARNING;
	}

	return pim6_rp_keep_alive_magic(self, vty, argc, argv, kat, kat_str);
}

/* ipv6_pim_rp_keep_alive => "ipv6 pim rp keep-alive-timer (1-65535)$kat" */
DEFUN_CMD_FUNC_DECL(ipv6_pim_rp_keep_alive)
#define funcdecl_ipv6_pim_rp_keep_alive static int ipv6_pim_rp_keep_alive_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long kat,\
	const char * kat_str __attribute__ ((unused)))
funcdecl_ipv6_pim_rp_keep_alive;
DEFUN_CMD_FUNC_TEXT(ipv6_pim_rp_keep_alive)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long kat = 0;
	const char *kat_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "kat")) {
			kat_str = argv[_i]->arg;
			char *_end;
			kat = strtol(argv[_i]->arg, &_end, 10);
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
	if (!kat_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "kat_str");
		return CMD_WARNING;
	}

	return ipv6_pim_rp_keep_alive_magic(self, vty, argc, argv, kat, kat_str);
}

/* no_pim6_rp_keep_alive => "no rp keep-alive-timer [(1-65535)]" */
DEFUN_CMD_FUNC_DECL(no_pim6_rp_keep_alive)
#define funcdecl_no_pim6_rp_keep_alive static int no_pim6_rp_keep_alive_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long keep_alive_timer,\
	const char * keep_alive_timer_str __attribute__ ((unused)))
funcdecl_no_pim6_rp_keep_alive;
DEFUN_CMD_FUNC_TEXT(no_pim6_rp_keep_alive)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long keep_alive_timer = 0;
	const char *keep_alive_timer_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "keep_alive_timer")) {
			keep_alive_timer_str = argv[_i]->arg;
			char *_end;
			keep_alive_timer = strtol(argv[_i]->arg, &_end, 10);
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

	return no_pim6_rp_keep_alive_magic(self, vty, argc, argv, keep_alive_timer, keep_alive_timer_str);
}

/* no_ipv6_pim_rp_keep_alive => "no ipv6 pim rp keep-alive-timer [(1-65535)]" */
DEFUN_CMD_FUNC_DECL(no_ipv6_pim_rp_keep_alive)
#define funcdecl_no_ipv6_pim_rp_keep_alive static int no_ipv6_pim_rp_keep_alive_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long keep_alive_timer,\
	const char * keep_alive_timer_str __attribute__ ((unused)))
funcdecl_no_ipv6_pim_rp_keep_alive;
DEFUN_CMD_FUNC_TEXT(no_ipv6_pim_rp_keep_alive)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long keep_alive_timer = 0;
	const char *keep_alive_timer_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "keep_alive_timer")) {
			keep_alive_timer_str = argv[_i]->arg;
			char *_end;
			keep_alive_timer = strtol(argv[_i]->arg, &_end, 10);
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

	return no_ipv6_pim_rp_keep_alive_magic(self, vty, argc, argv, keep_alive_timer, keep_alive_timer_str);
}

/* pim6_register_suppress => "register-suppress-time (1-65535)$rst" */
DEFUN_CMD_FUNC_DECL(pim6_register_suppress)
#define funcdecl_pim6_register_suppress static int pim6_register_suppress_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long rst,\
	const char * rst_str __attribute__ ((unused)))
funcdecl_pim6_register_suppress;
DEFUN_CMD_FUNC_TEXT(pim6_register_suppress)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long rst = 0;
	const char *rst_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "rst")) {
			rst_str = argv[_i]->arg;
			char *_end;
			rst = strtol(argv[_i]->arg, &_end, 10);
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
	if (!rst_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "rst_str");
		return CMD_WARNING;
	}

	return pim6_register_suppress_magic(self, vty, argc, argv, rst, rst_str);
}

/* ipv6_pim_register_suppress => "ipv6 pim register-suppress-time (1-65535)$rst" */
DEFUN_CMD_FUNC_DECL(ipv6_pim_register_suppress)
#define funcdecl_ipv6_pim_register_suppress static int ipv6_pim_register_suppress_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long rst,\
	const char * rst_str __attribute__ ((unused)))
funcdecl_ipv6_pim_register_suppress;
DEFUN_CMD_FUNC_TEXT(ipv6_pim_register_suppress)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long rst = 0;
	const char *rst_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "rst")) {
			rst_str = argv[_i]->arg;
			char *_end;
			rst = strtol(argv[_i]->arg, &_end, 10);
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
	if (!rst_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "rst_str");
		return CMD_WARNING;
	}

	return ipv6_pim_register_suppress_magic(self, vty, argc, argv, rst, rst_str);
}

/* no_pim6_register_suppress => "no register-suppress-time [(1-65535)]" */
DEFUN_CMD_FUNC_DECL(no_pim6_register_suppress)
#define funcdecl_no_pim6_register_suppress static int no_pim6_register_suppress_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long register_suppress_time,\
	const char * register_suppress_time_str __attribute__ ((unused)))
funcdecl_no_pim6_register_suppress;
DEFUN_CMD_FUNC_TEXT(no_pim6_register_suppress)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long register_suppress_time = 0;
	const char *register_suppress_time_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "register_suppress_time")) {
			register_suppress_time_str = argv[_i]->arg;
			char *_end;
			register_suppress_time = strtol(argv[_i]->arg, &_end, 10);
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

	return no_pim6_register_suppress_magic(self, vty, argc, argv, register_suppress_time, register_suppress_time_str);
}

/* no_ipv6_pim_register_suppress => "no ipv6 pim register-suppress-time [(1-65535)]" */
DEFUN_CMD_FUNC_DECL(no_ipv6_pim_register_suppress)
#define funcdecl_no_ipv6_pim_register_suppress static int no_ipv6_pim_register_suppress_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long register_suppress_time,\
	const char * register_suppress_time_str __attribute__ ((unused)))
funcdecl_no_ipv6_pim_register_suppress;
DEFUN_CMD_FUNC_TEXT(no_ipv6_pim_register_suppress)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long register_suppress_time = 0;
	const char *register_suppress_time_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "register_suppress_time")) {
			register_suppress_time_str = argv[_i]->arg;
			char *_end;
			register_suppress_time = strtol(argv[_i]->arg, &_end, 10);
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

	return no_ipv6_pim_register_suppress_magic(self, vty, argc, argv, register_suppress_time, register_suppress_time_str);
}

/* interface_ipv6_pim => "ipv6 pim [passive$passive]" */
DEFUN_CMD_FUNC_DECL(interface_ipv6_pim)
#define funcdecl_interface_ipv6_pim static int interface_ipv6_pim_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * passive)
funcdecl_interface_ipv6_pim;
DEFUN_CMD_FUNC_TEXT(interface_ipv6_pim)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *passive = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "passive")) {
			passive = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return interface_ipv6_pim_magic(self, vty, argc, argv, passive);
}

/* interface_no_ipv6_pim => "no ipv6 pim [passive$passive]" */
DEFUN_CMD_FUNC_DECL(interface_no_ipv6_pim)
#define funcdecl_interface_no_ipv6_pim static int interface_no_ipv6_pim_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * passive)
funcdecl_interface_no_ipv6_pim;
DEFUN_CMD_FUNC_TEXT(interface_no_ipv6_pim)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *passive = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "passive")) {
			passive = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return interface_no_ipv6_pim_magic(self, vty, argc, argv, passive);
}

/* interface_ipv6_pim_drprio => "ipv6 pim drpriority (0-4294967295)" */
DEFUN_CMD_FUNC_DECL(interface_ipv6_pim_drprio)
#define funcdecl_interface_ipv6_pim_drprio static int interface_ipv6_pim_drprio_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long drpriority,\
	const char * drpriority_str __attribute__ ((unused)))
funcdecl_interface_ipv6_pim_drprio;
DEFUN_CMD_FUNC_TEXT(interface_ipv6_pim_drprio)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long drpriority = 0;
	const char *drpriority_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "drpriority")) {
			drpriority_str = argv[_i]->arg;
			char *_end;
			drpriority = strtol(argv[_i]->arg, &_end, 10);
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
	if (!drpriority_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "drpriority_str");
		return CMD_WARNING;
	}

	return interface_ipv6_pim_drprio_magic(self, vty, argc, argv, drpriority, drpriority_str);
}

/* interface_no_ipv6_pim_drprio => "no ipv6 pim drpriority [(0-4294967295)]" */
DEFUN_CMD_FUNC_DECL(interface_no_ipv6_pim_drprio)
#define funcdecl_interface_no_ipv6_pim_drprio static int interface_no_ipv6_pim_drprio_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long drpriority,\
	const char * drpriority_str __attribute__ ((unused)))
funcdecl_interface_no_ipv6_pim_drprio;
DEFUN_CMD_FUNC_TEXT(interface_no_ipv6_pim_drprio)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long drpriority = 0;
	const char *drpriority_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "drpriority")) {
			drpriority_str = argv[_i]->arg;
			char *_end;
			drpriority = strtol(argv[_i]->arg, &_end, 10);
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

	return interface_no_ipv6_pim_drprio_magic(self, vty, argc, argv, drpriority, drpriority_str);
}

/* interface_ipv6_pim_hello => "ipv6 pim hello (1-65535) [(1-65535)]$hold" */
DEFUN_CMD_FUNC_DECL(interface_ipv6_pim_hello)
#define funcdecl_interface_ipv6_pim_hello static int interface_ipv6_pim_hello_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long hello,\
	const char * hello_str __attribute__ ((unused)),\
	long hold,\
	const char * hold_str __attribute__ ((unused)))
funcdecl_interface_ipv6_pim_hello;
DEFUN_CMD_FUNC_TEXT(interface_ipv6_pim_hello)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long hello = 0;
	const char *hello_str = NULL;
	long hold = 0;
	const char *hold_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "hello")) {
			hello_str = argv[_i]->arg;
			char *_end;
			hello = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "hold")) {
			hold_str = argv[_i]->arg;
			char *_end;
			hold = strtol(argv[_i]->arg, &_end, 10);
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
	if (!hello_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "hello_str");
		return CMD_WARNING;
	}

	return interface_ipv6_pim_hello_magic(self, vty, argc, argv, hello, hello_str, hold, hold_str);
}

/* interface_no_ipv6_pim_hello => "no ipv6 pim hello [(1-65535) [(1-65535)]]" */
DEFUN_CMD_FUNC_DECL(interface_no_ipv6_pim_hello)
#define funcdecl_interface_no_ipv6_pim_hello static int interface_no_ipv6_pim_hello_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long hello,\
	const char * hello_str __attribute__ ((unused)))
funcdecl_interface_no_ipv6_pim_hello;
DEFUN_CMD_FUNC_TEXT(interface_no_ipv6_pim_hello)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long hello = 0;
	const char *hello_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "hello")) {
			hello_str = argv[_i]->arg;
			char *_end;
			hello = strtol(argv[_i]->arg, &_end, 10);
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

	return interface_no_ipv6_pim_hello_magic(self, vty, argc, argv, hello, hello_str);
}

/* interface_ipv6_pim_activeactive => "[no] ipv6 pim active-active" */
DEFUN_CMD_FUNC_DECL(interface_ipv6_pim_activeactive)
#define funcdecl_interface_ipv6_pim_activeactive static int interface_ipv6_pim_activeactive_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_interface_ipv6_pim_activeactive;
DEFUN_CMD_FUNC_TEXT(interface_ipv6_pim_activeactive)
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

	return interface_ipv6_pim_activeactive_magic(self, vty, argc, argv, no);
}

/* interface_ipv6_pim_ssm => "ipv6 pim ssm" */
DEFUN_CMD_FUNC_DECL(interface_ipv6_pim_ssm)
#define funcdecl_interface_ipv6_pim_ssm static int interface_ipv6_pim_ssm_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_interface_ipv6_pim_ssm;
DEFUN_CMD_FUNC_TEXT(interface_ipv6_pim_ssm)
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

	return interface_ipv6_pim_ssm_magic(self, vty, argc, argv);
}

/* interface_no_ipv6_pim_ssm => "no ipv6 pim ssm" */
DEFUN_CMD_FUNC_DECL(interface_no_ipv6_pim_ssm)
#define funcdecl_interface_no_ipv6_pim_ssm static int interface_no_ipv6_pim_ssm_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_interface_no_ipv6_pim_ssm;
DEFUN_CMD_FUNC_TEXT(interface_no_ipv6_pim_ssm)
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

	return interface_no_ipv6_pim_ssm_magic(self, vty, argc, argv);
}

/* interface_ipv6_pim_sm => "ipv6 pim sm" */
DEFUN_CMD_FUNC_DECL(interface_ipv6_pim_sm)
#define funcdecl_interface_ipv6_pim_sm static int interface_ipv6_pim_sm_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_interface_ipv6_pim_sm;
DEFUN_CMD_FUNC_TEXT(interface_ipv6_pim_sm)
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

	return interface_ipv6_pim_sm_magic(self, vty, argc, argv);
}

/* interface_no_ipv6_pim_sm => "no ipv6 pim sm" */
DEFUN_CMD_FUNC_DECL(interface_no_ipv6_pim_sm)
#define funcdecl_interface_no_ipv6_pim_sm static int interface_no_ipv6_pim_sm_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_interface_no_ipv6_pim_sm;
DEFUN_CMD_FUNC_TEXT(interface_no_ipv6_pim_sm)
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

	return interface_no_ipv6_pim_sm_magic(self, vty, argc, argv);
}

/* interface_ipv6_pim_boundary_oil => "ipv6 multicast boundary oil WORD" */
DEFUN_CMD_FUNC_DECL(interface_ipv6_pim_boundary_oil)
#define funcdecl_interface_ipv6_pim_boundary_oil static int interface_ipv6_pim_boundary_oil_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * oil)
funcdecl_interface_ipv6_pim_boundary_oil;
DEFUN_CMD_FUNC_TEXT(interface_ipv6_pim_boundary_oil)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *oil = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "oil")) {
			oil = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!oil) {
		vty_out(vty, "Internal CLI error [%s]\n", "oil");
		return CMD_WARNING;
	}

	return interface_ipv6_pim_boundary_oil_magic(self, vty, argc, argv, oil);
}

/* interface_no_ipv6_pim_boundary_oil => "no ipv6 multicast boundary oil [WORD]" */
DEFUN_CMD_FUNC_DECL(interface_no_ipv6_pim_boundary_oil)
#define funcdecl_interface_no_ipv6_pim_boundary_oil static int interface_no_ipv6_pim_boundary_oil_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * oil)
funcdecl_interface_no_ipv6_pim_boundary_oil;
DEFUN_CMD_FUNC_TEXT(interface_no_ipv6_pim_boundary_oil)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *oil = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "oil")) {
			oil = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return interface_no_ipv6_pim_boundary_oil_magic(self, vty, argc, argv, oil);
}

/* interface_ipv6_mroute => "ipv6 mroute INTERFACE X:X::X:X$group [X:X::X:X]$source" */
DEFUN_CMD_FUNC_DECL(interface_ipv6_mroute)
#define funcdecl_interface_ipv6_mroute static int interface_ipv6_mroute_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * interface,\
	struct in6_addr group,\
	const char * group_str __attribute__ ((unused)),\
	struct in6_addr source,\
	const char * source_str __attribute__ ((unused)))
funcdecl_interface_ipv6_mroute;
DEFUN_CMD_FUNC_TEXT(interface_ipv6_mroute)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *interface = NULL;
	struct in6_addr group = {};
	const char *group_str = NULL;
	struct in6_addr source = {};
	const char *source_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "interface")) {
			interface = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "group")) {
			group_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &group);
		}
		if (!strcmp(argv[_i]->varname, "source")) {
			source_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &source);
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
	if (!interface) {
		vty_out(vty, "Internal CLI error [%s]\n", "interface");
		return CMD_WARNING;
	}
	if (!group_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "group_str");
		return CMD_WARNING;
	}

	return interface_ipv6_mroute_magic(self, vty, argc, argv, interface, group, group_str, source, source_str);
}

/* interface_no_ipv6_mroute => "no ipv6 mroute INTERFACE X:X::X:X$group [X:X::X:X]$source" */
DEFUN_CMD_FUNC_DECL(interface_no_ipv6_mroute)
#define funcdecl_interface_no_ipv6_mroute static int interface_no_ipv6_mroute_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * interface,\
	struct in6_addr group,\
	const char * group_str __attribute__ ((unused)),\
	struct in6_addr source,\
	const char * source_str __attribute__ ((unused)))
funcdecl_interface_no_ipv6_mroute;
DEFUN_CMD_FUNC_TEXT(interface_no_ipv6_mroute)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *interface = NULL;
	struct in6_addr group = {};
	const char *group_str = NULL;
	struct in6_addr source = {};
	const char *source_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "interface")) {
			interface = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "group")) {
			group_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &group);
		}
		if (!strcmp(argv[_i]->varname, "source")) {
			source_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &source);
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
	if (!interface) {
		vty_out(vty, "Internal CLI error [%s]\n", "interface");
		return CMD_WARNING;
	}
	if (!group_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "group_str");
		return CMD_WARNING;
	}

	return interface_no_ipv6_mroute_magic(self, vty, argc, argv, interface, group, group_str, source, source_str);
}

/* pim6_rp => "rp X:X::X:X$rp [X:X::X:X/M]$gp" */
DEFUN_CMD_FUNC_DECL(pim6_rp)
#define funcdecl_pim6_rp static int pim6_rp_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in6_addr rp,\
	const char * rp_str __attribute__ ((unused)),\
	const struct prefix_ipv6 * gp,\
	const char * gp_str __attribute__ ((unused)))
funcdecl_pim6_rp;
DEFUN_CMD_FUNC_TEXT(pim6_rp)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in6_addr rp = {};
	const char *rp_str = NULL;
	struct prefix_ipv6 gp = { };
	const char *gp_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "rp")) {
			rp_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &rp);
		}
		if (!strcmp(argv[_i]->varname, "gp")) {
			gp_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &gp);
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
	if (!rp_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "rp_str");
		return CMD_WARNING;
	}

	return pim6_rp_magic(self, vty, argc, argv, rp, rp_str, &gp, gp_str);
}

/* ipv6_pim_rp => "ipv6 pim rp X:X::X:X$rp [X:X::X:X/M]$gp" */
DEFUN_CMD_FUNC_DECL(ipv6_pim_rp)
#define funcdecl_ipv6_pim_rp static int ipv6_pim_rp_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in6_addr rp,\
	const char * rp_str __attribute__ ((unused)),\
	const struct prefix_ipv6 * gp,\
	const char * gp_str __attribute__ ((unused)))
funcdecl_ipv6_pim_rp;
DEFUN_CMD_FUNC_TEXT(ipv6_pim_rp)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in6_addr rp = {};
	const char *rp_str = NULL;
	struct prefix_ipv6 gp = { };
	const char *gp_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "rp")) {
			rp_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &rp);
		}
		if (!strcmp(argv[_i]->varname, "gp")) {
			gp_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &gp);
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
	if (!rp_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "rp_str");
		return CMD_WARNING;
	}

	return ipv6_pim_rp_magic(self, vty, argc, argv, rp, rp_str, &gp, gp_str);
}

/* no_pim6_rp => "no rp X:X::X:X$rp [X:X::X:X/M]$gp" */
DEFUN_CMD_FUNC_DECL(no_pim6_rp)
#define funcdecl_no_pim6_rp static int no_pim6_rp_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in6_addr rp,\
	const char * rp_str __attribute__ ((unused)),\
	const struct prefix_ipv6 * gp,\
	const char * gp_str __attribute__ ((unused)))
funcdecl_no_pim6_rp;
DEFUN_CMD_FUNC_TEXT(no_pim6_rp)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in6_addr rp = {};
	const char *rp_str = NULL;
	struct prefix_ipv6 gp = { };
	const char *gp_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "rp")) {
			rp_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &rp);
		}
		if (!strcmp(argv[_i]->varname, "gp")) {
			gp_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &gp);
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
	if (!rp_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "rp_str");
		return CMD_WARNING;
	}

	return no_pim6_rp_magic(self, vty, argc, argv, rp, rp_str, &gp, gp_str);
}

/* no_ipv6_pim_rp => "no ipv6 pim rp X:X::X:X$rp [X:X::X:X/M]$gp" */
DEFUN_CMD_FUNC_DECL(no_ipv6_pim_rp)
#define funcdecl_no_ipv6_pim_rp static int no_ipv6_pim_rp_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in6_addr rp,\
	const char * rp_str __attribute__ ((unused)),\
	const struct prefix_ipv6 * gp,\
	const char * gp_str __attribute__ ((unused)))
funcdecl_no_ipv6_pim_rp;
DEFUN_CMD_FUNC_TEXT(no_ipv6_pim_rp)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in6_addr rp = {};
	const char *rp_str = NULL;
	struct prefix_ipv6 gp = { };
	const char *gp_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "rp")) {
			rp_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &rp);
		}
		if (!strcmp(argv[_i]->varname, "gp")) {
			gp_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &gp);
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
	if (!rp_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "rp_str");
		return CMD_WARNING;
	}

	return no_ipv6_pim_rp_magic(self, vty, argc, argv, rp, rp_str, &gp, gp_str);
}

/* pim6_rp_prefix_list => "rp X:X::X:X$rp prefix-list PREFIXLIST6_NAME$plist" */
DEFUN_CMD_FUNC_DECL(pim6_rp_prefix_list)
#define funcdecl_pim6_rp_prefix_list static int pim6_rp_prefix_list_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in6_addr rp,\
	const char * rp_str __attribute__ ((unused)),\
	const char * plist)
funcdecl_pim6_rp_prefix_list;
DEFUN_CMD_FUNC_TEXT(pim6_rp_prefix_list)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in6_addr rp = {};
	const char *rp_str = NULL;
	const char *plist = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "rp")) {
			rp_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &rp);
		}
		if (!strcmp(argv[_i]->varname, "plist")) {
			plist = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!rp_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "rp_str");
		return CMD_WARNING;
	}
	if (!plist) {
		vty_out(vty, "Internal CLI error [%s]\n", "plist");
		return CMD_WARNING;
	}

	return pim6_rp_prefix_list_magic(self, vty, argc, argv, rp, rp_str, plist);
}

/* ipv6_pim_rp_prefix_list => "ipv6 pim rp X:X::X:X$rp prefix-list PREFIXLIST6_NAME$plist" */
DEFUN_CMD_FUNC_DECL(ipv6_pim_rp_prefix_list)
#define funcdecl_ipv6_pim_rp_prefix_list static int ipv6_pim_rp_prefix_list_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in6_addr rp,\
	const char * rp_str __attribute__ ((unused)),\
	const char * plist)
funcdecl_ipv6_pim_rp_prefix_list;
DEFUN_CMD_FUNC_TEXT(ipv6_pim_rp_prefix_list)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in6_addr rp = {};
	const char *rp_str = NULL;
	const char *plist = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "rp")) {
			rp_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &rp);
		}
		if (!strcmp(argv[_i]->varname, "plist")) {
			plist = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!rp_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "rp_str");
		return CMD_WARNING;
	}
	if (!plist) {
		vty_out(vty, "Internal CLI error [%s]\n", "plist");
		return CMD_WARNING;
	}

	return ipv6_pim_rp_prefix_list_magic(self, vty, argc, argv, rp, rp_str, plist);
}

/* no_pim6_rp_prefix_list => "no rp X:X::X:X$rp prefix-list PREFIXLIST6_NAME$plist" */
DEFUN_CMD_FUNC_DECL(no_pim6_rp_prefix_list)
#define funcdecl_no_pim6_rp_prefix_list static int no_pim6_rp_prefix_list_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in6_addr rp,\
	const char * rp_str __attribute__ ((unused)),\
	const char * plist)
funcdecl_no_pim6_rp_prefix_list;
DEFUN_CMD_FUNC_TEXT(no_pim6_rp_prefix_list)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in6_addr rp = {};
	const char *rp_str = NULL;
	const char *plist = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "rp")) {
			rp_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &rp);
		}
		if (!strcmp(argv[_i]->varname, "plist")) {
			plist = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!rp_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "rp_str");
		return CMD_WARNING;
	}
	if (!plist) {
		vty_out(vty, "Internal CLI error [%s]\n", "plist");
		return CMD_WARNING;
	}

	return no_pim6_rp_prefix_list_magic(self, vty, argc, argv, rp, rp_str, plist);
}

/* no_ipv6_pim_rp_prefix_list => "no ipv6 pim rp X:X::X:X$rp prefix-list PREFIXLIST6_NAME$plist" */
DEFUN_CMD_FUNC_DECL(no_ipv6_pim_rp_prefix_list)
#define funcdecl_no_ipv6_pim_rp_prefix_list static int no_ipv6_pim_rp_prefix_list_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in6_addr rp,\
	const char * rp_str __attribute__ ((unused)),\
	const char * plist)
funcdecl_no_ipv6_pim_rp_prefix_list;
DEFUN_CMD_FUNC_TEXT(no_ipv6_pim_rp_prefix_list)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in6_addr rp = {};
	const char *rp_str = NULL;
	const char *plist = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "rp")) {
			rp_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &rp);
		}
		if (!strcmp(argv[_i]->varname, "plist")) {
			plist = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!rp_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "rp_str");
		return CMD_WARNING;
	}
	if (!plist) {
		vty_out(vty, "Internal CLI error [%s]\n", "plist");
		return CMD_WARNING;
	}

	return no_ipv6_pim_rp_prefix_list_magic(self, vty, argc, argv, rp, rp_str, plist);
}

/* pim6_embedded_rp => "[no] embedded-rp" */
DEFUN_CMD_FUNC_DECL(pim6_embedded_rp)
#define funcdecl_pim6_embedded_rp static int pim6_embedded_rp_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_pim6_embedded_rp;
DEFUN_CMD_FUNC_TEXT(pim6_embedded_rp)
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

	return pim6_embedded_rp_magic(self, vty, argc, argv, no);
}

/* pim6_embedded_rp_group_list => "[no] embedded-rp group-list ![WORD$prefix_list]" */
DEFUN_CMD_FUNC_DECL(pim6_embedded_rp_group_list)
#define funcdecl_pim6_embedded_rp_group_list static int pim6_embedded_rp_group_list_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * prefix_list)
funcdecl_pim6_embedded_rp_group_list;
DEFUN_CMD_FUNC_TEXT(pim6_embedded_rp_group_list)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *prefix_list = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "prefix_list")) {
			prefix_list = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return pim6_embedded_rp_group_list_magic(self, vty, argc, argv, no, prefix_list);
}

/* pim6_embedded_rp_limit => "[no] embedded-rp limit ![(1-4294967295)$limit]" */
DEFUN_CMD_FUNC_DECL(pim6_embedded_rp_limit)
#define funcdecl_pim6_embedded_rp_limit static int pim6_embedded_rp_limit_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long limit,\
	const char * limit_str __attribute__ ((unused)))
funcdecl_pim6_embedded_rp_limit;
DEFUN_CMD_FUNC_TEXT(pim6_embedded_rp_limit)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long limit = 0;
	const char *limit_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "limit")) {
			limit_str = argv[_i]->arg;
			char *_end;
			limit = strtol(argv[_i]->arg, &_end, 10);
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

	return pim6_embedded_rp_limit_magic(self, vty, argc, argv, no, limit, limit_str);
}

/* ipv6_pim_bsm => "ipv6 pim bsm" */
DEFUN_CMD_FUNC_DECL(ipv6_pim_bsm)
#define funcdecl_ipv6_pim_bsm static int ipv6_pim_bsm_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_ipv6_pim_bsm;
DEFUN_CMD_FUNC_TEXT(ipv6_pim_bsm)
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

	return ipv6_pim_bsm_magic(self, vty, argc, argv);
}

/* no_ipv6_pim_bsm => "no ipv6 pim bsm" */
DEFUN_CMD_FUNC_DECL(no_ipv6_pim_bsm)
#define funcdecl_no_ipv6_pim_bsm static int no_ipv6_pim_bsm_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_no_ipv6_pim_bsm;
DEFUN_CMD_FUNC_TEXT(no_ipv6_pim_bsm)
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

	return no_ipv6_pim_bsm_magic(self, vty, argc, argv);
}

/* ipv6_pim_ucast_bsm => "ipv6 pim unicast-bsm" */
DEFUN_CMD_FUNC_DECL(ipv6_pim_ucast_bsm)
#define funcdecl_ipv6_pim_ucast_bsm static int ipv6_pim_ucast_bsm_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_ipv6_pim_ucast_bsm;
DEFUN_CMD_FUNC_TEXT(ipv6_pim_ucast_bsm)
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

	return ipv6_pim_ucast_bsm_magic(self, vty, argc, argv);
}

/* no_ipv6_pim_ucast_bsm => "no ipv6 pim unicast-bsm" */
DEFUN_CMD_FUNC_DECL(no_ipv6_pim_ucast_bsm)
#define funcdecl_no_ipv6_pim_ucast_bsm static int no_ipv6_pim_ucast_bsm_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_no_ipv6_pim_ucast_bsm;
DEFUN_CMD_FUNC_TEXT(no_ipv6_pim_ucast_bsm)
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

	return no_ipv6_pim_ucast_bsm_magic(self, vty, argc, argv);
}

/* pim6_bsr_candidate_bsr => "[no] bsr candidate-bsr [{priority (0-255)|source <address X:X::X:X|interface IFNAME|loopback$loopback|any$any>}]" */
DEFUN_CMD_FUNC_DECL(pim6_bsr_candidate_bsr)
#define funcdecl_pim6_bsr_candidate_bsr static int pim6_bsr_candidate_bsr_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long priority,\
	const char * priority_str __attribute__ ((unused)),\
	struct in6_addr address,\
	const char * address_str __attribute__ ((unused)),\
	const char * ifname,\
	const char * loopback,\
	const char * any)
funcdecl_pim6_bsr_candidate_bsr;
DEFUN_CMD_FUNC_TEXT(pim6_bsr_candidate_bsr)
{
#if 6 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long priority = 0;
	const char *priority_str = NULL;
	struct in6_addr address = {};
	const char *address_str = NULL;
	const char *ifname = NULL;
	const char *loopback = NULL;
	const char *any = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "priority")) {
			priority_str = argv[_i]->arg;
			char *_end;
			priority = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "address")) {
			address_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &address);
		}
		if (!strcmp(argv[_i]->varname, "ifname")) {
			ifname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "loopback")) {
			loopback = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "any")) {
			any = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return pim6_bsr_candidate_bsr_magic(self, vty, argc, argv, no, priority, priority_str, address, address_str, ifname, loopback, any);
}

/* pim6_bsr_candidate_rp => "[no] bsr candidate-rp [{priority (0-255)|interval (1-4294967295)|source <address X:X::X:X|interface IFNAME|loopback$loopback|any$any>}]" */
DEFUN_CMD_FUNC_DECL(pim6_bsr_candidate_rp)
#define funcdecl_pim6_bsr_candidate_rp static int pim6_bsr_candidate_rp_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long priority,\
	const char * priority_str __attribute__ ((unused)),\
	long interval,\
	const char * interval_str __attribute__ ((unused)),\
	struct in6_addr address,\
	const char * address_str __attribute__ ((unused)),\
	const char * ifname,\
	const char * loopback,\
	const char * any)
funcdecl_pim6_bsr_candidate_rp;
DEFUN_CMD_FUNC_TEXT(pim6_bsr_candidate_rp)
{
#if 7 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long priority = 0;
	const char *priority_str = NULL;
	long interval = 0;
	const char *interval_str = NULL;
	struct in6_addr address = {};
	const char *address_str = NULL;
	const char *ifname = NULL;
	const char *loopback = NULL;
	const char *any = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "priority")) {
			priority_str = argv[_i]->arg;
			char *_end;
			priority = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "interval")) {
			interval_str = argv[_i]->arg;
			char *_end;
			interval = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "address")) {
			address_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &address);
		}
		if (!strcmp(argv[_i]->varname, "ifname")) {
			ifname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "loopback")) {
			loopback = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "any")) {
			any = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return pim6_bsr_candidate_rp_magic(self, vty, argc, argv, no, priority, priority_str, interval, interval_str, address, address_str, ifname, loopback, any);
}

/* pim6_bsr_candidate_rp_group => "[no] bsr candidate-rp group X:X::X:X/M" */
DEFUN_CMD_FUNC_DECL(pim6_bsr_candidate_rp_group)
#define funcdecl_pim6_bsr_candidate_rp_group static int pim6_bsr_candidate_rp_group_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const struct prefix_ipv6 * group,\
	const char * group_str __attribute__ ((unused)))
funcdecl_pim6_bsr_candidate_rp_group;
DEFUN_CMD_FUNC_TEXT(pim6_bsr_candidate_rp_group)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct prefix_ipv6 group = { };
	const char *group_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "group")) {
			group_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &group);
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
	if (!group_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "group_str");
		return CMD_WARNING;
	}

	return pim6_bsr_candidate_rp_group_magic(self, vty, argc, argv, no, &group, group_str);
}

/* pim6_ssmpingd => "ssmpingd [X:X::X:X]$source" */
DEFUN_CMD_FUNC_DECL(pim6_ssmpingd)
#define funcdecl_pim6_ssmpingd static int pim6_ssmpingd_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in6_addr source,\
	const char * source_str __attribute__ ((unused)))
funcdecl_pim6_ssmpingd;
DEFUN_CMD_FUNC_TEXT(pim6_ssmpingd)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in6_addr source = {};
	const char *source_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "source")) {
			source_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &source);
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

	return pim6_ssmpingd_magic(self, vty, argc, argv, source, source_str);
}

/* ipv6_ssmpingd => "ipv6 ssmpingd [X:X::X:X]$source" */
DEFUN_CMD_FUNC_DECL(ipv6_ssmpingd)
#define funcdecl_ipv6_ssmpingd static int ipv6_ssmpingd_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in6_addr source,\
	const char * source_str __attribute__ ((unused)))
funcdecl_ipv6_ssmpingd;
DEFUN_CMD_FUNC_TEXT(ipv6_ssmpingd)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in6_addr source = {};
	const char *source_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "source")) {
			source_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &source);
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

	return ipv6_ssmpingd_magic(self, vty, argc, argv, source, source_str);
}

/* no_pim6_ssmpingd => "no ssmpingd [X:X::X:X]$source" */
DEFUN_CMD_FUNC_DECL(no_pim6_ssmpingd)
#define funcdecl_no_pim6_ssmpingd static int no_pim6_ssmpingd_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in6_addr source,\
	const char * source_str __attribute__ ((unused)))
funcdecl_no_pim6_ssmpingd;
DEFUN_CMD_FUNC_TEXT(no_pim6_ssmpingd)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in6_addr source = {};
	const char *source_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "source")) {
			source_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &source);
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

	return no_pim6_ssmpingd_magic(self, vty, argc, argv, source, source_str);
}

/* no_ipv6_ssmpingd => "no ipv6 ssmpingd [X:X::X:X]$source" */
DEFUN_CMD_FUNC_DECL(no_ipv6_ssmpingd)
#define funcdecl_no_ipv6_ssmpingd static int no_ipv6_ssmpingd_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in6_addr source,\
	const char * source_str __attribute__ ((unused)))
funcdecl_no_ipv6_ssmpingd;
DEFUN_CMD_FUNC_TEXT(no_ipv6_ssmpingd)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in6_addr source = {};
	const char *source_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "source")) {
			source_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &source);
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

	return no_ipv6_ssmpingd_magic(self, vty, argc, argv, source, source_str);
}

/* interface_ipv6_mld_join => "[no] ipv6 mld join X:X::X:X$grp [X:X::X:X]$src" */
DEFUN_CMD_FUNC_DECL(interface_ipv6_mld_join)
#define funcdecl_interface_ipv6_mld_join static int interface_ipv6_mld_join_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	struct in6_addr grp,\
	const char * grp_str __attribute__ ((unused)),\
	struct in6_addr src,\
	const char * src_str __attribute__ ((unused)))
funcdecl_interface_ipv6_mld_join;
DEFUN_CMD_FUNC_TEXT(interface_ipv6_mld_join)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct in6_addr grp = {};
	const char *grp_str = NULL;
	struct in6_addr src = {};
	const char *src_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "grp")) {
			grp_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &grp);
		}
		if (!strcmp(argv[_i]->varname, "src")) {
			src_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &src);
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
	if (!grp_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "grp_str");
		return CMD_WARNING;
	}

	return interface_ipv6_mld_join_magic(self, vty, argc, argv, no, grp, grp_str, src, src_str);
}

/* interface_ipv6_mld_static_group => "[no] ipv6 mld static-group X:X::X:X$grp [X:X::X:X]$src" */
DEFUN_CMD_FUNC_DECL(interface_ipv6_mld_static_group)
#define funcdecl_interface_ipv6_mld_static_group static int interface_ipv6_mld_static_group_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	struct in6_addr grp,\
	const char * grp_str __attribute__ ((unused)),\
	struct in6_addr src,\
	const char * src_str __attribute__ ((unused)))
funcdecl_interface_ipv6_mld_static_group;
DEFUN_CMD_FUNC_TEXT(interface_ipv6_mld_static_group)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct in6_addr grp = {};
	const char *grp_str = NULL;
	struct in6_addr src = {};
	const char *src_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "grp")) {
			grp_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &grp);
		}
		if (!strcmp(argv[_i]->varname, "src")) {
			src_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &src);
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
	if (!grp_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "grp_str");
		return CMD_WARNING;
	}

	return interface_ipv6_mld_static_group_magic(self, vty, argc, argv, no, grp, grp_str, src, src_str);
}

/* interface_no_ipv6_mld_static_group => "no ipv6 mld static-group X:X::X:X$group [X:X::X:X$source]" */
DEFUN_CMD_FUNC_DECL(interface_no_ipv6_mld_static_group)
#define funcdecl_interface_no_ipv6_mld_static_group static int interface_no_ipv6_mld_static_group_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in6_addr group,\
	const char * group_str __attribute__ ((unused)),\
	struct in6_addr source,\
	const char * source_str __attribute__ ((unused)))
funcdecl_interface_no_ipv6_mld_static_group;
DEFUN_CMD_FUNC_TEXT(interface_no_ipv6_mld_static_group)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in6_addr group = {};
	const char *group_str = NULL;
	struct in6_addr source = {};
	const char *source_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "group")) {
			group_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &group);
		}
		if (!strcmp(argv[_i]->varname, "source")) {
			source_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &source);
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
	if (!group_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "group_str");
		return CMD_WARNING;
	}

	return interface_no_ipv6_mld_static_group_magic(self, vty, argc, argv, group, group_str, source, source_str);
}

/* interface_ipv6_mld => "ipv6 mld" */
DEFUN_CMD_FUNC_DECL(interface_ipv6_mld)
#define funcdecl_interface_ipv6_mld static int interface_ipv6_mld_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_interface_ipv6_mld;
DEFUN_CMD_FUNC_TEXT(interface_ipv6_mld)
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

	return interface_ipv6_mld_magic(self, vty, argc, argv);
}

/* interface_no_ipv6_mld => "no ipv6 mld" */
DEFUN_CMD_FUNC_DECL(interface_no_ipv6_mld)
#define funcdecl_interface_no_ipv6_mld static int interface_no_ipv6_mld_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_interface_no_ipv6_mld;
DEFUN_CMD_FUNC_TEXT(interface_no_ipv6_mld)
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

	return interface_no_ipv6_mld_magic(self, vty, argc, argv);
}

/* interface_ipv6_mld_version => "ipv6 mld version (1-2)$version" */
DEFUN_CMD_FUNC_DECL(interface_ipv6_mld_version)
#define funcdecl_interface_ipv6_mld_version static int interface_ipv6_mld_version_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long version,\
	const char * version_str __attribute__ ((unused)))
funcdecl_interface_ipv6_mld_version;
DEFUN_CMD_FUNC_TEXT(interface_ipv6_mld_version)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long version = 0;
	const char *version_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "version")) {
			version_str = argv[_i]->arg;
			char *_end;
			version = strtol(argv[_i]->arg, &_end, 10);
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
	if (!version_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "version_str");
		return CMD_WARNING;
	}

	return interface_ipv6_mld_version_magic(self, vty, argc, argv, version, version_str);
}

/* interface_no_ipv6_mld_version => "no ipv6 mld version [(1-2)]" */
DEFUN_CMD_FUNC_DECL(interface_no_ipv6_mld_version)
#define funcdecl_interface_no_ipv6_mld_version static int interface_no_ipv6_mld_version_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long version,\
	const char * version_str __attribute__ ((unused)))
funcdecl_interface_no_ipv6_mld_version;
DEFUN_CMD_FUNC_TEXT(interface_no_ipv6_mld_version)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long version = 0;
	const char *version_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "version")) {
			version_str = argv[_i]->arg;
			char *_end;
			version = strtol(argv[_i]->arg, &_end, 10);
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

	return interface_no_ipv6_mld_version_magic(self, vty, argc, argv, version, version_str);
}

/* interface_ipv6_mld_query_interval => "ipv6 mld query-interval (1-65535)$q_interval" */
DEFUN_CMD_FUNC_DECL(interface_ipv6_mld_query_interval)
#define funcdecl_interface_ipv6_mld_query_interval static int interface_ipv6_mld_query_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long q_interval,\
	const char * q_interval_str __attribute__ ((unused)))
funcdecl_interface_ipv6_mld_query_interval;
DEFUN_CMD_FUNC_TEXT(interface_ipv6_mld_query_interval)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long q_interval = 0;
	const char *q_interval_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "q_interval")) {
			q_interval_str = argv[_i]->arg;
			char *_end;
			q_interval = strtol(argv[_i]->arg, &_end, 10);
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
	if (!q_interval_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "q_interval_str");
		return CMD_WARNING;
	}

	return interface_ipv6_mld_query_interval_magic(self, vty, argc, argv, q_interval, q_interval_str);
}

/* interface_no_ipv6_mld_query_interval => "no ipv6 mld query-interval [(1-65535)]" */
DEFUN_CMD_FUNC_DECL(interface_no_ipv6_mld_query_interval)
#define funcdecl_interface_no_ipv6_mld_query_interval static int interface_no_ipv6_mld_query_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long query_interval,\
	const char * query_interval_str __attribute__ ((unused)))
funcdecl_interface_no_ipv6_mld_query_interval;
DEFUN_CMD_FUNC_TEXT(interface_no_ipv6_mld_query_interval)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long query_interval = 0;
	const char *query_interval_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "query_interval")) {
			query_interval_str = argv[_i]->arg;
			char *_end;
			query_interval = strtol(argv[_i]->arg, &_end, 10);
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

	return interface_no_ipv6_mld_query_interval_magic(self, vty, argc, argv, query_interval, query_interval_str);
}

/* ipv6_mld_group_watermark => "ipv6 mld watermark-warn (1-65535)$limit" */
DEFUN_CMD_FUNC_DECL(ipv6_mld_group_watermark)
#define funcdecl_ipv6_mld_group_watermark static int ipv6_mld_group_watermark_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long limit,\
	const char * limit_str __attribute__ ((unused)))
funcdecl_ipv6_mld_group_watermark;
DEFUN_CMD_FUNC_TEXT(ipv6_mld_group_watermark)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long limit = 0;
	const char *limit_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "limit")) {
			limit_str = argv[_i]->arg;
			char *_end;
			limit = strtol(argv[_i]->arg, &_end, 10);
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
	if (!limit_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "limit_str");
		return CMD_WARNING;
	}

	return ipv6_mld_group_watermark_magic(self, vty, argc, argv, limit, limit_str);
}

/* no_ipv6_mld_group_watermark => "no ipv6 mld watermark-warn [(1-65535)$limit]" */
DEFUN_CMD_FUNC_DECL(no_ipv6_mld_group_watermark)
#define funcdecl_no_ipv6_mld_group_watermark static int no_ipv6_mld_group_watermark_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long limit,\
	const char * limit_str __attribute__ ((unused)))
funcdecl_no_ipv6_mld_group_watermark;
DEFUN_CMD_FUNC_TEXT(no_ipv6_mld_group_watermark)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long limit = 0;
	const char *limit_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "limit")) {
			limit_str = argv[_i]->arg;
			char *_end;
			limit = strtol(argv[_i]->arg, &_end, 10);
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

	return no_ipv6_mld_group_watermark_magic(self, vty, argc, argv, limit, limit_str);
}

/* interface_ipv6_mld_query_max_response_time => "ipv6 mld query-max-response-time (1-65535)$qmrt" */
DEFUN_CMD_FUNC_DECL(interface_ipv6_mld_query_max_response_time)
#define funcdecl_interface_ipv6_mld_query_max_response_time static int interface_ipv6_mld_query_max_response_time_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long qmrt,\
	const char * qmrt_str __attribute__ ((unused)))
funcdecl_interface_ipv6_mld_query_max_response_time;
DEFUN_CMD_FUNC_TEXT(interface_ipv6_mld_query_max_response_time)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long qmrt = 0;
	const char *qmrt_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "qmrt")) {
			qmrt_str = argv[_i]->arg;
			char *_end;
			qmrt = strtol(argv[_i]->arg, &_end, 10);
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
	if (!qmrt_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "qmrt_str");
		return CMD_WARNING;
	}

	return interface_ipv6_mld_query_max_response_time_magic(self, vty, argc, argv, qmrt, qmrt_str);
}

/* interface_no_ipv6_mld_query_max_response_time => "no ipv6 mld query-max-response-time [(1-65535)]" */
DEFUN_CMD_FUNC_DECL(interface_no_ipv6_mld_query_max_response_time)
#define funcdecl_interface_no_ipv6_mld_query_max_response_time static int interface_no_ipv6_mld_query_max_response_time_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long query_max_response_time,\
	const char * query_max_response_time_str __attribute__ ((unused)))
funcdecl_interface_no_ipv6_mld_query_max_response_time;
DEFUN_CMD_FUNC_TEXT(interface_no_ipv6_mld_query_max_response_time)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long query_max_response_time = 0;
	const char *query_max_response_time_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "query_max_response_time")) {
			query_max_response_time_str = argv[_i]->arg;
			char *_end;
			query_max_response_time = strtol(argv[_i]->arg, &_end, 10);
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

	return interface_no_ipv6_mld_query_max_response_time_magic(self, vty, argc, argv, query_max_response_time, query_max_response_time_str);
}

/* interface_ipv6_mld_last_member_query_count => "ipv6 mld last-member-query-count (1-255)$lmqc" */
DEFUN_CMD_FUNC_DECL(interface_ipv6_mld_last_member_query_count)
#define funcdecl_interface_ipv6_mld_last_member_query_count static int interface_ipv6_mld_last_member_query_count_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long lmqc,\
	const char * lmqc_str __attribute__ ((unused)))
funcdecl_interface_ipv6_mld_last_member_query_count;
DEFUN_CMD_FUNC_TEXT(interface_ipv6_mld_last_member_query_count)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long lmqc = 0;
	const char *lmqc_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "lmqc")) {
			lmqc_str = argv[_i]->arg;
			char *_end;
			lmqc = strtol(argv[_i]->arg, &_end, 10);
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
	if (!lmqc_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "lmqc_str");
		return CMD_WARNING;
	}

	return interface_ipv6_mld_last_member_query_count_magic(self, vty, argc, argv, lmqc, lmqc_str);
}

/* interface_no_ipv6_mld_last_member_query_count => "no ipv6 mld last-member-query-count [(1-255)]" */
DEFUN_CMD_FUNC_DECL(interface_no_ipv6_mld_last_member_query_count)
#define funcdecl_interface_no_ipv6_mld_last_member_query_count static int interface_no_ipv6_mld_last_member_query_count_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long last_member_query_count,\
	const char * last_member_query_count_str __attribute__ ((unused)))
funcdecl_interface_no_ipv6_mld_last_member_query_count;
DEFUN_CMD_FUNC_TEXT(interface_no_ipv6_mld_last_member_query_count)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long last_member_query_count = 0;
	const char *last_member_query_count_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "last_member_query_count")) {
			last_member_query_count_str = argv[_i]->arg;
			char *_end;
			last_member_query_count = strtol(argv[_i]->arg, &_end, 10);
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

	return interface_no_ipv6_mld_last_member_query_count_magic(self, vty, argc, argv, last_member_query_count, last_member_query_count_str);
}

/* interface_ipv6_mld_last_member_query_interval => "ipv6 mld last-member-query-interval (1-65535)$lmqi" */
DEFUN_CMD_FUNC_DECL(interface_ipv6_mld_last_member_query_interval)
#define funcdecl_interface_ipv6_mld_last_member_query_interval static int interface_ipv6_mld_last_member_query_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long lmqi,\
	const char * lmqi_str __attribute__ ((unused)))
funcdecl_interface_ipv6_mld_last_member_query_interval;
DEFUN_CMD_FUNC_TEXT(interface_ipv6_mld_last_member_query_interval)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long lmqi = 0;
	const char *lmqi_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "lmqi")) {
			lmqi_str = argv[_i]->arg;
			char *_end;
			lmqi = strtol(argv[_i]->arg, &_end, 10);
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
	if (!lmqi_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "lmqi_str");
		return CMD_WARNING;
	}

	return interface_ipv6_mld_last_member_query_interval_magic(self, vty, argc, argv, lmqi, lmqi_str);
}

/* interface_no_ipv6_mld_last_member_query_interval => "no ipv6 mld last-member-query-interval [(1-65535)]" */
DEFUN_CMD_FUNC_DECL(interface_no_ipv6_mld_last_member_query_interval)
#define funcdecl_interface_no_ipv6_mld_last_member_query_interval static int interface_no_ipv6_mld_last_member_query_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long last_member_query_interval,\
	const char * last_member_query_interval_str __attribute__ ((unused)))
funcdecl_interface_no_ipv6_mld_last_member_query_interval;
DEFUN_CMD_FUNC_TEXT(interface_no_ipv6_mld_last_member_query_interval)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long last_member_query_interval = 0;
	const char *last_member_query_interval_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "last_member_query_interval")) {
			last_member_query_interval_str = argv[_i]->arg;
			char *_end;
			last_member_query_interval = strtol(argv[_i]->arg, &_end, 10);
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

	return interface_no_ipv6_mld_last_member_query_interval_magic(self, vty, argc, argv, last_member_query_interval, last_member_query_interval_str);
}

/* show_ipv6_pim_rp => "show ipv6 pim [vrf NAME] rp-info [X:X::X:X/M$group] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_rp)
#define funcdecl_show_ipv6_pim_rp static int show_ipv6_pim_rp_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const struct prefix_ipv6 * group,\
	const char * group_str __attribute__ ((unused)),\
	const char * json)
funcdecl_show_ipv6_pim_rp;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_rp)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	struct prefix_ipv6 group = { };
	const char *group_str = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "group")) {
			group_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &group);
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_rp_magic(self, vty, argc, argv, vrf, &group, group_str, json);
}

/* show_ipv6_pim_rp_vrf_all => "show ipv6 pim vrf all rp-info [X:X::X:X/M$group] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_rp_vrf_all)
#define funcdecl_show_ipv6_pim_rp_vrf_all static int show_ipv6_pim_rp_vrf_all_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const struct prefix_ipv6 * group,\
	const char * group_str __attribute__ ((unused)),\
	const char * json)
funcdecl_show_ipv6_pim_rp_vrf_all;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_rp_vrf_all)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct prefix_ipv6 group = { };
	const char *group_str = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "group")) {
			group_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &group);
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_rp_vrf_all_magic(self, vty, argc, argv, &group, group_str, json);
}

/* show_ipv6_pim_rpf => "show ipv6 pim [vrf NAME] rpf [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_rpf)
#define funcdecl_show_ipv6_pim_rpf static int show_ipv6_pim_rpf_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * json)
funcdecl_show_ipv6_pim_rpf;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_rpf)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_rpf_magic(self, vty, argc, argv, vrf, json);
}

/* show_ipv6_pim_rpf_vrf_all => "show ipv6 pim vrf all rpf [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_rpf_vrf_all)
#define funcdecl_show_ipv6_pim_rpf_vrf_all static int show_ipv6_pim_rpf_vrf_all_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * json)
funcdecl_show_ipv6_pim_rpf_vrf_all;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_rpf_vrf_all)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_rpf_vrf_all_magic(self, vty, argc, argv, json);
}

/* show_ipv6_pim_secondary => "show ipv6 pim [vrf NAME] secondary" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_secondary)
#define funcdecl_show_ipv6_pim_secondary static int show_ipv6_pim_secondary_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf)
funcdecl_show_ipv6_pim_secondary;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_secondary)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_secondary_magic(self, vty, argc, argv, vrf);
}

/* show_ipv6_pim_bsr_cand_bsr => "show ipv6 pim bsr candidate-bsr [vrf NAME$vrfname] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_bsr_cand_bsr)
#define funcdecl_show_ipv6_pim_bsr_cand_bsr static int show_ipv6_pim_bsr_cand_bsr_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrfname,\
	const char * json)
funcdecl_show_ipv6_pim_bsr_cand_bsr;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_bsr_cand_bsr)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrfname = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrfname")) {
			vrfname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_bsr_cand_bsr_magic(self, vty, argc, argv, vrfname, json);
}

/* show_ipv6_pim_bsr_cand_rp => "show ipv6 pim bsr candidate-rp [vrf VRF_NAME] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_bsr_cand_rp)
#define funcdecl_show_ipv6_pim_bsr_cand_rp static int show_ipv6_pim_bsr_cand_rp_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_name,\
	const char * json)
funcdecl_show_ipv6_pim_bsr_cand_rp;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_bsr_cand_rp)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf_name = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf_name")) {
			vrf_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_bsr_cand_rp_magic(self, vty, argc, argv, vrf_name, json);
}

/* show_ipv6_pim_bsr_rpdb => "show ipv6 pim bsr candidate-rp-database [vrf VRF_NAME] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_bsr_rpdb)
#define funcdecl_show_ipv6_pim_bsr_rpdb static int show_ipv6_pim_bsr_rpdb_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_name,\
	const char * json)
funcdecl_show_ipv6_pim_bsr_rpdb;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_bsr_rpdb)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf_name = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf_name")) {
			vrf_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_bsr_rpdb_magic(self, vty, argc, argv, vrf_name, json);
}

/* show_ipv6_pim_bsr_groups => "show ipv6 pim bsr groups [vrf VRF_NAME] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_bsr_groups)
#define funcdecl_show_ipv6_pim_bsr_groups static int show_ipv6_pim_bsr_groups_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_name,\
	const char * json)
funcdecl_show_ipv6_pim_bsr_groups;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_bsr_groups)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf_name = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf_name")) {
			vrf_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_bsr_groups_magic(self, vty, argc, argv, vrf_name, json);
}

/* show_ipv6_pim_statistics => "show ipv6 pim [vrf NAME] statistics [interface WORD$word] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_statistics)
#define funcdecl_show_ipv6_pim_statistics static int show_ipv6_pim_statistics_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * word,\
	const char * json)
funcdecl_show_ipv6_pim_statistics;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_statistics)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *word = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "word")) {
			word = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_statistics_magic(self, vty, argc, argv, vrf, word, json);
}

/* show_ipv6_pim_upstream => "show ipv6 pim [vrf NAME] upstream [X:X::X:X$s_or_g [X:X::X:X$g]] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_upstream)
#define funcdecl_show_ipv6_pim_upstream static int show_ipv6_pim_upstream_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	struct in6_addr s_or_g,\
	const char * s_or_g_str __attribute__ ((unused)),\
	struct in6_addr g,\
	const char * g_str __attribute__ ((unused)),\
	const char * json)
funcdecl_show_ipv6_pim_upstream;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_upstream)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	struct in6_addr s_or_g = {};
	const char *s_or_g_str = NULL;
	struct in6_addr g = {};
	const char *g_str = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "s_or_g")) {
			s_or_g_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s_or_g);
		}
		if (!strcmp(argv[_i]->varname, "g")) {
			g_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &g);
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_upstream_magic(self, vty, argc, argv, vrf, s_or_g, s_or_g_str, g, g_str, json);
}

/* show_ipv6_pim_upstream_vrf_all => "show ipv6 pim vrf all upstream [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_upstream_vrf_all)
#define funcdecl_show_ipv6_pim_upstream_vrf_all static int show_ipv6_pim_upstream_vrf_all_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * json)
funcdecl_show_ipv6_pim_upstream_vrf_all;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_upstream_vrf_all)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_upstream_vrf_all_magic(self, vty, argc, argv, json);
}

/* show_ipv6_pim_upstream_join_desired => "show ipv6 pim [vrf NAME] upstream-join-desired [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_upstream_join_desired)
#define funcdecl_show_ipv6_pim_upstream_join_desired static int show_ipv6_pim_upstream_join_desired_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * json)
funcdecl_show_ipv6_pim_upstream_join_desired;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_upstream_join_desired)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_upstream_join_desired_magic(self, vty, argc, argv, vrf, json);
}

/* show_ipv6_pim_upstream_rpf => "show ipv6 pim [vrf NAME] upstream-rpf [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_upstream_rpf)
#define funcdecl_show_ipv6_pim_upstream_rpf static int show_ipv6_pim_upstream_rpf_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * json)
funcdecl_show_ipv6_pim_upstream_rpf;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_upstream_rpf)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_upstream_rpf_magic(self, vty, argc, argv, vrf, json);
}

/* show_ipv6_pim_state => "show ipv6 pim [vrf NAME] state [X:X::X:X$s_or_g [X:X::X:X$g]] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_state)
#define funcdecl_show_ipv6_pim_state static int show_ipv6_pim_state_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	struct in6_addr s_or_g,\
	const char * s_or_g_str __attribute__ ((unused)),\
	struct in6_addr g,\
	const char * g_str __attribute__ ((unused)),\
	const char * json)
funcdecl_show_ipv6_pim_state;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_state)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	struct in6_addr s_or_g = {};
	const char *s_or_g_str = NULL;
	struct in6_addr g = {};
	const char *g_str = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "s_or_g")) {
			s_or_g_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s_or_g);
		}
		if (!strcmp(argv[_i]->varname, "g")) {
			g_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &g);
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_state_magic(self, vty, argc, argv, vrf, s_or_g, s_or_g_str, g, g_str, json);
}

/* show_ipv6_pim_state_vrf_all => "show ipv6 pim vrf all state [X:X::X:X$s_or_g [X:X::X:X$g]] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_state_vrf_all)
#define funcdecl_show_ipv6_pim_state_vrf_all static int show_ipv6_pim_state_vrf_all_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in6_addr s_or_g,\
	const char * s_or_g_str __attribute__ ((unused)),\
	struct in6_addr g,\
	const char * g_str __attribute__ ((unused)),\
	const char * json)
funcdecl_show_ipv6_pim_state_vrf_all;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_state_vrf_all)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in6_addr s_or_g = {};
	const char *s_or_g_str = NULL;
	struct in6_addr g = {};
	const char *g_str = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "s_or_g")) {
			s_or_g_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s_or_g);
		}
		if (!strcmp(argv[_i]->varname, "g")) {
			g_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &g);
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_state_vrf_all_magic(self, vty, argc, argv, s_or_g, s_or_g_str, g, g_str, json);
}

/* show_ipv6_pim_channel => "show ipv6 pim [vrf NAME] channel [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_channel)
#define funcdecl_show_ipv6_pim_channel static int show_ipv6_pim_channel_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * json)
funcdecl_show_ipv6_pim_channel;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_channel)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_channel_magic(self, vty, argc, argv, vrf, json);
}

/* show_ipv6_pim_interface => "show ipv6 pim [vrf NAME] interface [detail|WORD]$interface [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_interface)
#define funcdecl_show_ipv6_pim_interface static int show_ipv6_pim_interface_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * interface,\
	const char * json)
funcdecl_show_ipv6_pim_interface;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_interface)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *interface = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "interface")) {
			interface = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_interface_magic(self, vty, argc, argv, vrf, interface, json);
}

/* show_ipv6_pim_interface_vrf_all => "show ipv6 pim vrf all interface [detail|WORD]$interface [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_interface_vrf_all)
#define funcdecl_show_ipv6_pim_interface_vrf_all static int show_ipv6_pim_interface_vrf_all_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * interface,\
	const char * json)
funcdecl_show_ipv6_pim_interface_vrf_all;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_interface_vrf_all)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *interface = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "interface")) {
			interface = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_interface_vrf_all_magic(self, vty, argc, argv, interface, json);
}

/* show_ipv6_pim_join => "show ipv6 pim [vrf NAME] join [X:X::X:X$s_or_g [X:X::X:X$g]] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_join)
#define funcdecl_show_ipv6_pim_join static int show_ipv6_pim_join_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	struct in6_addr s_or_g,\
	const char * s_or_g_str __attribute__ ((unused)),\
	struct in6_addr g,\
	const char * g_str __attribute__ ((unused)),\
	const char * json)
funcdecl_show_ipv6_pim_join;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_join)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	struct in6_addr s_or_g = {};
	const char *s_or_g_str = NULL;
	struct in6_addr g = {};
	const char *g_str = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "s_or_g")) {
			s_or_g_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s_or_g);
		}
		if (!strcmp(argv[_i]->varname, "g")) {
			g_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &g);
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_join_magic(self, vty, argc, argv, vrf, s_or_g, s_or_g_str, g, g_str, json);
}

/* show_ipv6_pim_join_vrf_all => "show ipv6 pim vrf all join [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_join_vrf_all)
#define funcdecl_show_ipv6_pim_join_vrf_all static int show_ipv6_pim_join_vrf_all_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * json)
funcdecl_show_ipv6_pim_join_vrf_all;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_join_vrf_all)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_join_vrf_all_magic(self, vty, argc, argv, json);
}

/* show_ipv6_pim_jp_agg => "show ipv6 pim [vrf NAME] jp-agg" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_jp_agg)
#define funcdecl_show_ipv6_pim_jp_agg static int show_ipv6_pim_jp_agg_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf)
funcdecl_show_ipv6_pim_jp_agg;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_jp_agg)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_jp_agg_magic(self, vty, argc, argv, vrf);
}

/* show_ipv6_pim_local_membership => "show ipv6 pim [vrf NAME] local-membership [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_local_membership)
#define funcdecl_show_ipv6_pim_local_membership static int show_ipv6_pim_local_membership_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * json)
funcdecl_show_ipv6_pim_local_membership;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_local_membership)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_local_membership_magic(self, vty, argc, argv, vrf, json);
}

/* show_ipv6_pim_neighbor => "show ipv6 pim [vrf NAME] neighbor [detail|WORD]$interface [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_neighbor)
#define funcdecl_show_ipv6_pim_neighbor static int show_ipv6_pim_neighbor_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * interface,\
	const char * json)
funcdecl_show_ipv6_pim_neighbor;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_neighbor)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *interface = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "interface")) {
			interface = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_neighbor_magic(self, vty, argc, argv, vrf, interface, json);
}

/* show_ipv6_pim_neighbor_vrf_all => "show ipv6 pim vrf all neighbor [detail|WORD]$interface [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_neighbor_vrf_all)
#define funcdecl_show_ipv6_pim_neighbor_vrf_all static int show_ipv6_pim_neighbor_vrf_all_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * interface,\
	const char * json)
funcdecl_show_ipv6_pim_neighbor_vrf_all;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_neighbor_vrf_all)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *interface = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "interface")) {
			interface = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_neighbor_vrf_all_magic(self, vty, argc, argv, interface, json);
}

/* show_ipv6_pim_nexthop => "show ipv6 pim [vrf NAME] nexthop [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_nexthop)
#define funcdecl_show_ipv6_pim_nexthop static int show_ipv6_pim_nexthop_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * json)
funcdecl_show_ipv6_pim_nexthop;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_nexthop)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_nexthop_magic(self, vty, argc, argv, vrf, json);
}

/* show_ipv6_pim_nexthop_lookup => "show ipv6 pim [vrf NAME] nexthop-lookup X:X::X:X$source X:X::X:X$group" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_nexthop_lookup)
#define funcdecl_show_ipv6_pim_nexthop_lookup static int show_ipv6_pim_nexthop_lookup_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	struct in6_addr source,\
	const char * source_str __attribute__ ((unused)),\
	struct in6_addr group,\
	const char * group_str __attribute__ ((unused)))
funcdecl_show_ipv6_pim_nexthop_lookup;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_nexthop_lookup)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	struct in6_addr source = {};
	const char *source_str = NULL;
	struct in6_addr group = {};
	const char *group_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "source")) {
			source_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &source);
		}
		if (!strcmp(argv[_i]->varname, "group")) {
			group_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &group);
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
	if (!source_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "source_str");
		return CMD_WARNING;
	}
	if (!group_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "group_str");
		return CMD_WARNING;
	}

	return show_ipv6_pim_nexthop_lookup_magic(self, vty, argc, argv, vrf, source, source_str, group, group_str);
}

/* show_ipv6_multicast => "show ipv6 multicast [vrf NAME]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_multicast)
#define funcdecl_show_ipv6_multicast static int show_ipv6_multicast_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf)
funcdecl_show_ipv6_multicast;
DEFUN_CMD_FUNC_TEXT(show_ipv6_multicast)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_multicast_magic(self, vty, argc, argv, vrf);
}

/* show_ipv6_multicast_vrf_all => "show ipv6 multicast vrf all" */
DEFUN_CMD_FUNC_DECL(show_ipv6_multicast_vrf_all)
#define funcdecl_show_ipv6_multicast_vrf_all static int show_ipv6_multicast_vrf_all_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_show_ipv6_multicast_vrf_all;
DEFUN_CMD_FUNC_TEXT(show_ipv6_multicast_vrf_all)
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

	return show_ipv6_multicast_vrf_all_magic(self, vty, argc, argv);
}

/* show_ipv6_multicast_count => "show ipv6 multicast count [vrf NAME] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_multicast_count)
#define funcdecl_show_ipv6_multicast_count static int show_ipv6_multicast_count_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * json)
funcdecl_show_ipv6_multicast_count;
DEFUN_CMD_FUNC_TEXT(show_ipv6_multicast_count)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_multicast_count_magic(self, vty, argc, argv, vrf, json);
}

/* show_ipv6_multicast_count_vrf_all => "show ipv6 multicast count vrf all [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_multicast_count_vrf_all)
#define funcdecl_show_ipv6_multicast_count_vrf_all static int show_ipv6_multicast_count_vrf_all_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * json)
funcdecl_show_ipv6_multicast_count_vrf_all;
DEFUN_CMD_FUNC_TEXT(show_ipv6_multicast_count_vrf_all)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_multicast_count_vrf_all_magic(self, vty, argc, argv, json);
}

/* show_ipv6_mroute => "show ipv6 mroute [vrf NAME] [X:X::X:X$s_or_g [X:X::X:X$g]] [fill$fill] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_mroute)
#define funcdecl_show_ipv6_mroute static int show_ipv6_mroute_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	struct in6_addr s_or_g,\
	const char * s_or_g_str __attribute__ ((unused)),\
	struct in6_addr g,\
	const char * g_str __attribute__ ((unused)),\
	const char * fill,\
	const char * json)
funcdecl_show_ipv6_mroute;
DEFUN_CMD_FUNC_TEXT(show_ipv6_mroute)
{
#if 5 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	struct in6_addr s_or_g = {};
	const char *s_or_g_str = NULL;
	struct in6_addr g = {};
	const char *g_str = NULL;
	const char *fill = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "s_or_g")) {
			s_or_g_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s_or_g);
		}
		if (!strcmp(argv[_i]->varname, "g")) {
			g_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &g);
		}
		if (!strcmp(argv[_i]->varname, "fill")) {
			fill = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_mroute_magic(self, vty, argc, argv, vrf, s_or_g, s_or_g_str, g, g_str, fill, json);
}

/* show_ipv6_mroute_vrf_all => "show ipv6 mroute vrf all [fill$fill] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_mroute_vrf_all)
#define funcdecl_show_ipv6_mroute_vrf_all static int show_ipv6_mroute_vrf_all_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * fill,\
	const char * json)
funcdecl_show_ipv6_mroute_vrf_all;
DEFUN_CMD_FUNC_TEXT(show_ipv6_mroute_vrf_all)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *fill = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "fill")) {
			fill = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_mroute_vrf_all_magic(self, vty, argc, argv, fill, json);
}

/* show_ipv6_mroute_count => "show ipv6 mroute [vrf NAME] count [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_mroute_count)
#define funcdecl_show_ipv6_mroute_count static int show_ipv6_mroute_count_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * json)
funcdecl_show_ipv6_mroute_count;
DEFUN_CMD_FUNC_TEXT(show_ipv6_mroute_count)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_mroute_count_magic(self, vty, argc, argv, vrf, json);
}

/* show_ipv6_mroute_count_vrf_all => "show ipv6 mroute vrf all count [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_mroute_count_vrf_all)
#define funcdecl_show_ipv6_mroute_count_vrf_all static int show_ipv6_mroute_count_vrf_all_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * json)
funcdecl_show_ipv6_mroute_count_vrf_all;
DEFUN_CMD_FUNC_TEXT(show_ipv6_mroute_count_vrf_all)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_mroute_count_vrf_all_magic(self, vty, argc, argv, json);
}

/* show_ipv6_mroute_summary => "show ipv6 mroute [vrf NAME] summary [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_mroute_summary)
#define funcdecl_show_ipv6_mroute_summary static int show_ipv6_mroute_summary_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * json)
funcdecl_show_ipv6_mroute_summary;
DEFUN_CMD_FUNC_TEXT(show_ipv6_mroute_summary)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_mroute_summary_magic(self, vty, argc, argv, vrf, json);
}

/* show_ipv6_mroute_summary_vrf_all => "show ipv6 mroute vrf all summary [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_mroute_summary_vrf_all)
#define funcdecl_show_ipv6_mroute_summary_vrf_all static int show_ipv6_mroute_summary_vrf_all_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * json)
funcdecl_show_ipv6_mroute_summary_vrf_all;
DEFUN_CMD_FUNC_TEXT(show_ipv6_mroute_summary_vrf_all)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_mroute_summary_vrf_all_magic(self, vty, argc, argv, json);
}

/* show_ipv6_pim_interface_traffic => "show ipv6 pim [vrf NAME] interface traffic [WORD$if_name] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_interface_traffic)
#define funcdecl_show_ipv6_pim_interface_traffic static int show_ipv6_pim_interface_traffic_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * if_name,\
	const char * json)
funcdecl_show_ipv6_pim_interface_traffic;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_interface_traffic)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *if_name = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "if_name")) {
			if_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_interface_traffic_magic(self, vty, argc, argv, vrf, if_name, json);
}

/* show_ipv6_pim_bsr => "show ipv6 pim bsr [vrf NAME] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_bsr)
#define funcdecl_show_ipv6_pim_bsr static int show_ipv6_pim_bsr_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * json)
funcdecl_show_ipv6_pim_bsr;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_bsr)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_bsr_magic(self, vty, argc, argv, vrf, json);
}

/* show_ipv6_pim_bsm_db => "show ipv6 pim bsm-database [vrf NAME] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_bsm_db)
#define funcdecl_show_ipv6_pim_bsm_db static int show_ipv6_pim_bsm_db_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * json)
funcdecl_show_ipv6_pim_bsm_db;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_bsm_db)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_bsm_db_magic(self, vty, argc, argv, vrf, json);
}

/* show_ipv6_pim_bsrp => "show ipv6 pim bsrp-info [vrf NAME] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_pim_bsrp)
#define funcdecl_show_ipv6_pim_bsrp static int show_ipv6_pim_bsrp_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * json)
funcdecl_show_ipv6_pim_bsrp;
DEFUN_CMD_FUNC_TEXT(show_ipv6_pim_bsrp)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_pim_bsrp_magic(self, vty, argc, argv, vrf, json);
}

/* clear_ipv6_pim_statistics => "clear ipv6 pim statistics [vrf NAME]$name" */
DEFUN_CMD_FUNC_DECL(clear_ipv6_pim_statistics)
#define funcdecl_clear_ipv6_pim_statistics static int clear_ipv6_pim_statistics_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name)
funcdecl_clear_ipv6_pim_statistics;
DEFUN_CMD_FUNC_TEXT(clear_ipv6_pim_statistics)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "name")) {
			name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return clear_ipv6_pim_statistics_magic(self, vty, argc, argv, name);
}

/* clear_ipv6_pim_interface_traffic => "clear ipv6 pim [vrf NAME] interface traffic" */
DEFUN_CMD_FUNC_DECL(clear_ipv6_pim_interface_traffic)
#define funcdecl_clear_ipv6_pim_interface_traffic static int clear_ipv6_pim_interface_traffic_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf)
funcdecl_clear_ipv6_pim_interface_traffic;
DEFUN_CMD_FUNC_TEXT(clear_ipv6_pim_interface_traffic)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return clear_ipv6_pim_interface_traffic_magic(self, vty, argc, argv, vrf);
}

/* clear_ipv6_mroute => "clear ipv6 mroute [vrf NAME]$name" */
DEFUN_CMD_FUNC_DECL(clear_ipv6_mroute)
#define funcdecl_clear_ipv6_mroute static int clear_ipv6_mroute_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name)
funcdecl_clear_ipv6_mroute;
DEFUN_CMD_FUNC_TEXT(clear_ipv6_mroute)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "name")) {
			name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return clear_ipv6_mroute_magic(self, vty, argc, argv, name);
}

/* clear_ipv6_pim_oil => "clear ipv6 pim [vrf NAME]$name oil" */
DEFUN_CMD_FUNC_DECL(clear_ipv6_pim_oil)
#define funcdecl_clear_ipv6_pim_oil static int clear_ipv6_pim_oil_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name)
funcdecl_clear_ipv6_pim_oil;
DEFUN_CMD_FUNC_TEXT(clear_ipv6_pim_oil)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "name")) {
			name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return clear_ipv6_pim_oil_magic(self, vty, argc, argv, name);
}

/* clear_ipv6_mroute_count => "clear ipv6 mroute [vrf NAME]$name count" */
DEFUN_CMD_FUNC_DECL(clear_ipv6_mroute_count)
#define funcdecl_clear_ipv6_mroute_count static int clear_ipv6_mroute_count_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name)
funcdecl_clear_ipv6_mroute_count;
DEFUN_CMD_FUNC_TEXT(clear_ipv6_mroute_count)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "name")) {
			name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return clear_ipv6_mroute_count_magic(self, vty, argc, argv, name);
}

/* clear_ipv6_pim_interfaces => "clear ipv6 pim [vrf NAME] interfaces" */
DEFUN_CMD_FUNC_DECL(clear_ipv6_pim_interfaces)
#define funcdecl_clear_ipv6_pim_interfaces static int clear_ipv6_pim_interfaces_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf)
funcdecl_clear_ipv6_pim_interfaces;
DEFUN_CMD_FUNC_TEXT(clear_ipv6_pim_interfaces)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return clear_ipv6_pim_interfaces_magic(self, vty, argc, argv, vrf);
}

/* clear_ipv6_pim_bsr_db => "clear ipv6 pim [vrf NAME] bsr-data" */
DEFUN_CMD_FUNC_DECL(clear_ipv6_pim_bsr_db)
#define funcdecl_clear_ipv6_pim_bsr_db static int clear_ipv6_pim_bsr_db_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf)
funcdecl_clear_ipv6_pim_bsr_db;
DEFUN_CMD_FUNC_TEXT(clear_ipv6_pim_bsr_db)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return clear_ipv6_pim_bsr_db_magic(self, vty, argc, argv, vrf);
}

/* debug_pimv6 => "[no] debug pimv6" */
DEFUN_CMD_FUNC_DECL(debug_pimv6)
#define funcdecl_debug_pimv6 static int debug_pimv6_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_pimv6;
DEFUN_CMD_FUNC_TEXT(debug_pimv6)
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

	return debug_pimv6_magic(self, vty, argc, argv, no);
}

/* debug_pimv6_nht => "[no] debug pimv6 nht" */
DEFUN_CMD_FUNC_DECL(debug_pimv6_nht)
#define funcdecl_debug_pimv6_nht static int debug_pimv6_nht_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_pimv6_nht;
DEFUN_CMD_FUNC_TEXT(debug_pimv6_nht)
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

	return debug_pimv6_nht_magic(self, vty, argc, argv, no);
}

/* debug_pimv6_nht_det => "[no] debug pimv6 nht detail" */
DEFUN_CMD_FUNC_DECL(debug_pimv6_nht_det)
#define funcdecl_debug_pimv6_nht_det static int debug_pimv6_nht_det_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_pimv6_nht_det;
DEFUN_CMD_FUNC_TEXT(debug_pimv6_nht_det)
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

	return debug_pimv6_nht_det_magic(self, vty, argc, argv, no);
}

/* debug_pimv6_events => "[no] debug pimv6 events" */
DEFUN_CMD_FUNC_DECL(debug_pimv6_events)
#define funcdecl_debug_pimv6_events static int debug_pimv6_events_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_pimv6_events;
DEFUN_CMD_FUNC_TEXT(debug_pimv6_events)
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

	return debug_pimv6_events_magic(self, vty, argc, argv, no);
}

/* debug_pimv6_packets => "[no] debug pimv6 packets [<hello$hello|joins$joins|register$registers>]" */
DEFUN_CMD_FUNC_DECL(debug_pimv6_packets)
#define funcdecl_debug_pimv6_packets static int debug_pimv6_packets_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * hello,\
	const char * joins,\
	const char * registers)
funcdecl_debug_pimv6_packets;
DEFUN_CMD_FUNC_TEXT(debug_pimv6_packets)
{
#if 4 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *hello = NULL;
	const char *joins = NULL;
	const char *registers = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "hello")) {
			hello = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "joins")) {
			joins = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "registers")) {
			registers = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return debug_pimv6_packets_magic(self, vty, argc, argv, no, hello, joins, registers);
}

/* debug_pimv6_packetdump_send => "[no] debug pimv6 packet-dump send" */
DEFUN_CMD_FUNC_DECL(debug_pimv6_packetdump_send)
#define funcdecl_debug_pimv6_packetdump_send static int debug_pimv6_packetdump_send_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_pimv6_packetdump_send;
DEFUN_CMD_FUNC_TEXT(debug_pimv6_packetdump_send)
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

	return debug_pimv6_packetdump_send_magic(self, vty, argc, argv, no);
}

/* debug_pimv6_packetdump_recv => "[no] debug pimv6 packet-dump receive" */
DEFUN_CMD_FUNC_DECL(debug_pimv6_packetdump_recv)
#define funcdecl_debug_pimv6_packetdump_recv static int debug_pimv6_packetdump_recv_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_pimv6_packetdump_recv;
DEFUN_CMD_FUNC_TEXT(debug_pimv6_packetdump_recv)
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

	return debug_pimv6_packetdump_recv_magic(self, vty, argc, argv, no);
}

/* debug_pimv6_trace => "[no] debug pimv6 trace" */
DEFUN_CMD_FUNC_DECL(debug_pimv6_trace)
#define funcdecl_debug_pimv6_trace static int debug_pimv6_trace_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_pimv6_trace;
DEFUN_CMD_FUNC_TEXT(debug_pimv6_trace)
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

	return debug_pimv6_trace_magic(self, vty, argc, argv, no);
}

/* debug_pimv6_trace_detail => "[no] debug pimv6 trace detail" */
DEFUN_CMD_FUNC_DECL(debug_pimv6_trace_detail)
#define funcdecl_debug_pimv6_trace_detail static int debug_pimv6_trace_detail_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_pimv6_trace_detail;
DEFUN_CMD_FUNC_TEXT(debug_pimv6_trace_detail)
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

	return debug_pimv6_trace_detail_magic(self, vty, argc, argv, no);
}

/* debug_pimv6_zebra => "[no] debug pimv6 zebra" */
DEFUN_CMD_FUNC_DECL(debug_pimv6_zebra)
#define funcdecl_debug_pimv6_zebra static int debug_pimv6_zebra_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_pimv6_zebra;
DEFUN_CMD_FUNC_TEXT(debug_pimv6_zebra)
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

	return debug_pimv6_zebra_magic(self, vty, argc, argv, no);
}

/* debug_mroute6 => "[no] debug mroute6" */
DEFUN_CMD_FUNC_DECL(debug_mroute6)
#define funcdecl_debug_mroute6 static int debug_mroute6_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_mroute6;
DEFUN_CMD_FUNC_TEXT(debug_mroute6)
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

	return debug_mroute6_magic(self, vty, argc, argv, no);
}

/* debug_mroute6_detail => "[no] debug mroute6 detail" */
DEFUN_CMD_FUNC_DECL(debug_mroute6_detail)
#define funcdecl_debug_mroute6_detail static int debug_mroute6_detail_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_mroute6_detail;
DEFUN_CMD_FUNC_TEXT(debug_mroute6_detail)
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

	return debug_mroute6_detail_magic(self, vty, argc, argv, no);
}

/* debug_mld => "[no] debug mld" */
DEFUN_CMD_FUNC_DECL(debug_mld)
#define funcdecl_debug_mld static int debug_mld_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_mld;
DEFUN_CMD_FUNC_TEXT(debug_mld)
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

	return debug_mld_magic(self, vty, argc, argv, no);
}

/* debug_mld_events => "[no] debug mld events" */
DEFUN_CMD_FUNC_DECL(debug_mld_events)
#define funcdecl_debug_mld_events static int debug_mld_events_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_mld_events;
DEFUN_CMD_FUNC_TEXT(debug_mld_events)
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

	return debug_mld_events_magic(self, vty, argc, argv, no);
}

/* debug_mld_packets => "[no] debug mld packets" */
DEFUN_CMD_FUNC_DECL(debug_mld_packets)
#define funcdecl_debug_mld_packets static int debug_mld_packets_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_mld_packets;
DEFUN_CMD_FUNC_TEXT(debug_mld_packets)
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

	return debug_mld_packets_magic(self, vty, argc, argv, no);
}

/* debug_mld_trace => "[no] debug mld trace" */
DEFUN_CMD_FUNC_DECL(debug_mld_trace)
#define funcdecl_debug_mld_trace static int debug_mld_trace_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_mld_trace;
DEFUN_CMD_FUNC_TEXT(debug_mld_trace)
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

	return debug_mld_trace_magic(self, vty, argc, argv, no);
}

/* debug_mld_trace_detail => "[no] debug mld trace detail" */
DEFUN_CMD_FUNC_DECL(debug_mld_trace_detail)
#define funcdecl_debug_mld_trace_detail static int debug_mld_trace_detail_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_mld_trace_detail;
DEFUN_CMD_FUNC_TEXT(debug_mld_trace_detail)
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

	return debug_mld_trace_detail_magic(self, vty, argc, argv, no);
}

/* debug_pimv6_bsm => "[no] debug pimv6 bsm" */
DEFUN_CMD_FUNC_DECL(debug_pimv6_bsm)
#define funcdecl_debug_pimv6_bsm static int debug_pimv6_bsm_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_pimv6_bsm;
DEFUN_CMD_FUNC_TEXT(debug_pimv6_bsm)
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

	return debug_pimv6_bsm_magic(self, vty, argc, argv, no);
}

