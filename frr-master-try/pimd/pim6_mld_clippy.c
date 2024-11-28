/* gm_show_interface => "show ipv6 mld [vrf <VRF|all>$vrf_str] interface [IFNAME | detail$detail] [json$json]" */
DEFUN_CMD_FUNC_DECL(gm_show_interface)
#define funcdecl_gm_show_interface static int gm_show_interface_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_str,\
	const char * ifname,\
	const char * detail,\
	const char * json)
funcdecl_gm_show_interface;
DEFUN_CMD_FUNC_TEXT(gm_show_interface)
{
#if 4 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf_str = NULL;
	const char *ifname = NULL;
	const char *detail = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf_str")) {
			vrf_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "ifname")) {
			ifname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "detail")) {
			detail = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return gm_show_interface_magic(self, vty, argc, argv, vrf_str, ifname, detail, json);
}

/* gm_show_interface_stats => "show ipv6 mld [vrf <VRF|all>$vrf_str] statistics [interface IFNAME] [json$json]" */
DEFUN_CMD_FUNC_DECL(gm_show_interface_stats)
#define funcdecl_gm_show_interface_stats static int gm_show_interface_stats_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_str,\
	const char * ifname,\
	const char * json)
funcdecl_gm_show_interface_stats;
DEFUN_CMD_FUNC_TEXT(gm_show_interface_stats)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf_str = NULL;
	const char *ifname = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf_str")) {
			vrf_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return gm_show_interface_stats_magic(self, vty, argc, argv, vrf_str, ifname, json);
}

/* gm_show_interface_joins => "show ipv6 mld [vrf <VRF|all>$vrf_str] joins [{interface IFNAME|groups X:X::X:X/M|sources X:X::X:X/M|detail$detail}] [json$json]" */
DEFUN_CMD_FUNC_DECL(gm_show_interface_joins)
#define funcdecl_gm_show_interface_joins static int gm_show_interface_joins_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_str,\
	const char * ifname,\
	const struct prefix_ipv6 * groups,\
	const char * groups_str __attribute__ ((unused)),\
	const struct prefix_ipv6 * sources,\
	const char * sources_str __attribute__ ((unused)),\
	const char * detail,\
	const char * json)
funcdecl_gm_show_interface_joins;
DEFUN_CMD_FUNC_TEXT(gm_show_interface_joins)
{
#if 6 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf_str = NULL;
	const char *ifname = NULL;
	struct prefix_ipv6 groups = { };
	const char *groups_str = NULL;
	struct prefix_ipv6 sources = { };
	const char *sources_str = NULL;
	const char *detail = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf_str")) {
			vrf_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "ifname")) {
			ifname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "groups")) {
			groups_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &groups);
		}
		if (!strcmp(argv[_i]->varname, "sources")) {
			sources_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &sources);
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

	return gm_show_interface_joins_magic(self, vty, argc, argv, vrf_str, ifname, &groups, groups_str, &sources, sources_str, detail, json);
}

/* gm_show_mld_groups => "show ipv6 mld [vrf <VRF|all>$vrf_str] groups [json$json]" */
DEFUN_CMD_FUNC_DECL(gm_show_mld_groups)
#define funcdecl_gm_show_mld_groups static int gm_show_mld_groups_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_str,\
	const char * json)
funcdecl_gm_show_mld_groups;
DEFUN_CMD_FUNC_TEXT(gm_show_mld_groups)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf_str = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf_str")) {
			vrf_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return gm_show_mld_groups_magic(self, vty, argc, argv, vrf_str, json);
}

/* gm_debug_show => "debug show mld interface IFNAME" */
DEFUN_CMD_FUNC_DECL(gm_debug_show)
#define funcdecl_gm_debug_show static int gm_debug_show_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * ifname)
funcdecl_gm_debug_show;
DEFUN_CMD_FUNC_TEXT(gm_debug_show)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *ifname = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "ifname")) {
			ifname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return gm_debug_show_magic(self, vty, argc, argv, ifname);
}

/* gm_debug_iface_cfg => "debug ipv6 mld {robustness (0-7)|query-max-response-time (1-8387584)}" */
DEFUN_CMD_FUNC_DECL(gm_debug_iface_cfg)
#define funcdecl_gm_debug_iface_cfg static int gm_debug_iface_cfg_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long robustness,\
	const char * robustness_str __attribute__ ((unused)),\
	long query_max_response_time,\
	const char * query_max_response_time_str __attribute__ ((unused)))
funcdecl_gm_debug_iface_cfg;
DEFUN_CMD_FUNC_TEXT(gm_debug_iface_cfg)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long robustness = 0;
	const char *robustness_str = NULL;
	long query_max_response_time = 0;
	const char *query_max_response_time_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "robustness")) {
			robustness_str = argv[_i]->arg;
			char *_end;
			robustness = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
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

	return gm_debug_iface_cfg_magic(self, vty, argc, argv, robustness, robustness_str, query_max_response_time, query_max_response_time_str);
}

