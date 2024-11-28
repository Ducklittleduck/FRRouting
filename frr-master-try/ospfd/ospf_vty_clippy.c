/* ospf_router_id => "ospf router-id A.B.C.D" */
DEFUN_CMD_FUNC_DECL(ospf_router_id)
#define funcdecl_ospf_router_id static int ospf_router_id_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in_addr router_id,\
	const char * router_id_str __attribute__ ((unused)))
funcdecl_ospf_router_id;
DEFUN_CMD_FUNC_TEXT(ospf_router_id)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in_addr router_id = { INADDR_ANY };
	const char *router_id_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "router_id")) {
			router_id_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &router_id);
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
	if (!router_id_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "router_id_str");
		return CMD_WARNING;
	}

	return ospf_router_id_magic(self, vty, argc, argv, router_id, router_id_str);
}

/* no_ospf_router_id => "no ospf router-id [A.B.C.D]" */
DEFUN_CMD_FUNC_DECL(no_ospf_router_id)
#define funcdecl_no_ospf_router_id static int no_ospf_router_id_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in_addr router_id,\
	const char * router_id_str __attribute__ ((unused)))
funcdecl_no_ospf_router_id;
DEFUN_CMD_FUNC_TEXT(no_ospf_router_id)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in_addr router_id = { INADDR_ANY };
	const char *router_id_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "router_id")) {
			router_id_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &router_id);
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

	return no_ospf_router_id_magic(self, vty, argc, argv, router_id, router_id_str);
}

/* ospf_area_nssa => "area <A.B.C.D|(0-4294967295)>$area_str nssa         [{	   <translate-candidate|translate-never|translate-always>$translator_role	   |default-information-originate$dflt_originate [{metric (0-16777214)$mval|metric-type (1-2)$mtype}]	   |no-summary$no_summary	   |suppress-fa$suppress_fa	 }]" */
DEFUN_CMD_FUNC_DECL(ospf_area_nssa)
#define funcdecl_ospf_area_nssa static int ospf_area_nssa_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * area_str,\
	const char * translator_role,\
	const char * dflt_originate,\
	long mval,\
	const char * mval_str __attribute__ ((unused)),\
	long mtype,\
	const char * mtype_str __attribute__ ((unused)),\
	const char * no_summary,\
	const char * suppress_fa)
funcdecl_ospf_area_nssa;
DEFUN_CMD_FUNC_TEXT(ospf_area_nssa)
{
#if 7 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *area_str = NULL;
	const char *translator_role = NULL;
	const char *dflt_originate = NULL;
	long mval = 0;
	const char *mval_str = NULL;
	long mtype = 0;
	const char *mtype_str = NULL;
	const char *no_summary = NULL;
	const char *suppress_fa = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "area_str")) {
			area_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "translator_role")) {
			translator_role = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "dflt_originate")) {
			dflt_originate = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "mval")) {
			mval_str = argv[_i]->arg;
			char *_end;
			mval = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "mtype")) {
			mtype_str = argv[_i]->arg;
			char *_end;
			mtype = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "no_summary")) {
			no_summary = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "suppress_fa")) {
			suppress_fa = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!area_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "area_str");
		return CMD_WARNING;
	}

	return ospf_area_nssa_magic(self, vty, argc, argv, area_str, translator_role, dflt_originate, mval, mval_str, mtype, mtype_str, no_summary, suppress_fa);
}

/* no_ospf_area_nssa => "no area <A.B.C.D|(0-4294967295)>$area_str nssa         [{	   <translate-candidate|translate-never|translate-always>	   |default-information-originate [{metric [(0-16777214)]|metric-type [(1-2)]}]	   |no-summary	   |suppress-fa	 }]" */
DEFUN_CMD_FUNC_DECL(no_ospf_area_nssa)
#define funcdecl_no_ospf_area_nssa static int no_ospf_area_nssa_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * area_str,\
	long metric,\
	const char * metric_str __attribute__ ((unused)),\
	long metric_type,\
	const char * metric_type_str __attribute__ ((unused)))
funcdecl_no_ospf_area_nssa;
DEFUN_CMD_FUNC_TEXT(no_ospf_area_nssa)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *area_str = NULL;
	long metric = 0;
	const char *metric_str = NULL;
	long metric_type = 0;
	const char *metric_type_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "area_str")) {
			area_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "metric")) {
			metric_str = argv[_i]->arg;
			char *_end;
			metric = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "metric_type")) {
			metric_type_str = argv[_i]->arg;
			char *_end;
			metric_type = strtol(argv[_i]->arg, &_end, 10);
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
	if (!area_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "area_str");
		return CMD_WARNING;
	}

	return no_ospf_area_nssa_magic(self, vty, argc, argv, area_str, metric, metric_str, metric_type, metric_type_str);
}

/* ospf_area_nssa_range => "area <A.B.C.D|(0-4294967295)>$area_str nssa range A.B.C.D/M$prefix [<not-advertise$not_adv|cost (0-16777215)$cost>]" */
DEFUN_CMD_FUNC_DECL(ospf_area_nssa_range)
#define funcdecl_ospf_area_nssa_range static int ospf_area_nssa_range_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * area_str,\
	const struct prefix_ipv4 * prefix,\
	const char * prefix_str __attribute__ ((unused)),\
	const char * not_adv,\
	long cost,\
	const char * cost_str __attribute__ ((unused)))
