/* debug_bgp_bestpath_prefix => "debug bgp bestpath <A.B.C.D/M|X:X::X:X/M>$prefix" */
DEFUN_CMD_FUNC_DECL(debug_bgp_bestpath_prefix)
#define funcdecl_debug_bgp_bestpath_prefix static int debug_bgp_bestpath_prefix_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const struct prefix * prefix,\
	const char * prefix_str __attribute__ ((unused)))
funcdecl_debug_bgp_bestpath_prefix;
DEFUN_CMD_FUNC_TEXT(debug_bgp_bestpath_prefix)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct prefix prefix = { };
	const char *prefix_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix(argv[_i]->arg, &prefix);
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

	return debug_bgp_bestpath_prefix_magic(self, vty, argc, argv, &prefix, prefix_str);
}

/* no_debug_bgp_bestpath_prefix => "no debug bgp bestpath <A.B.C.D/M|X:X::X:X/M>$prefix" */
DEFUN_CMD_FUNC_DECL(no_debug_bgp_bestpath_prefix)
#define funcdecl_no_debug_bgp_bestpath_prefix static int no_debug_bgp_bestpath_prefix_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const struct prefix * prefix,\
	const char * prefix_str __attribute__ ((unused)))
funcdecl_no_debug_bgp_bestpath_prefix;
DEFUN_CMD_FUNC_TEXT(no_debug_bgp_bestpath_prefix)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct prefix prefix = { };
	const char *prefix_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix(argv[_i]->arg, &prefix);
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

	return no_debug_bgp_bestpath_prefix_magic(self, vty, argc, argv, &prefix, prefix_str);
}

/* debug_bgp_update_detail => "[no] debug bgp updates detail" */
DEFUN_CMD_FUNC_DECL(debug_bgp_update_detail)
#define funcdecl_debug_bgp_update_detail static int debug_bgp_update_detail_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_bgp_update_detail;
DEFUN_CMD_FUNC_TEXT(debug_bgp_update_detail)
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

	return debug_bgp_update_detail_magic(self, vty, argc, argv, no);
}

/* debug_bgp_update_direct_peer => "debug bgp updates <in|out> <A.B.C.D|X:X::X:X|WORD> [prefix-list PREFIXLIST_NAME$plist]" */
DEFUN_CMD_FUNC_DECL(debug_bgp_update_direct_peer)
#define funcdecl_debug_bgp_update_direct_peer static int debug_bgp_update_direct_peer_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * plist)
funcdecl_debug_bgp_update_direct_peer;
DEFUN_CMD_FUNC_TEXT(debug_bgp_update_direct_peer)
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

	return debug_bgp_update_direct_peer_magic(self, vty, argc, argv, plist);
}

/* debug_bgp_update_prefix_afi_safi => "debug bgp updates prefix l2vpn$afi evpn$safi type <<macip|2> mac <X:X:X:X:X:X|X:X:X:X:X:X/M> [ip <A.B.C.D|X:X::X:X>]|<multicast|3> ip <A.B.C.D|X:X::X:X>|<prefix|5> ip <A.B.C.D/M|X:X::X:X/M>>" */
DEFUN_CMD_FUNC_DECL(debug_bgp_update_prefix_afi_safi)
#define funcdecl_debug_bgp_update_prefix_afi_safi static int debug_bgp_update_prefix_afi_safi_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * afi,\
	const char * safi,\
	struct prefix_eth * mac,\
	const char * mac_str __attribute__ ((unused)),\
	const char * ip)
funcdecl_debug_bgp_update_prefix_afi_safi;
DEFUN_CMD_FUNC_TEXT(debug_bgp_update_prefix_afi_safi)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *afi = NULL;
	const char *safi = NULL;
	struct prefix_eth mac = { };
	const char *mac_str = NULL;
	const char *ip = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "afi")) {
			afi = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "safi")) {
			safi = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "mac")) {
			mac_str = argv[_i]->arg;
			_fail = !str2prefix_eth(argv[_i]->arg, &mac);
		}
		if (!strcmp(argv[_i]->varname, "ip")) {
			ip = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!afi) {
		vty_out(vty, "Internal CLI error [%s]\n", "afi");
		return CMD_WARNING;
	}
	if (!safi) {
		vty_out(vty, "Internal CLI error [%s]\n", "safi");
		return CMD_WARNING;
	}

	return debug_bgp_update_prefix_afi_safi_magic(self, vty, argc, argv, afi, safi, &mac, mac_str, ip);
}

/* no_debug_bgp_update_prefix_afi_safi => "no debug bgp updates prefix l2vpn$afi evpn$safi type <<macip|2> mac <X:X:X:X:X:X|X:X:X:X:X:X/M> [ip <A.B.C.D|X:X::X:X>]|<multicast|3> ip <A.B.C.D|X:X::X:X>|<prefix|5> ip <A.B.C.D/M|X:X::X:X/M>>" */
DEFUN_CMD_FUNC_DECL(no_debug_bgp_update_prefix_afi_safi)
#define funcdecl_no_debug_bgp_update_prefix_afi_safi static int no_debug_bgp_update_prefix_afi_safi_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * afi,\
	const char * safi,\
	struct prefix_eth * mac,\
	const char * mac_str __attribute__ ((unused)),\
	const char * ip)
