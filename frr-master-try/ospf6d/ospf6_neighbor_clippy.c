/* ipv6_ospf6_p2xp_neigh => "[no] ipv6 ospf6 neighbor X:X::X:X" */
DEFUN_CMD_FUNC_DECL(ipv6_ospf6_p2xp_neigh)
#define funcdecl_ipv6_ospf6_p2xp_neigh static int ipv6_ospf6_p2xp_neigh_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	struct in6_addr neighbor,\
	const char * neighbor_str __attribute__ ((unused)))
funcdecl_ipv6_ospf6_p2xp_neigh;
DEFUN_CMD_FUNC_TEXT(ipv6_ospf6_p2xp_neigh)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct in6_addr neighbor = {};
	const char *neighbor_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "neighbor")) {
			neighbor_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &neighbor);
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
	if (!neighbor_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "neighbor_str");
		return CMD_WARNING;
	}

	return ipv6_ospf6_p2xp_neigh_magic(self, vty, argc, argv, no, neighbor, neighbor_str);
}

/* ipv6_ospf6_p2xp_neigh_cost => "[no] ipv6 ospf6 neighbor X:X::X:X cost (1-65535)" */
DEFUN_CMD_FUNC_DECL(ipv6_ospf6_p2xp_neigh_cost)
#define funcdecl_ipv6_ospf6_p2xp_neigh_cost static int ipv6_ospf6_p2xp_neigh_cost_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	struct in6_addr neighbor,\
	const char * neighbor_str __attribute__ ((unused)),\
	long cost,\
	const char * cost_str __attribute__ ((unused)))
funcdecl_ipv6_ospf6_p2xp_neigh_cost;
DEFUN_CMD_FUNC_TEXT(ipv6_ospf6_p2xp_neigh_cost)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct in6_addr neighbor = {};
	const char *neighbor_str = NULL;
	long cost = 0;
	const char *cost_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "neighbor")) {
			neighbor_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &neighbor);
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
	if (!neighbor_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "neighbor_str");
		return CMD_WARNING;
	}
	if (!cost_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "cost_str");
		return CMD_WARNING;
	}

	return ipv6_ospf6_p2xp_neigh_cost_magic(self, vty, argc, argv, no, neighbor, neighbor_str, cost, cost_str);
}

/* ipv6_ospf6_p2xp_neigh_poll_interval => "[no] ipv6 ospf6 neighbor X:X::X:X poll-interval (1-65535)" */
DEFUN_CMD_FUNC_DECL(ipv6_ospf6_p2xp_neigh_poll_interval)
#define funcdecl_ipv6_ospf6_p2xp_neigh_poll_interval static int ipv6_ospf6_p2xp_neigh_poll_interval_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	struct in6_addr neighbor,\
	const char * neighbor_str __attribute__ ((unused)),\
	long poll_interval,\
	const char * poll_interval_str __attribute__ ((unused)))
funcdecl_ipv6_ospf6_p2xp_neigh_poll_interval;
DEFUN_CMD_FUNC_TEXT(ipv6_ospf6_p2xp_neigh_poll_interval)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct in6_addr neighbor = {};
	const char *neighbor_str = NULL;
	long poll_interval = 0;
	const char *poll_interval_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "neighbor")) {
			neighbor_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &neighbor);
		}
		if (!strcmp(argv[_i]->varname, "poll_interval")) {
			poll_interval_str = argv[_i]->arg;
			char *_end;
			poll_interval = strtol(argv[_i]->arg, &_end, 10);
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
	if (!neighbor_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "neighbor_str");
		return CMD_WARNING;
	}
	if (!poll_interval_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "poll_interval_str");
		return CMD_WARNING;
	}

	return ipv6_ospf6_p2xp_neigh_poll_interval_magic(self, vty, argc, argv, no, neighbor, neighbor_str, poll_interval, poll_interval_str);
}

