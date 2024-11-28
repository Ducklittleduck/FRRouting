/* ipv6_ospf6_gr_hdelay => "ipv6 ospf6 graceful-restart hello-delay (1-1800)" */
DEFUN_CMD_FUNC_DECL(ipv6_ospf6_gr_hdelay)
#define funcdecl_ipv6_ospf6_gr_hdelay static int ipv6_ospf6_gr_hdelay_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long hello_delay,\
	const char * hello_delay_str __attribute__ ((unused)))
funcdecl_ipv6_ospf6_gr_hdelay;
DEFUN_CMD_FUNC_TEXT(ipv6_ospf6_gr_hdelay)
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

	return ipv6_ospf6_gr_hdelay_magic(self, vty, argc, argv, hello_delay, hello_delay_str);
}

/* no_ipv6_ospf6_gr_hdelay => "no ipv6 ospf6 graceful-restart hello-delay [(1-1800)]" */
DEFUN_CMD_FUNC_DECL(no_ipv6_ospf6_gr_hdelay)
#define funcdecl_no_ipv6_ospf6_gr_hdelay static int no_ipv6_ospf6_gr_hdelay_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long hello_delay,\
	const char * hello_delay_str __attribute__ ((unused)))
funcdecl_no_ipv6_ospf6_gr_hdelay;
DEFUN_CMD_FUNC_TEXT(no_ipv6_ospf6_gr_hdelay)
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

	return no_ipv6_ospf6_gr_hdelay_magic(self, vty, argc, argv, hello_delay, hello_delay_str);
}

/* ipv6_ospf6_p2xp_only_cfg_neigh => "[no] ipv6 ospf6 p2p-p2mp config-neighbors-only" */
DEFUN_CMD_FUNC_DECL(ipv6_ospf6_p2xp_only_cfg_neigh)
#define funcdecl_ipv6_ospf6_p2xp_only_cfg_neigh static int ipv6_ospf6_p2xp_only_cfg_neigh_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_ipv6_ospf6_p2xp_only_cfg_neigh;
DEFUN_CMD_FUNC_TEXT(ipv6_ospf6_p2xp_only_cfg_neigh)
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

	return ipv6_ospf6_p2xp_only_cfg_neigh_magic(self, vty, argc, argv, no);
}

/* ipv6_ospf6_p2xp_no_multicast_hello => "[no] ipv6 ospf6 p2p-p2mp disable-multicast-hello" */
DEFUN_CMD_FUNC_DECL(ipv6_ospf6_p2xp_no_multicast_hello)
#define funcdecl_ipv6_ospf6_p2xp_no_multicast_hello static int ipv6_ospf6_p2xp_no_multicast_hello_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_ipv6_ospf6_p2xp_no_multicast_hello;
DEFUN_CMD_FUNC_TEXT(ipv6_ospf6_p2xp_no_multicast_hello)
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

	return ipv6_ospf6_p2xp_no_multicast_hello_magic(self, vty, argc, argv, no);
}

/* ipv6_ospf6_p2xp_connected_pfx => "[no] ipv6 ospf6 p2p-p2mp connected-prefixes <include$incl|exclude$excl>" */
DEFUN_CMD_FUNC_DECL(ipv6_ospf6_p2xp_connected_pfx)
#define funcdecl_ipv6_ospf6_p2xp_connected_pfx static int ipv6_ospf6_p2xp_connected_pfx_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * incl,\
	const char * excl)
funcdecl_ipv6_ospf6_p2xp_connected_pfx;
DEFUN_CMD_FUNC_TEXT(ipv6_ospf6_p2xp_connected_pfx)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *incl = NULL;
	const char *excl = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "incl")) {
			incl = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "excl")) {
			excl = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return ipv6_ospf6_p2xp_connected_pfx_magic(self, vty, argc, argv, no, incl, excl);
}