funcdecl_ospf_area_nssa_range;
DEFUN_CMD_FUNC_TEXT(ospf_area_nssa_range)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *area_str = NULL;
	struct prefix_ipv4 prefix = { };
	const char *prefix_str = NULL;
	const char *not_adv = NULL;
	long cost = 0;
	const char *cost_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "area_str")) {
			area_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix_ipv4(argv[_i]->arg, &prefix);
		}
		if (!strcmp(argv[_i]->varname, "not_adv")) {
			not_adv = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "cost")) {
			cost_str = argv[_i]->arg;
			char *_end;
			cost = strtol(argv[_i]->arg, &_end, 10);
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
	if (!area_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "area_str");
		return CMD_WARNING;
	}
	if (!prefix_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "prefix_str");
		return CMD_WARNING;
	}

	return ospf_area_nssa_range_magic(self, vty, argc, argv, area_str, &prefix, prefix_str, not_adv, cost, cost_str);
}

/* no_ospf_area_nssa_range => "no area <A.B.C.D|(0-4294967295)>$area_str nssa range A.B.C.D/M$prefix [<not-advertise|cost [(0-16777215)]>]" */
DEFUN_CMD_FUNC_DECL(no_ospf_area_nssa_range)
#define funcdecl_no_ospf_area_nssa_range static int no_ospf_area_nssa_range_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * area_str,\
	const struct prefix_ipv4 * prefix,\
	const char * prefix_str __attribute__ ((unused)),\
	long cost,\
	const char * cost_str __attribute__ ((unused)))
funcdecl_no_ospf_area_nssa_range;
DEFUN_CMD_FUNC_TEXT(no_ospf_area_nssa_range)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *area_str = NULL;
	struct prefix_ipv4 prefix = { };
	const char *prefix_str = NULL;
	long cost = 0;
	const char *cost_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "area_str")) {
			area_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix_ipv4(argv[_i]->arg, &prefix);
		}
		if (!strcmp(argv[_i]->varname, "cost")) {
			cost_str = argv[_i]->arg;
			char *_end;
			cost = strtol(argv[_i]->arg, &_end, 10);
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
	if (!area_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "area_str");
		return CMD_WARNING;
	}
	if (!prefix_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "prefix_str");
		return CMD_WARNING;
	}

	return no_ospf_area_nssa_range_magic(self, vty, argc, argv, area_str, &prefix, prefix_str, cost, cost_str);
}

/* ospf_send_extra_data => "[no] ospf send-extra-data zebra" */
DEFUN_CMD_FUNC_DECL(ospf_send_extra_data)
#define funcdecl_ospf_send_extra_data static int ospf_send_extra_data_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_ospf_send_extra_data;
DEFUN_CMD_FUNC_TEXT(ospf_send_extra_data)
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

	return ospf_send_extra_data_magic(self, vty, argc, argv, no);
}

/* ospf_timers_min_ls_interval => "[no] timers throttle lsa all ![(0-5000)]$lsa_refresh_interval" */
DEFUN_CMD_FUNC_DECL(ospf_timers_min_ls_interval)
#define funcdecl_ospf_timers_min_ls_interval static int ospf_timers_min_ls_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long lsa_refresh_interval,\
	const char * lsa_refresh_interval_str __attribute__ ((unused)))
funcdecl_ospf_timers_min_ls_interval;
DEFUN_CMD_FUNC_TEXT(ospf_timers_min_ls_interval)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long lsa_refresh_interval = 0;
	const char *lsa_refresh_interval_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "lsa_refresh_interval")) {
			lsa_refresh_interval_str = argv[_i]->arg;
			char *_end;
			lsa_refresh_interval = strtol(argv[_i]->arg, &_end, 10);
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

	return ospf_timers_min_ls_interval_magic(self, vty, argc, argv, no, lsa_refresh_interval, lsa_refresh_interval_str);
}

/* ospf_timers_lsa_min_arrival => "[no] timers lsa min-arrival ![(0-5000)]$min_arrival" */
DEFUN_CMD_FUNC_DECL(ospf_timers_lsa_min_arrival)
#define funcdecl_ospf_timers_lsa_min_arrival static int ospf_timers_lsa_min_arrival_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long min_arrival,\
	const char * min_arrival_str __attribute__ ((unused)))
funcdecl_ospf_timers_lsa_min_arrival;
DEFUN_CMD_FUNC_TEXT(ospf_timers_lsa_min_arrival)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long min_arrival = 0;
	const char *min_arrival_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "min_arrival")) {
			min_arrival_str = argv[_i]->arg;
			char *_end;
			min_arrival = strtol(argv[_i]->arg, &_end, 10);
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

	return ospf_timers_lsa_min_arrival_magic(self, vty, argc, argv, no, min_arrival, min_arrival_str);
}

