/* show_srv6_manager => "show segment-routing srv6 manager [json]" */
DEFUN_CMD_FUNC_DECL(show_srv6_manager)
#define funcdecl_show_srv6_manager static int show_srv6_manager_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_show_srv6_manager;
DEFUN_CMD_FUNC_TEXT(show_srv6_manager)
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

	return show_srv6_manager_magic(self, vty, argc, argv);
}

/* locator_prefix => "prefix X:X::X:X/M$prefix [block-len (16-64)$block_bit_len]  	        [node-len (16-64)$node_bit_len] [func-bits (0-64)$func_bit_len]" */
DEFUN_CMD_FUNC_DECL(locator_prefix)
#define funcdecl_locator_prefix static int locator_prefix_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const struct prefix_ipv6 * prefix,\
	const char * prefix_str __attribute__ ((unused)),\
	long block_bit_len,\
	const char * block_bit_len_str __attribute__ ((unused)),\
	long node_bit_len,\
	const char * node_bit_len_str __attribute__ ((unused)),\
	long func_bit_len,\
	const char * func_bit_len_str __attribute__ ((unused)))
funcdecl_locator_prefix;
DEFUN_CMD_FUNC_TEXT(locator_prefix)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct prefix_ipv6 prefix = { };
	const char *prefix_str = NULL;
	long block_bit_len = 0;
	const char *block_bit_len_str = NULL;
	long node_bit_len = 0;
	const char *node_bit_len_str = NULL;
	long func_bit_len = 0;
	const char *func_bit_len_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix_ipv6(argv[_i]->arg, &prefix);
		}
		if (!strcmp(argv[_i]->varname, "block_bit_len")) {
			block_bit_len_str = argv[_i]->arg;
			char *_end;
			block_bit_len = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "node_bit_len")) {
			node_bit_len_str = argv[_i]->arg;
			char *_end;
			node_bit_len = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "func_bit_len")) {
			func_bit_len_str = argv[_i]->arg;
			char *_end;
			func_bit_len = strtol(argv[_i]->arg, &_end, 10);
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
	if (!prefix_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "prefix_str");
		return CMD_WARNING;
	}

	return locator_prefix_magic(self, vty, argc, argv, &prefix, prefix_str, block_bit_len, block_bit_len_str, node_bit_len, node_bit_len_str, func_bit_len, func_bit_len_str);
}

/* locator_behavior => "[no] behavior usid" */
DEFUN_CMD_FUNC_DECL(locator_behavior)
#define funcdecl_locator_behavior static int locator_behavior_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_locator_behavior;
DEFUN_CMD_FUNC_TEXT(locator_behavior)
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

	return locator_behavior_magic(self, vty, argc, argv, no);
}

/* locator_sid_format => "format <usid-f3216|uncompressed-f4024>$format" */
DEFUN_CMD_FUNC_DECL(locator_sid_format)
#define funcdecl_locator_sid_format static int locator_sid_format_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * format)
funcdecl_locator_sid_format;
DEFUN_CMD_FUNC_TEXT(locator_sid_format)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *format = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "format")) {
			format = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!format) {
		vty_out(vty, "Internal CLI error [%s]\n", "format");
		return CMD_WARNING;
	}

	return locator_sid_format_magic(self, vty, argc, argv, format);
}

/* no_locator_sid_format => "no format [WORD]" */
DEFUN_CMD_FUNC_DECL(no_locator_sid_format)
#define funcdecl_no_locator_sid_format static int no_locator_sid_format_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * format)
funcdecl_no_locator_sid_format;
DEFUN_CMD_FUNC_TEXT(no_locator_sid_format)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *format = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "format")) {
			format = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return no_locator_sid_format_magic(self, vty, argc, argv, format);
}

/* srv6_src_addr => "source-address X:X::X:X$encap_src_addr" */
DEFUN_CMD_FUNC_DECL(srv6_src_addr)
#define funcdecl_srv6_src_addr static int srv6_src_addr_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in6_addr encap_src_addr,\
	const char * encap_src_addr_str __attribute__ ((unused)))
funcdecl_srv6_src_addr;
DEFUN_CMD_FUNC_TEXT(srv6_src_addr)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in6_addr encap_src_addr = {};
	const char *encap_src_addr_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "encap_src_addr")) {
			encap_src_addr_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &encap_src_addr);
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
	if (!encap_src_addr_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "encap_src_addr_str");
		return CMD_WARNING;
	}

	return srv6_src_addr_magic(self, vty, argc, argv, encap_src_addr, encap_src_addr_str);
}