funcdecl_no_debug_bgp_update_prefix_afi_safi;
DEFUN_CMD_FUNC_TEXT(no_debug_bgp_update_prefix_afi_safi)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *afi = NULL;
	const char *safi = NULL;
	struct prefix_eth mac = { };
	const char *mac_str = NULL;
	const char *ip = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "afi")) {
			afi = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "safi")) {
			safi = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "mac")) {
			mac_str = argv[_i]->arg;
			_fail = !str2prefix_eth(argv[_i]->arg, &mac);
		}
		if (!strcmp(argv[_i]->varname, "ip")) {
			ip = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!afi) {
		vty_out(vty, "Internal CLI error [%s]\n", "afi");
		return CMD_WARNING;
	}
	if (!safi) {
		vty_out(vty, "Internal CLI error [%s]\n", "safi");
		return CMD_WARNING;
	}

	return no_debug_bgp_update_prefix_afi_safi_magic(self, vty, argc, argv, afi, safi, &mac, mac_str, ip);
}

/* debug_bgp_update_prefix => "debug bgp updates prefix <A.B.C.D/M|X:X::X:X/M>$prefix" */
DEFUN_CMD_FUNC_DECL(debug_bgp_update_prefix)
#define funcdecl_debug_bgp_update_prefix static int debug_bgp_update_prefix_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const struct prefix * prefix,\
	const char * prefix_str __attribute__ ((unused)))
funcdecl_debug_bgp_update_prefix;
DEFUN_CMD_FUNC_TEXT(debug_bgp_update_prefix)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct prefix prefix = { };
	const char *prefix_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix(argv[_i]->arg, &prefix);
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

	return debug_bgp_update_prefix_magic(self, vty, argc, argv, &prefix, prefix_str);
}

/* no_debug_bgp_update_prefix => "no debug bgp updates prefix <A.B.C.D/M|X:X::X:X/M>$prefix" */
DEFUN_CMD_FUNC_DECL(no_debug_bgp_update_prefix)
#define funcdecl_no_debug_bgp_update_prefix static int no_debug_bgp_update_prefix_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const struct prefix * prefix,\
	const char * prefix_str __attribute__ ((unused)))
funcdecl_no_debug_bgp_update_prefix;
DEFUN_CMD_FUNC_TEXT(no_debug_bgp_update_prefix)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct prefix prefix = { };
	const char *prefix_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix(argv[_i]->arg, &prefix);
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

	return no_debug_bgp_update_prefix_magic(self, vty, argc, argv, &prefix, prefix_str);
}

/* debug_bgp_zebra_prefix => "debug bgp zebra prefix <A.B.C.D/M|X:X::X:X/M>$prefix" */
DEFUN_CMD_FUNC_DECL(debug_bgp_zebra_prefix)
#define funcdecl_debug_bgp_zebra_prefix static int debug_bgp_zebra_prefix_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const struct prefix * prefix,\
	const char * prefix_str __attribute__ ((unused)))
funcdecl_debug_bgp_zebra_prefix;
DEFUN_CMD_FUNC_TEXT(debug_bgp_zebra_prefix)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct prefix prefix = { };
	const char *prefix_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix(argv[_i]->arg, &prefix);
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

	return debug_bgp_zebra_prefix_magic(self, vty, argc, argv, &prefix, prefix_str);
}

/* no_debug_bgp_zebra_prefix => "no debug bgp zebra prefix <A.B.C.D/M|X:X::X:X/M>$prefix" */
DEFUN_CMD_FUNC_DECL(no_debug_bgp_zebra_prefix)
#define funcdecl_no_debug_bgp_zebra_prefix static int no_debug_bgp_zebra_prefix_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const struct prefix * prefix,\
	const char * prefix_str __attribute__ ((unused)))
funcdecl_no_debug_bgp_zebra_prefix;
DEFUN_CMD_FUNC_TEXT(no_debug_bgp_zebra_prefix)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct prefix prefix = { };
	const char *prefix_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix(argv[_i]->arg, &prefix);
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

	return no_debug_bgp_zebra_prefix_magic(self, vty, argc, argv, &prefix, prefix_str);
}

/* debug_bgp_evpn_mh => "[no$no] debug bgp evpn mh <es$es|route$rt>" */
DEFUN_CMD_FUNC_DECL(debug_bgp_evpn_mh)
#define funcdecl_debug_bgp_evpn_mh static int debug_bgp_evpn_mh_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * es,\
	const char * rt)
funcdecl_debug_bgp_evpn_mh;
DEFUN_CMD_FUNC_TEXT(debug_bgp_evpn_mh)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *es = NULL;
	const char *rt = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "es")) {
			es = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "rt")) {
			rt = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return debug_bgp_evpn_mh_magic(self, vty, argc, argv, no, es, rt);
}

/* debug_bgp_bfd => "[no] debug bgp bfd" */
DEFUN_CMD_FUNC_DECL(debug_bgp_bfd)
#define funcdecl_debug_bgp_bfd static int debug_bgp_bfd_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_bgp_bfd;
DEFUN_CMD_FUNC_TEXT(debug_bgp_bfd)
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

	return debug_bgp_bfd_magic(self, vty, argc, argv, no);
}

/* debug_bgp_cond_adv => "[no$no] debug bgp conditional-advertisement" */
DEFUN_CMD_FUNC_DECL(debug_bgp_cond_adv)
#define funcdecl_debug_bgp_cond_adv static int debug_bgp_cond_adv_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_debug_bgp_cond_adv;
DEFUN_CMD_FUNC_TEXT(debug_bgp_cond_adv)
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

	return debug_bgp_cond_adv_magic(self, vty, argc, argv, no);
}