/* ospf_timers_lsa_min_arrival_deprecated => "timers lsa min-arrival [(5001-60000)]$min_arrival" */
DEFUN_CMD_FUNC_DECL(ospf_timers_lsa_min_arrival_deprecated)
#define funcdecl_ospf_timers_lsa_min_arrival_deprecated static int ospf_timers_lsa_min_arrival_deprecated_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long min_arrival,\
	const char * min_arrival_str __attribute__ ((unused)))
funcdecl_ospf_timers_lsa_min_arrival_deprecated;
DEFUN_CMD_FUNC_TEXT(ospf_timers_lsa_min_arrival_deprecated)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long min_arrival = 0;
	const char *min_arrival_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "min_arrival")) {
			min_arrival_str = argv[_i]->arg;
			char *_end;
			min_arrival = strtol(argv[_i]->arg, &_end, 10);
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

	return ospf_timers_lsa_min_arrival_deprecated_magic(self, vty, argc, argv, min_arrival, min_arrival_str);
}

/* ospf_neighbor => "[no] neighbor A.B.C.D$nbr_address [{priority (0-255)$priority | poll-interval (1-65535)$interval}]" */
DEFUN_CMD_FUNC_DECL(ospf_neighbor)
#define funcdecl_ospf_neighbor static int ospf_neighbor_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	struct in_addr nbr_address,\
	const char * nbr_address_str __attribute__ ((unused)),\
	long priority,\
	const char * priority_str __attribute__ ((unused)),\
	long interval,\
	const char * interval_str __attribute__ ((unused)))
funcdecl_ospf_neighbor;
DEFUN_CMD_FUNC_TEXT(ospf_neighbor)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct in_addr nbr_address = { INADDR_ANY };
	const char *nbr_address_str = NULL;
	long priority = 0;
	const char *priority_str = NULL;
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
		if (!strcmp(argv[_i]->varname, "nbr_address")) {
			nbr_address_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &nbr_address);
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
	if (!nbr_address_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "nbr_address_str");
		return CMD_WARNING;
	}

	return ospf_neighbor_magic(self, vty, argc, argv, no, nbr_address, nbr_address_str, priority, priority_str, interval, interval_str);
}