/* no_srv6_src_addr => "no source-address [X:X::X:X$encap_src_addr]" */
DEFUN_CMD_FUNC_DECL(no_srv6_src_addr)
#define funcdecl_no_srv6_src_addr static int no_srv6_src_addr_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	struct in6_addr encap_src_addr,\
	const char * encap_src_addr_str __attribute__ ((unused)))
funcdecl_no_srv6_src_addr;
DEFUN_CMD_FUNC_TEXT(no_srv6_src_addr)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	struct in6_addr encap_src_addr = {};
	const char *encap_src_addr_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "encap_src_addr")) {
			encap_src_addr_str = argv[_i]->arg;
			_fail = !inet_pton(AF_INET6, argv[_i]->arg, &encap_src_addr);
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

	return no_srv6_src_addr_magic(self, vty, argc, argv, encap_src_addr, encap_src_addr_str);
}

/* srv6_sid_format_usid_lib => "local-id-block start (0-4294967295)$start" */
DEFUN_CMD_FUNC_DECL(srv6_sid_format_usid_lib)
#define funcdecl_srv6_sid_format_usid_lib static int srv6_sid_format_usid_lib_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long start,\
	const char * start_str __attribute__ ((unused)))
funcdecl_srv6_sid_format_usid_lib;
DEFUN_CMD_FUNC_TEXT(srv6_sid_format_usid_lib)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long start = 0;
	const char *start_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "start")) {
			start_str = argv[_i]->arg;
			char *_end;
			start = strtol(argv[_i]->arg, &_end, 10);
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
	if (!start_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "start_str");
		return CMD_WARNING;
	}

	return srv6_sid_format_usid_lib_magic(self, vty, argc, argv, start, start_str);
}

/* no_srv6_sid_format_usid_lib => "no local-id-block [start (0-4294967295)]" */
DEFUN_CMD_FUNC_DECL(no_srv6_sid_format_usid_lib)
#define funcdecl_no_srv6_sid_format_usid_lib static int no_srv6_sid_format_usid_lib_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long start,\
	const char * start_str __attribute__ ((unused)))
funcdecl_no_srv6_sid_format_usid_lib;
DEFUN_CMD_FUNC_TEXT(no_srv6_sid_format_usid_lib)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long start = 0;
	const char *start_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "start")) {
			start_str = argv[_i]->arg;
			char *_end;
			start = strtol(argv[_i]->arg, &_end, 10);
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

	return no_srv6_sid_format_usid_lib_magic(self, vty, argc, argv, start, start_str);
}

/* srv6_sid_format_usid_lib_explicit => "local-id-block explicit start (0-4294967295)$start end (0-4294967295)$end" */
DEFUN_CMD_FUNC_DECL(srv6_sid_format_usid_lib_explicit)
#define funcdecl_srv6_sid_format_usid_lib_explicit static int srv6_sid_format_usid_lib_explicit_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long start,\
	const char * start_str __attribute__ ((unused)),\
	long end,\
	const char * end_str __attribute__ ((unused)))
funcdecl_srv6_sid_format_usid_lib_explicit;
DEFUN_CMD_FUNC_TEXT(srv6_sid_format_usid_lib_explicit)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
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
	if (!start_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "start_str");
		return CMD_WARNING;
	}
	if (!end_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "end_str");
		return CMD_WARNING;
	}

	return srv6_sid_format_usid_lib_explicit_magic(self, vty, argc, argv, start, start_str, end, end_str);
}

/* no_srv6_sid_format_usid_lib_explicit => "no local-id-block explicit [start (0-4294967295) end (0-4294967295)]" */
DEFUN_CMD_FUNC_DECL(no_srv6_sid_format_usid_lib_explicit)
#define funcdecl_no_srv6_sid_format_usid_lib_explicit static int no_srv6_sid_format_usid_lib_explicit_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long start,\
	const char * start_str __attribute__ ((unused)),\
	long end,\
	const char * end_str __attribute__ ((unused)))
funcdecl_no_srv6_sid_format_usid_lib_explicit;
DEFUN_CMD_FUNC_TEXT(no_srv6_sid_format_usid_lib_explicit)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
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

	return no_srv6_sid_format_usid_lib_explicit_magic(self, vty, argc, argv, start, start_str, end, end_str);
}

/* srv6_sid_format_usid_wlib => "wide-local-id-block start (0-4294967295)$start end (0-4294967295)$end" */
DEFUN_CMD_FUNC_DECL(srv6_sid_format_usid_wlib)
#define funcdecl_srv6_sid_format_usid_wlib static int srv6_sid_format_usid_wlib_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long start,\
	const char * start_str __attribute__ ((unused)),\
	long end,\
	const char * end_str __attribute__ ((unused)))
