#if defined(HAVE_RTADV)
/* show_ipv6_nd_ra_if => "show ipv6 nd ra-interfaces [vrf<NAME$vrf_name|all$vrf_all>]" */
DEFUN_CMD_FUNC_DECL(show_ipv6_nd_ra_if)
#define funcdecl_show_ipv6_nd_ra_if static int show_ipv6_nd_ra_if_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_name,\
	const char * vrf_all)
funcdecl_show_ipv6_nd_ra_if;
DEFUN_CMD_FUNC_TEXT(show_ipv6_nd_ra_if)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf_name = NULL;
	const char *vrf_all = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf_name")) {
			vrf_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "vrf_all")) {
			vrf_all = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_ipv6_nd_ra_if_magic(self, vty, argc, argv, vrf_name, vrf_all);
}
#endif