/* show_ip_ospf_instance_neighbor_int => "show ip ospf (1-65535)$instance neighbor IFNAME$ifname [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_ospf_instance_neighbor_int)
#define funcdecl_show_ip_ospf_instance_neighbor_int static int show_ip_ospf_instance_neighbor_int_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long instance,\
	const char * instance_str __attribute__ ((unused)),\
	const char * ifname,\
	const char * json)
funcdecl_show_ip_ospf_instance_neighbor_int;
DEFUN_CMD_FUNC_TEXT(show_ip_ospf_instance_neighbor_int)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long instance = 0;
	const char *instance_str = NULL;
	const char *ifname = NULL;
	const char *json = NULL;

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
		if (!strcmp(argv[_i]->varname, "ifname")) {
			ifname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!instance_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "instance_str");
		return CMD_WARNING;
	}
	if (!ifname) {
		vty_out(vty, "Internal CLI error [%s]\n", "ifname");
		return CMD_WARNING;
	}

	return show_ip_ospf_instance_neighbor_int_magic(self, vty, argc, argv, instance, instance_str, ifname, json);
}

/* show_ip_ospf_neighbor_id => "show ip ospf [vrf NAME$vrf_name] neighbor A.B.C.D$router_id [detail$detail] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_ospf_neighbor_id)
#define funcdecl_show_ip_ospf_neighbor_id static int show_ip_ospf_neighbor_id_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_name,\
	struct in_addr router_id,\
	const char * router_id_str __attribute__ ((unused)),\
	const char * detail,\
	const char * json)
funcdecl_show_ip_ospf_neighbor_id;
DEFUN_CMD_FUNC_TEXT(show_ip_ospf_neighbor_id)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf_name = NULL;
	struct in_addr router_id = { INADDR_ANY };
	const char *router_id_str = NULL;
	const char *detail = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf_name")) {
			vrf_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "router_id")) {
			router_id_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &router_id);
		}
		if (!strcmp(argv[_i]->varname, "detail")) {
			detail = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!router_id_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "router_id_str");
		return CMD_WARNING;
	}

	return show_ip_ospf_neighbor_id_magic(self, vty, argc, argv, vrf_name, router_id, router_id_str, detail, json);
}

/* show_ip_ospf_instance_neighbor_id => "show ip ospf (1-65535)$instance neighbor A.B.C.D$router_id [detail$detail] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_ospf_instance_neighbor_id)
#define funcdecl_show_ip_ospf_instance_neighbor_id static int show_ip_ospf_instance_neighbor_id_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long instance,\
	const char * instance_str __attribute__ ((unused)),\
	struct in_addr router_id,\
	const char * router_id_str __attribute__ ((unused)),\
	const char * detail,\
	const char * json)
funcdecl_show_ip_ospf_instance_neighbor_id;
DEFUN_CMD_FUNC_TEXT(show_ip_ospf_instance_neighbor_id)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long instance = 0;
	const char *instance_str = NULL;
	struct in_addr router_id = { INADDR_ANY };
	const char *router_id_str = NULL;
	const char *detail = NULL;
	const char *json = NULL;

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
		if (!strcmp(argv[_i]->varname, "router_id")) {
			router_id_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &router_id);
		}
		if (!strcmp(argv[_i]->varname, "detail")) {
			detail = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!instance_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "instance_str");
		return CMD_WARNING;
	}
	if (!router_id_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "router_id_str");
		return CMD_WARNING;
	}

	return show_ip_ospf_instance_neighbor_id_magic(self, vty, argc, argv, instance, instance_str, router_id, router_id_str, detail, json);
}

/* show_ip_ospf_neighbor_detail => "show ip ospf [vrf <NAME|all>$vrf_name] neighbor detail [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_ospf_neighbor_detail)
#define funcdecl_show_ip_ospf_neighbor_detail static int show_ip_ospf_neighbor_detail_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_name,\
	const char * json)
funcdecl_show_ip_ospf_neighbor_detail;
DEFUN_CMD_FUNC_TEXT(show_ip_ospf_neighbor_detail)
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

	return show_ip_ospf_neighbor_detail_magic(self, vty, argc, argv, vrf_name, json);
}

/* show_ip_ospf_neighbor_int => "show ip ospf [vrf NAME$vrf_name] neighbor IFNAME$ifname [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_ospf_neighbor_int)
#define funcdecl_show_ip_ospf_neighbor_int static int show_ip_ospf_neighbor_int_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_name,\
	const char * ifname,\
	const char * json)
funcdecl_show_ip_ospf_neighbor_int;
DEFUN_CMD_FUNC_TEXT(show_ip_ospf_neighbor_int)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf_name = NULL;
	const char *ifname = NULL;
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
		if (!strcmp(argv[_i]->varname, "ifname")) {
			ifname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!ifname) {
		vty_out(vty, "Internal CLI error [%s]\n", "ifname");
		return CMD_WARNING;
	}

	return show_ip_ospf_neighbor_int_magic(self, vty, argc, argv, vrf_name, ifname, json);
}

/* show_ip_ospf_neighbor_int_detail => "show ip ospf [vrf NAME$vrf_name] neighbor IFNAME$ifname detail [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_ospf_neighbor_int_detail)
#define funcdecl_show_ip_ospf_neighbor_int_detail static int show_ip_ospf_neighbor_int_detail_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_name,\
	const char * ifname,\
	const char * json)
funcdecl_show_ip_ospf_neighbor_int_detail;
DEFUN_CMD_FUNC_TEXT(show_ip_ospf_neighbor_int_detail)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf_name = NULL;
	const char *ifname = NULL;
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
		if (!strcmp(argv[_i]->varname, "ifname")) {
			ifname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!ifname) {
		vty_out(vty, "Internal CLI error [%s]\n", "ifname");
		return CMD_WARNING;
	}

	return show_ip_ospf_neighbor_int_detail_magic(self, vty, argc, argv, vrf_name, ifname, json);
}

/* show_ip_ospf_instance_neighbor_int_detail => "show ip ospf (1-65535)$instance neighbor IFNAME$ifname detail [json$json]" */
DEFUN_CMD_FUNC_DECL(show_ip_ospf_instance_neighbor_int_detail)
#define funcdecl_show_ip_ospf_instance_neighbor_int_detail static int show_ip_ospf_instance_neighbor_int_detail_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long instance,\
	const char * instance_str __attribute__ ((unused)),\
	const char * ifname,\
	const char * json)
funcdecl_show_ip_ospf_instance_neighbor_int_detail;
DEFUN_CMD_FUNC_TEXT(show_ip_ospf_instance_neighbor_int_detail)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long instance = 0;
	const char *instance_str = NULL;
	const char *ifname = NULL;
	const char *json = NULL;

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
		if (!strcmp(argv[_i]->varname, "ifname")) {
			ifname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!instance_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "instance_str");
		return CMD_WARNING;
	}
	if (!ifname) {
		vty_out(vty, "Internal CLI error [%s]\n", "ifname");
		return CMD_WARNING;
	}

	return show_ip_ospf_instance_neighbor_int_detail_magic(self, vty, argc, argv, instance, instance_str, ifname, json);
}

/* show_ip_ospf_database => "show ip ospf [(1-65535)$instance_id] [vrf <NAME|all>$vrf_name] database         [<	   max-age$maxage	   |self-originate$selforig	   |<	     detail$detail             |<asbr-summary|external|network|router|summary|nssa-external|opaque-link|opaque-area|opaque-as>$type_name	    >	    [{	      A.B.C.D$lsid	      |<adv-router A.B.C.D$adv_router|self-originate$adv_router_self>	    }]	 >]	 [json]" */
DEFUN_CMD_FUNC_DECL(show_ip_ospf_database)
#define funcdecl_show_ip_ospf_database static int show_ip_ospf_database_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long instance_id,\
	const char * instance_id_str __attribute__ ((unused)),\
	const char * vrf_name,\
	const char * maxage,\
	const char * selforig,\
	const char * detail,\
	const char * type_name,\
	struct in_addr lsid,\
	const char * lsid_str __attribute__ ((unused)),\
	struct in_addr adv_router,\
	const char * adv_router_str __attribute__ ((unused)),\
	const char * adv_router_self)