funcdecl_srv6_sid_format_usid_wlib;
DEFUN_CMD_FUNC_TEXT(srv6_sid_format_usid_wlib)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
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
	if (!start_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "start_str");
		return CMD_WARNING;
	}
	if (!end_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "end_str");
		return CMD_WARNING;
	}

	return srv6_sid_format_usid_wlib_magic(self, vty, argc, argv, start, start_str, end, end_str);
}

/* no_srv6_sid_format_usid_wlib => "no wide-local-id-block [start (0-4294967295) end (0-4294967295)]" */
DEFUN_CMD_FUNC_DECL(no_srv6_sid_format_usid_wlib)
#define funcdecl_no_srv6_sid_format_usid_wlib static int no_srv6_sid_format_usid_wlib_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long start,\
	const char * start_str __attribute__ ((unused)),\
	long end,\
	const char * end_str __attribute__ ((unused)))
funcdecl_no_srv6_sid_format_usid_wlib;
DEFUN_CMD_FUNC_TEXT(no_srv6_sid_format_usid_wlib)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
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

	return no_srv6_sid_format_usid_wlib_magic(self, vty, argc, argv, start, start_str, end, end_str);
}

/* srv6_sid_format_usid_wide_lib_explicit => "wide-local-id-block explicit start (0-4294967295)$start" */
DEFUN_CMD_FUNC_DECL(srv6_sid_format_usid_wide_lib_explicit)
#define funcdecl_srv6_sid_format_usid_wide_lib_explicit static int srv6_sid_format_usid_wide_lib_explicit_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long start,\
	const char * start_str __attribute__ ((unused)))
funcdecl_srv6_sid_format_usid_wide_lib_explicit;
DEFUN_CMD_FUNC_TEXT(srv6_sid_format_usid_wide_lib_explicit)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long start = 0;
	const char *start_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "start")) {
			start_str = argv[_i]->arg;
			char *_end;
			start = strtol(argv[_i]->arg, &_end, 10);
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
	if (!start_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "start_str");
		return CMD_WARNING;
	}

	return srv6_sid_format_usid_wide_lib_explicit_magic(self, vty, argc, argv, start, start_str);
}

/* no_srv6_sid_format_usid_wide_lib_explicit => "no wide-local-id-block explicit [start (0-4294967295)]" */
DEFUN_CMD_FUNC_DECL(no_srv6_sid_format_usid_wide_lib_explicit)
#define funcdecl_no_srv6_sid_format_usid_wide_lib_explicit static int no_srv6_sid_format_usid_wide_lib_explicit_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long start,\
	const char * start_str __attribute__ ((unused)))
funcdecl_no_srv6_sid_format_usid_wide_lib_explicit;
DEFUN_CMD_FUNC_TEXT(no_srv6_sid_format_usid_wide_lib_explicit)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long start = 0;
	const char *start_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "start")) {
			start_str = argv[_i]->arg;
			char *_end;
			start = strtol(argv[_i]->arg, &_end, 10);
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

	return no_srv6_sid_format_usid_wide_lib_explicit_magic(self, vty, argc, argv, start, start_str);
}

/* srv6_sid_format_explicit => "explicit start (0-4294967295)$start" */
DEFUN_CMD_FUNC_DECL(srv6_sid_format_explicit)
#define funcdecl_srv6_sid_format_explicit static int srv6_sid_format_explicit_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long start,\
	const char * start_str __attribute__ ((unused)))
funcdecl_srv6_sid_format_explicit;
DEFUN_CMD_FUNC_TEXT(srv6_sid_format_explicit)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long start = 0;
	const char *start_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "start")) {
			start_str = argv[_i]->arg;
			char *_end;
			start = strtol(argv[_i]->arg, &_end, 10);
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
	if (!start_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "start_str");
		return CMD_WARNING;
	}

	return srv6_sid_format_explicit_magic(self, vty, argc, argv, start, start_str);
}

/* no_srv6_sid_format_explicit => "no explicit [start (0-4294967295)$start]" */
DEFUN_CMD_FUNC_DECL(no_srv6_sid_format_explicit)
#define funcdecl_no_srv6_sid_format_explicit static int no_srv6_sid_format_explicit_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long start,\
	const char * start_str __attribute__ ((unused)))
funcdecl_no_srv6_sid_format_explicit;
DEFUN_CMD_FUNC_TEXT(no_srv6_sid_format_explicit)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long start = 0;
	const char *start_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "start")) {
			start_str = argv[_i]->arg;
			char *_end;
			start = strtol(argv[_i]->arg, &_end, 10);
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

	return no_srv6_sid_format_explicit_magic(self, vty, argc, argv, start, start_str);
}

