/* show_ip_bgp_nexthop => "show [ip] bgp [<view|vrf> VIEWVRFNAME$vrf] nexthop [<A.B.C.D|X:X::X:X>$nhop] [<ipv4$afi [A.B.C.D$nhop]|ipv6$afi [X:X::X:X$nhop]>] [detail$detail] [json$uj]" */
DEFUN_CMD_FUNC_DECL(show_ip_bgp_nexthop)
#define funcdecl_show_ip_bgp_nexthop static int show_ip_bgp_nexthop_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const union sockunion * nhop,\
	const char * nhop_str __attribute__ ((unused)),\
	const char * afi,\
	const char * detail,\
	const char * uj)
funcdecl_show_ip_bgp_nexthop;
DEFUN_CMD_FUNC_TEXT(show_ip_bgp_nexthop)
{
#if 5 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	union sockunion s__nhop = { .sa.sa_family = AF_UNSPEC }, *nhop = NULL;
	const char *nhop_str = NULL;
	const char *afi = NULL;
	const char *detail = NULL;
	const char *uj = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "nhop")) {
			nhop_str = argv[_i]->arg;
			if (argv[_i]->text[0] == 'X') {
				s__nhop.sa.sa_family = AF_INET6;
				_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s__nhop.sin6.sin6_addr);
				nhop = &s__nhop;
			} else {
				s__nhop.sa.sa_family = AF_INET;
				_fail = !inet_aton(argv[_i]->arg, &s__nhop.sin.sin_addr);
				nhop = &s__nhop;
			}
		}
		if (!strcmp(argv[_i]->varname, "afi")) {
			afi = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "detail")) {
			detail = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "uj")) {
			uj = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_bgp_nexthop_magic(self, vty, argc, argv, vrf, nhop, nhop_str, afi, detail, uj);
}

/* show_ip_bgp_import_check => "show [ip] bgp [<view|vrf> VIEWVRFNAME$vrf] import-check-table [detail$detail] [json$uj]" */
DEFUN_CMD_FUNC_DECL(show_ip_bgp_import_check)
#define funcdecl_show_ip_bgp_import_check static int show_ip_bgp_import_check_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf,\
	const char * detail,\
	const char * uj)
funcdecl_show_ip_bgp_import_check;
DEFUN_CMD_FUNC_TEXT(show_ip_bgp_import_check)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf = NULL;
	const char *detail = NULL;
	const char *uj = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf")) {
			vrf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "detail")) {
			detail = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "uj")) {
			uj = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_bgp_import_check_magic(self, vty, argc, argv, vrf, detail, uj);
}

/* show_ip_bgp_instance_all_nexthop => "show [ip] bgp <view|vrf> all nexthop [<ipv4|ipv6>$afi] [detail$detail] [json$uj]" */
DEFUN_CMD_FUNC_DECL(show_ip_bgp_instance_all_nexthop)
#define funcdecl_show_ip_bgp_instance_all_nexthop static int show_ip_bgp_instance_all_nexthop_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * afi,\
	const char * detail,\
	const char * uj)
funcdecl_show_ip_bgp_instance_all_nexthop;
DEFUN_CMD_FUNC_TEXT(show_ip_bgp_instance_all_nexthop)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *afi = NULL;
	const char *detail = NULL;
	const char *uj = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "afi")) {
			afi = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "detail")) {
			detail = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "uj")) {
			uj = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ip_bgp_instance_all_nexthop_magic(self, vty, argc, argv, afi, detail, uj);
}