funcdecl_show_ip_ospf_database;
DEFUN_CMD_FUNC_TEXT(show_ip_ospf_database)
{
#if 9 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long instance_id = 0;
	const char *instance_id_str = NULL;
	const char *vrf_name = NULL;
	const char *maxage = NULL;
	const char *selforig = NULL;
	const char *detail = NULL;
	const char *type_name = NULL;
	struct in_addr lsid = { INADDR_ANY };
	const char *lsid_str = NULL;
	struct in_addr adv_router = { INADDR_ANY };
	const char *adv_router_str = NULL;
	const char *adv_router_self = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "instance_id")) {
			instance_id_str = argv[_i]->arg;
			char *_end;
			instance_id = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "vrf_name")) {
			vrf_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "maxage")) {
			maxage = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "selforig")) {
			selforig = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "detail")) {
			detail = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "type_name")) {
			type_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "lsid")) {
			lsid_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &lsid);
		}
		if (!strcmp(argv[_i]->varname, "adv_router")) {
			adv_router_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &adv_router);
		}
		if (!strcmp(argv[_i]->varname, "adv_router_self")) {
			adv_router_self = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_ospf_database_magic(self, vty, argc, argv, instance_id, instance_id_str, vrf_name, maxage, selforig, detail, type_name, lsid, lsid_str, adv_router, adv_router_str, adv_router_self);
}

/* ip_ospf_retransmit_window => "[no] ip ospf retransmit-window ![(20-1000)]$retransmit-window [A.B.C.D]$ip_addr" */
DEFUN_CMD_FUNC_DECL(ip_ospf_retransmit_window)
#define funcdecl_ip_ospf_retransmit_window static int ip_ospf_retransmit_window_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long retransmit_window,\
	const char * retransmit_window_str __attribute__ ((unused)),\
	struct in_addr ip_addr,\
	const char * ip_addr_str __attribute__ ((unused)))
funcdecl_ip_ospf_retransmit_window;
DEFUN_CMD_FUNC_TEXT(ip_ospf_retransmit_window)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long retransmit_window = 0;
	const char *retransmit_window_str = NULL;
	struct in_addr ip_addr = { INADDR_ANY };
	const char *ip_addr_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "retransmit_window")) {
			retransmit_window_str = argv[_i]->arg;
			char *_end;
			retransmit_window = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "ip_addr")) {
			ip_addr_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &ip_addr);
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

	return ip_ospf_retransmit_window_magic(self, vty, argc, argv, no, retransmit_window, retransmit_window_str, ip_addr, ip_addr_str);
}

/* ip_ospf_gr_hdelay => "ip ospf graceful-restart hello-delay (1-1800)" */
DEFUN_CMD_FUNC_DECL(ip_ospf_gr_hdelay)
#define funcdecl_ip_ospf_gr_hdelay static int ip_ospf_gr_hdelay_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long hello_delay,\
	const char * hello_delay_str __attribute__ ((unused)))
funcdecl_ip_ospf_gr_hdelay;
DEFUN_CMD_FUNC_TEXT(ip_ospf_gr_hdelay)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long hello_delay = 0;
	const char *hello_delay_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "hello_delay")) {
			hello_delay_str = argv[_i]->arg;
			char *_end;
			hello_delay = strtol(argv[_i]->arg, &_end, 10);
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
	if (!hello_delay_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "hello_delay_str");
		return CMD_WARNING;
	}

	return ip_ospf_gr_hdelay_magic(self, vty, argc, argv, hello_delay, hello_delay_str);
}

/* no_ip_ospf_gr_hdelay => "no ip ospf graceful-restart hello-delay [(1-1800)]" */
DEFUN_CMD_FUNC_DECL(no_ip_ospf_gr_hdelay)
#define funcdecl_no_ip_ospf_gr_hdelay static int no_ip_ospf_gr_hdelay_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long hello_delay,\
	const char * hello_delay_str __attribute__ ((unused)))
funcdecl_no_ip_ospf_gr_hdelay;
DEFUN_CMD_FUNC_TEXT(no_ip_ospf_gr_hdelay)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long hello_delay = 0;
	const char *hello_delay_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "hello_delay")) {
			hello_delay_str = argv[_i]->arg;
			char *_end;
			hello_delay = strtol(argv[_i]->arg, &_end, 10);
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

	return no_ip_ospf_gr_hdelay_magic(self, vty, argc, argv, hello_delay, hello_delay_str);
}

/* ip_ospf_capability_opaque => "[no] ip ospf capability opaque [A.B.C.D]$ip_addr" */
DEFUN_CMD_FUNC_DECL(ip_ospf_capability_opaque)
#define funcdecl_ip_ospf_capability_opaque static int ip_ospf_capability_opaque_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	struct in_addr ip_addr,\
	const char * ip_addr_str __attribute__ ((unused)))
funcdecl_ip_ospf_capability_opaque;
DEFUN_CMD_FUNC_TEXT(ip_ospf_capability_opaque)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct in_addr ip_addr = { INADDR_ANY };
	const char *ip_addr_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "ip_addr")) {
			ip_addr_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &ip_addr);
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

	return ip_ospf_capability_opaque_magic(self, vty, argc, argv, no, ip_addr, ip_addr_str);
}

/* ip_ospf_prefix_suppression => "[no] ip ospf prefix-suppression [A.B.C.D]$ip_addr" */
DEFUN_CMD_FUNC_DECL(ip_ospf_prefix_suppression)
#define funcdecl_ip_ospf_prefix_suppression static int ip_ospf_prefix_suppression_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	struct in_addr ip_addr,\
	const char * ip_addr_str __attribute__ ((unused)))
funcdecl_ip_ospf_prefix_suppression;
DEFUN_CMD_FUNC_TEXT(ip_ospf_prefix_suppression)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct in_addr ip_addr = { INADDR_ANY };
	const char *ip_addr_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "ip_addr")) {
			ip_addr_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &ip_addr);
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

	return ip_ospf_prefix_suppression_magic(self, vty, argc, argv, no, ip_addr, ip_addr_str);
}

/* ip_ospf_neighbor_filter => "[no] ip ospf neighbor-filter ![PREFIXLIST4_NAME]$prefix_list [A.B.C.D]$ip_addr" */
DEFUN_CMD_FUNC_DECL(ip_ospf_neighbor_filter)
#define funcdecl_ip_ospf_neighbor_filter static int ip_ospf_neighbor_filter_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * prefix_list,\
	struct in_addr ip_addr,\
	const char * ip_addr_str __attribute__ ((unused)))
funcdecl_ip_ospf_neighbor_filter;
DEFUN_CMD_FUNC_TEXT(ip_ospf_neighbor_filter)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *prefix_list = NULL;
	struct in_addr ip_addr = { INADDR_ANY };
	const char *ip_addr_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "prefix_list")) {
			prefix_list = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "ip_addr")) {
			ip_addr_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &ip_addr);
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

	return ip_ospf_neighbor_filter_magic(self, vty, argc, argv, no, prefix_list, ip_addr, ip_addr_str);
}

/* ospf_gr_helper_enable => "graceful-restart helper enable [A.B.C.D$address]" */
DEFUN_CMD_FUNC_DECL(ospf_gr_helper_enable)
#define funcdecl_ospf_gr_helper_enable static int ospf_gr_helper_enable_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in_addr address,\
	const char * address_str __attribute__ ((unused)))
funcdecl_ospf_gr_helper_enable;
DEFUN_CMD_FUNC_TEXT(ospf_gr_helper_enable)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in_addr address = { INADDR_ANY };
	const char *address_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "address")) {
			address_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &address);
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

	return ospf_gr_helper_enable_magic(self, vty, argc, argv, address, address_str);
}

/* no_ospf_gr_helper_enable => "no graceful-restart helper enable [A.B.C.D$address]" */
DEFUN_CMD_FUNC_DECL(no_ospf_gr_helper_enable)
#define funcdecl_no_ospf_gr_helper_enable static int no_ospf_gr_helper_enable_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in_addr address,\
	const char * address_str __attribute__ ((unused)))
funcdecl_no_ospf_gr_helper_enable;
DEFUN_CMD_FUNC_TEXT(no_ospf_gr_helper_enable)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in_addr address = { INADDR_ANY };
	const char *address_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "address")) {
			address_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &address);
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

	return no_ospf_gr_helper_enable_magic(self, vty, argc, argv, address, address_str);
}

/* ospf_gr_helper_enable_lsacheck => "graceful-restart helper strict-lsa-checking" */
DEFUN_CMD_FUNC_DECL(ospf_gr_helper_enable_lsacheck)
#define funcdecl_ospf_gr_helper_enable_lsacheck static int ospf_gr_helper_enable_lsacheck_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_ospf_gr_helper_enable_lsacheck;
DEFUN_CMD_FUNC_TEXT(ospf_gr_helper_enable_lsacheck)
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

	return ospf_gr_helper_enable_lsacheck_magic(self, vty, argc, argv);
}

/* no_ospf_gr_helper_enable_lsacheck => "no graceful-restart helper strict-lsa-checking" */
DEFUN_CMD_FUNC_DECL(no_ospf_gr_helper_enable_lsacheck)
#define funcdecl_no_ospf_gr_helper_enable_lsacheck static int no_ospf_gr_helper_enable_lsacheck_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_no_ospf_gr_helper_enable_lsacheck;
DEFUN_CMD_FUNC_TEXT(no_ospf_gr_helper_enable_lsacheck)
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

	return no_ospf_gr_helper_enable_lsacheck_magic(self, vty, argc, argv);
}

/* ospf_gr_helper_supported_grace_time => "graceful-restart helper supported-grace-time (10-1800)$interval" */
DEFUN_CMD_FUNC_DECL(ospf_gr_helper_supported_grace_time)
#define funcdecl_ospf_gr_helper_supported_grace_time static int ospf_gr_helper_supported_grace_time_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long interval,\
	const char * interval_str __attribute__ ((unused)))
funcdecl_ospf_gr_helper_supported_grace_time;
DEFUN_CMD_FUNC_TEXT(ospf_gr_helper_supported_grace_time)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long interval = 0;
	const char *interval_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

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
	if (!interval_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "interval_str");
		return CMD_WARNING;
	}

	return ospf_gr_helper_supported_grace_time_magic(self, vty, argc, argv, interval, interval_str);
}

/* no_ospf_gr_helper_supported_grace_time => "no graceful-restart helper supported-grace-time (10-1800)$interval" */
DEFUN_CMD_FUNC_DECL(no_ospf_gr_helper_supported_grace_time)
#define funcdecl_no_ospf_gr_helper_supported_grace_time static int no_ospf_gr_helper_supported_grace_time_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long interval,\
	const char * interval_str __attribute__ ((unused)))
funcdecl_no_ospf_gr_helper_supported_grace_time;
DEFUN_CMD_FUNC_TEXT(no_ospf_gr_helper_supported_grace_time)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long interval = 0;
	const char *interval_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

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
	if (!interval_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "interval_str");
		return CMD_WARNING;
	}

	return no_ospf_gr_helper_supported_grace_time_magic(self, vty, argc, argv, interval, interval_str);
}

/* ospf_gr_helper_planned_only => "graceful-restart helper planned-only" */
DEFUN_CMD_FUNC_DECL(ospf_gr_helper_planned_only)
#define funcdecl_ospf_gr_helper_planned_only static int ospf_gr_helper_planned_only_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_ospf_gr_helper_planned_only;
DEFUN_CMD_FUNC_TEXT(ospf_gr_helper_planned_only)
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

	return ospf_gr_helper_planned_only_magic(self, vty, argc, argv);
}

/* no_ospf_gr_helper_planned_only => "no graceful-restart helper planned-only" */
DEFUN_CMD_FUNC_DECL(no_ospf_gr_helper_planned_only)
#define funcdecl_no_ospf_gr_helper_planned_only static int no_ospf_gr_helper_planned_only_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_no_ospf_gr_helper_planned_only;
DEFUN_CMD_FUNC_TEXT(no_ospf_gr_helper_planned_only)
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

	return no_ospf_gr_helper_planned_only_magic(self, vty, argc, argv);
}

/* show_ip_ospf_gr_helper => "show ip ospf [{(1-65535)$instance|vrf <NAME|all>}] graceful-restart helper [detail] [json]" */
DEFUN_CMD_FUNC_DECL(show_ip_ospf_gr_helper)
#define funcdecl_show_ip_ospf_gr_helper static int show_ip_ospf_gr_helper_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long instance,\
	const char * instance_str __attribute__ ((unused)),\
	const char * vrf)
funcdecl_show_ip_ospf_gr_helper;
DEFUN_CMD_FUNC_TEXT(show_ip_ospf_gr_helper)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long instance = 0;
	const char *instance_str = NULL;
	const char *vrf = NULL;

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

	return show_ip_ospf_gr_helper_magic(self, vty, argc, argv, instance, instance_str, vrf);
}

/* show_ip_ospf_border_routers => "show ip ospf [vrf <NAME|all>] border-routers [json]" */
DEFUN_CMD_FUNC_DECL(show_ip_ospf_border_routers)
#define funcdecl_show_ip_ospf_border_routers static int show_ip_ospf_border_routers_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf)
funcdecl_show_ip_ospf_border_routers;
DEFUN_CMD_FUNC_TEXT(show_ip_ospf_border_routers)
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

	return show_ip_ospf_border_routers_magic(self, vty, argc, argv, vrf);
}

/* clear_ip_ospf_neighbor => "clear ip ospf [(1-65535)]$instance neighbor [A.B.C.D$nbr_id]" */
DEFUN_CMD_FUNC_DECL(clear_ip_ospf_neighbor)
#define funcdecl_clear_ip_ospf_neighbor static int clear_ip_ospf_neighbor_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long instance,\
	const char * instance_str __attribute__ ((unused)),\
	struct in_addr nbr_id,\
	const char * nbr_id_str __attribute__ ((unused)))
funcdecl_clear_ip_ospf_neighbor;
DEFUN_CMD_FUNC_TEXT(clear_ip_ospf_neighbor)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long instance = 0;
	const char *instance_str = NULL;
	struct in_addr nbr_id = { INADDR_ANY };
	const char *nbr_id_str = NULL;

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
		if (!strcmp(argv[_i]->varname, "nbr_id")) {
			nbr_id_str = argv[_i]->arg;
			_fail = !inet_aton(argv[_i]->arg, &nbr_id);
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

	return clear_ip_ospf_neighbor_magic(self, vty, argc, argv, instance, instance_str, nbr_id, nbr_id_str);
}

/* clear_ip_ospf_process => "clear ip ospf [(1-65535)]$instance process" */
DEFUN_CMD_FUNC_DECL(clear_ip_ospf_process)
#define funcdecl_clear_ip_ospf_process static int clear_ip_ospf_process_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long instance,\
	const char * instance_str __attribute__ ((unused)))
funcdecl_clear_ip_ospf_process;
DEFUN_CMD_FUNC_TEXT(clear_ip_ospf_process)
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

	return clear_ip_ospf_process_magic(self, vty, argc, argv, instance, instance_str);
}

/* ospf_lsa_refresh_timer => "[no$no] ospf lsa-refresh [(120-1800)]$value" */
DEFUN_CMD_FUNC_DECL(ospf_lsa_refresh_timer)
#define funcdecl_ospf_lsa_refresh_timer static int ospf_lsa_refresh_timer_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long value,\
	const char * value_str __attribute__ ((unused)))
funcdecl_ospf_lsa_refresh_timer;
DEFUN_CMD_FUNC_TEXT(ospf_lsa_refresh_timer)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long value = 0;
	const char *value_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "value")) {
			value_str = argv[_i]->arg;
			char *_end;
			value = strtol(argv[_i]->arg, &_end, 10);
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

	return ospf_lsa_refresh_timer_magic(self, vty, argc, argv, no, value, value_str);
}

/* ospf_maxage_delay_timer => "[no$no] ospf maxage-delay [(0-60)]$value" */
DEFUN_CMD_FUNC_DECL(ospf_maxage_delay_timer)
#define funcdecl_ospf_maxage_delay_timer static int ospf_maxage_delay_timer_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long value,\
	const char * value_str __attribute__ ((unused)))
funcdecl_ospf_maxage_delay_timer;
DEFUN_CMD_FUNC_TEXT(ospf_maxage_delay_timer)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long value = 0;
	const char *value_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "value")) {
			value_str = argv[_i]->arg;
			char *_end;
			value = strtol(argv[_i]->arg, &_end, 10);
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

	return ospf_maxage_delay_timer_magic(self, vty, argc, argv, no, value, value_str);
}

/* flood_reduction => "flood-reduction" */
DEFUN_CMD_FUNC_DECL(flood_reduction)
#define funcdecl_flood_reduction static int flood_reduction_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_flood_reduction;
DEFUN_CMD_FUNC_TEXT(flood_reduction)
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

	return flood_reduction_magic(self, vty, argc, argv);
}

/* flood_reduction_area => "area <A.B.C.D|(0-4294967295)> flood-reduction" */
DEFUN_CMD_FUNC_DECL(flood_reduction_area)
#define funcdecl_flood_reduction_area static int flood_reduction_area_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * area)
funcdecl_flood_reduction_area;
DEFUN_CMD_FUNC_TEXT(flood_reduction_area)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *area = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "area")) {
			area = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!area) {
		vty_out(vty, "Internal CLI error [%s]\n", "area");
		return CMD_WARNING;
	}

	return flood_reduction_area_magic(self, vty, argc, argv, area);
}

/* no_flood_reduction => "no flood-reduction" */
DEFUN_CMD_FUNC_DECL(no_flood_reduction)
#define funcdecl_no_flood_reduction static int no_flood_reduction_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_no_flood_reduction;
DEFUN_CMD_FUNC_TEXT(no_flood_reduction)
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

	return no_flood_reduction_magic(self, vty, argc, argv);
}

/* no_flood_reduction_area => "no area <A.B.C.D|(0-4294967295)> flood-reduction" */
DEFUN_CMD_FUNC_DECL(no_flood_reduction_area)
#define funcdecl_no_flood_reduction_area static int no_flood_reduction_area_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * area)
funcdecl_no_flood_reduction_area;
DEFUN_CMD_FUNC_TEXT(no_flood_reduction_area)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *area = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "area")) {
			area = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!area) {
		vty_out(vty, "Internal CLI error [%s]\n", "area");
		return CMD_WARNING;
	}

	return no_flood_reduction_area_magic(self, vty, argc, argv, area);
}

/* ospf_socket_bufsizes => "[no] socket buffer <send$send_val | recv$recv_val | all$all_val> 	  ![(1-4000000000)$bufsize]" */
DEFUN_CMD_FUNC_DECL(ospf_socket_bufsizes)
#define funcdecl_ospf_socket_bufsizes static int ospf_socket_bufsizes_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * send_val,\
	const char * recv_val,\
	const char * all_val,\
	long bufsize,\
	const char * bufsize_str __attribute__ ((unused)))
funcdecl_ospf_socket_bufsizes;
DEFUN_CMD_FUNC_TEXT(ospf_socket_bufsizes)
{
#if 5 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *send_val = NULL;
	const char *recv_val = NULL;
	const char *all_val = NULL;
	long bufsize = 0;
	const char *bufsize_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "send_val")) {
			send_val = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "recv_val")) {
			recv_val = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "all_val")) {
			all_val = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "bufsize")) {
			bufsize_str = argv[_i]->arg;
			char *_end;
			bufsize = strtol(argv[_i]->arg, &_end, 10);
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

	return ospf_socket_bufsizes_magic(self, vty, argc, argv, no, send_val, recv_val, all_val, bufsize, bufsize_str);
}

/* per_intf_socket => "[no] socket-per-interface" */
DEFUN_CMD_FUNC_DECL(per_intf_socket)
#define funcdecl_per_intf_socket static int per_intf_socket_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_per_intf_socket;
DEFUN_CMD_FUNC_TEXT(per_intf_socket)
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

	return per_intf_socket_magic(self, vty, argc, argv, no);
}

