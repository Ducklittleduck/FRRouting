/* key_chain => "key chain WORD" */
DEFUN_CMD_FUNC_DECL(key_chain)
#define funcdecl_key_chain static int key_chain_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * chain)
funcdecl_key_chain;
DEFUN_CMD_FUNC_TEXT(key_chain)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *chain = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "chain")) {
			chain = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!chain) {
		vty_out(vty, "Internal CLI error [%s]\n", "chain");
		return CMD_WARNING;
	}

	return key_chain_magic(self, vty, argc, argv, chain);
}

/* no_key_chain => "no key chain WORD" */
DEFUN_CMD_FUNC_DECL(no_key_chain)
#define funcdecl_no_key_chain static int no_key_chain_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * chain)
funcdecl_no_key_chain;
DEFUN_CMD_FUNC_TEXT(no_key_chain)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *chain = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "chain")) {
			chain = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!chain) {
		vty_out(vty, "Internal CLI error [%s]\n", "chain");
		return CMD_WARNING;
	}

	return no_key_chain_magic(self, vty, argc, argv, chain);
}

/* key => "key (0-2147483647)" */
DEFUN_CMD_FUNC_DECL(key)
#define funcdecl_key static int key_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long key,\
	const char * key_str __attribute__ ((unused)))
funcdecl_key;
DEFUN_CMD_FUNC_TEXT(key)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long key = 0;
	const char *key_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "key")) {
			key_str = argv[_i]->arg;
			char *_end;
			key = strtol(argv[_i]->arg, &_end, 10);
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
	if (!key_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "key_str");
		return CMD_WARNING;
	}

	return key_magic(self, vty, argc, argv, key, key_str);
}

/* no_key => "no key (0-2147483647)" */
DEFUN_CMD_FUNC_DECL(no_key)
#define funcdecl_no_key static int no_key_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long key,\
	const char * key_str __attribute__ ((unused)))
funcdecl_no_key;
DEFUN_CMD_FUNC_TEXT(no_key)
{
#if 1 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long key = 0;
	const char *key_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "key")) {
			key_str = argv[_i]->arg;
			char *_end;
			key = strtol(argv[_i]->arg, &_end, 10);
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
	if (!key_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "key_str");
		return CMD_WARNING;
	}

	return no_key_magic(self, vty, argc, argv, key, key_str);
}

/* key_string => "key-string LINE" */
DEFUN_CMD_FUNC_DECL(key_string)
#define funcdecl_key_string static int key_string_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * line)
funcdecl_key_string;
DEFUN_CMD_FUNC_TEXT(key_string)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *line = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "line")) {
			line = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!line) {
		vty_out(vty, "Internal CLI error [%s]\n", "line");
		return CMD_WARNING;
	}

	return key_string_magic(self, vty, argc, argv, line);
}

/* no_key_string => "no key-string [LINE]" */
DEFUN_CMD_FUNC_DECL(no_key_string)
#define funcdecl_no_key_string static int no_key_string_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * line)
funcdecl_no_key_string;
DEFUN_CMD_FUNC_TEXT(no_key_string)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *line = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "line")) {
			line = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return no_key_string_magic(self, vty, argc, argv, line);
}

/* cryptographic_algorithm => "cryptographic-algorithm <md5|hmac-sha-1|hmac-sha-256|hmac-sha-384|hmac-sha-512>$algo" */
DEFUN_CMD_FUNC_DECL(cryptographic_algorithm)
#define funcdecl_cryptographic_algorithm static int cryptographic_algorithm_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * algo)
funcdecl_cryptographic_algorithm;
DEFUN_CMD_FUNC_TEXT(cryptographic_algorithm)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *algo = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "algo")) {
			algo = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!algo) {
		vty_out(vty, "Internal CLI error [%s]\n", "algo");
		return CMD_WARNING;
	}

	return cryptographic_algorithm_magic(self, vty, argc, argv, algo);
}

/* no_cryptographic_algorithm => "no cryptographic-algorithm [<md5|hmac-sha-1|hmac-sha-256|hmac-sha-384|hmac-sha-512>$algo]" */
DEFUN_CMD_FUNC_DECL(no_cryptographic_algorithm)
#define funcdecl_no_cryptographic_algorithm static int no_cryptographic_algorithm_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * algo)
funcdecl_no_cryptographic_algorithm;
DEFUN_CMD_FUNC_TEXT(no_cryptographic_algorithm)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *algo = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "algo")) {
			algo = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return no_cryptographic_algorithm_magic(self, vty, argc, argv, algo);
}

/* accept_lifetime_day_month_day_month => "accept-lifetime HH:MM:SS (1-31) MONTH (1993-2035) HH:MM:SS (1-31) MONTH (1993-2035)" */
DEFUN_CMD_FUNC_DECL(accept_lifetime_day_month_day_month)
#define funcdecl_accept_lifetime_day_month_day_month static int accept_lifetime_day_month_day_month_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * hh_mm_ss,\
	const char * month)
funcdecl_accept_lifetime_day_month_day_month;
DEFUN_CMD_FUNC_TEXT(accept_lifetime_day_month_day_month)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *hh_mm_ss = NULL;
	const char *month = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "hh_mm_ss")) {
			hh_mm_ss = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "month")) {
			month = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!hh_mm_ss) {
		vty_out(vty, "Internal CLI error [%s]\n", "hh_mm_ss");
		return CMD_WARNING;
	}
	if (!month) {
		vty_out(vty, "Internal CLI error [%s]\n", "month");
		return CMD_WARNING;
	}

	return accept_lifetime_day_month_day_month_magic(self, vty, argc, argv, hh_mm_ss, month);
}

/* accept_lifetime_day_month_month_day => "accept-lifetime HH:MM:SS (1-31) MONTH (1993-2035) HH:MM:SS MONTH (1-31) (1993-2035)" */
DEFUN_CMD_FUNC_DECL(accept_lifetime_day_month_month_day)
#define funcdecl_accept_lifetime_day_month_month_day static int accept_lifetime_day_month_month_day_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * hh_mm_ss,\
	const char * month)
funcdecl_accept_lifetime_day_month_month_day;
DEFUN_CMD_FUNC_TEXT(accept_lifetime_day_month_month_day)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *hh_mm_ss = NULL;
	const char *month = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "hh_mm_ss")) {
			hh_mm_ss = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "month")) {
			month = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!hh_mm_ss) {
		vty_out(vty, "Internal CLI error [%s]\n", "hh_mm_ss");
		return CMD_WARNING;
	}
	if (!month) {
		vty_out(vty, "Internal CLI error [%s]\n", "month");
		return CMD_WARNING;
	}

	return accept_lifetime_day_month_month_day_magic(self, vty, argc, argv, hh_mm_ss, month);
}

/* accept_lifetime_month_day_day_month => "accept-lifetime HH:MM:SS MONTH (1-31) (1993-2035) HH:MM:SS (1-31) MONTH (1993-2035)" */
DEFUN_CMD_FUNC_DECL(accept_lifetime_month_day_day_month)
#define funcdecl_accept_lifetime_month_day_day_month static int accept_lifetime_month_day_day_month_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * hh_mm_ss,\
	const char * month)
funcdecl_accept_lifetime_month_day_day_month;
DEFUN_CMD_FUNC_TEXT(accept_lifetime_month_day_day_month)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *hh_mm_ss = NULL;
	const char *month = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "hh_mm_ss")) {
			hh_mm_ss = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "month")) {
			month = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!hh_mm_ss) {
		vty_out(vty, "Internal CLI error [%s]\n", "hh_mm_ss");
		return CMD_WARNING;
	}
	if (!month) {
		vty_out(vty, "Internal CLI error [%s]\n", "month");
		return CMD_WARNING;
	}

	return accept_lifetime_month_day_day_month_magic(self, vty, argc, argv, hh_mm_ss, month);
}

/* accept_lifetime_month_day_month_day => "accept-lifetime HH:MM:SS MONTH (1-31) (1993-2035) HH:MM:SS MONTH (1-31) (1993-2035)" */
DEFUN_CMD_FUNC_DECL(accept_lifetime_month_day_month_day)
#define funcdecl_accept_lifetime_month_day_month_day static int accept_lifetime_month_day_month_day_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * hh_mm_ss,\
	const char * month)
funcdecl_accept_lifetime_month_day_month_day;
DEFUN_CMD_FUNC_TEXT(accept_lifetime_month_day_month_day)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *hh_mm_ss = NULL;
	const char *month = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "hh_mm_ss")) {
			hh_mm_ss = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "month")) {
			month = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!hh_mm_ss) {
		vty_out(vty, "Internal CLI error [%s]\n", "hh_mm_ss");
		return CMD_WARNING;
	}
	if (!month) {
		vty_out(vty, "Internal CLI error [%s]\n", "month");
		return CMD_WARNING;
	}

	return accept_lifetime_month_day_month_day_magic(self, vty, argc, argv, hh_mm_ss, month);
}

/* accept_lifetime_infinite_day_month => "accept-lifetime HH:MM:SS (1-31) MONTH (1993-2035) infinite" */
DEFUN_CMD_FUNC_DECL(accept_lifetime_infinite_day_month)
#define funcdecl_accept_lifetime_infinite_day_month static int accept_lifetime_infinite_day_month_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * hh_mm_ss,\
	const char * month)
funcdecl_accept_lifetime_infinite_day_month;
DEFUN_CMD_FUNC_TEXT(accept_lifetime_infinite_day_month)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *hh_mm_ss = NULL;
	const char *month = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "hh_mm_ss")) {
			hh_mm_ss = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "month")) {
			month = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!hh_mm_ss) {
		vty_out(vty, "Internal CLI error [%s]\n", "hh_mm_ss");
		return CMD_WARNING;
	}
	if (!month) {
		vty_out(vty, "Internal CLI error [%s]\n", "month");
		return CMD_WARNING;
	}

	return accept_lifetime_infinite_day_month_magic(self, vty, argc, argv, hh_mm_ss, month);
}

/* accept_lifetime_infinite_month_day => "accept-lifetime HH:MM:SS MONTH (1-31) (1993-2035) infinite" */
DEFUN_CMD_FUNC_DECL(accept_lifetime_infinite_month_day)
#define funcdecl_accept_lifetime_infinite_month_day static int accept_lifetime_infinite_month_day_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * hh_mm_ss,\
	const char * month)
funcdecl_accept_lifetime_infinite_month_day;
DEFUN_CMD_FUNC_TEXT(accept_lifetime_infinite_month_day)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *hh_mm_ss = NULL;
	const char *month = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "hh_mm_ss")) {
			hh_mm_ss = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "month")) {
			month = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!hh_mm_ss) {
		vty_out(vty, "Internal CLI error [%s]\n", "hh_mm_ss");
		return CMD_WARNING;
	}
	if (!month) {
		vty_out(vty, "Internal CLI error [%s]\n", "month");
		return CMD_WARNING;
	}

	return accept_lifetime_infinite_month_day_magic(self, vty, argc, argv, hh_mm_ss, month);
}

/* accept_lifetime_duration_day_month => "accept-lifetime HH:MM:SS (1-31) MONTH (1993-2035) duration (1-2147483646)" */
DEFUN_CMD_FUNC_DECL(accept_lifetime_duration_day_month)
#define funcdecl_accept_lifetime_duration_day_month static int accept_lifetime_duration_day_month_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * hh_mm_ss,\
	const char * month,\
	long duration,\
	const char * duration_str __attribute__ ((unused)))
funcdecl_accept_lifetime_duration_day_month;
DEFUN_CMD_FUNC_TEXT(accept_lifetime_duration_day_month)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *hh_mm_ss = NULL;
	const char *month = NULL;
	long duration = 0;
	const char *duration_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "hh_mm_ss")) {
			hh_mm_ss = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "month")) {
			month = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "duration")) {
			duration_str = argv[_i]->arg;
			char *_end;
			duration = strtol(argv[_i]->arg, &_end, 10);
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
	if (!hh_mm_ss) {
		vty_out(vty, "Internal CLI error [%s]\n", "hh_mm_ss");
		return CMD_WARNING;
	}
	if (!month) {
		vty_out(vty, "Internal CLI error [%s]\n", "month");
		return CMD_WARNING;
	}
	if (!duration_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "duration_str");
		return CMD_WARNING;
	}

	return accept_lifetime_duration_day_month_magic(self, vty, argc, argv, hh_mm_ss, month, duration, duration_str);
}

/* accept_lifetime_duration_month_day => "accept-lifetime HH:MM:SS MONTH (1-31) (1993-2035) duration (1-2147483646)" */
DEFUN_CMD_FUNC_DECL(accept_lifetime_duration_month_day)
#define funcdecl_accept_lifetime_duration_month_day static int accept_lifetime_duration_month_day_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * hh_mm_ss,\
	const char * month,\
	long duration,\
	const char * duration_str __attribute__ ((unused)))
funcdecl_accept_lifetime_duration_month_day;
DEFUN_CMD_FUNC_TEXT(accept_lifetime_duration_month_day)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *hh_mm_ss = NULL;
	const char *month = NULL;
	long duration = 0;
	const char *duration_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "hh_mm_ss")) {
			hh_mm_ss = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "month")) {
			month = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "duration")) {
			duration_str = argv[_i]->arg;
			char *_end;
			duration = strtol(argv[_i]->arg, &_end, 10);
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
	if (!hh_mm_ss) {
		vty_out(vty, "Internal CLI error [%s]\n", "hh_mm_ss");
		return CMD_WARNING;
	}
	if (!month) {
		vty_out(vty, "Internal CLI error [%s]\n", "month");
		return CMD_WARNING;
	}
	if (!duration_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "duration_str");
		return CMD_WARNING;
	}

	return accept_lifetime_duration_month_day_magic(self, vty, argc, argv, hh_mm_ss, month, duration, duration_str);
}

/* no_accept_lifetime => "no accept-lifetime" */
DEFUN_CMD_FUNC_DECL(no_accept_lifetime)
#define funcdecl_no_accept_lifetime static int no_accept_lifetime_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_no_accept_lifetime;
DEFUN_CMD_FUNC_TEXT(no_accept_lifetime)
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

	return no_accept_lifetime_magic(self, vty, argc, argv);
}

/* send_lifetime_day_month_day_month => "send-lifetime HH:MM:SS (1-31) MONTH (1993-2035) HH:MM:SS (1-31) MONTH (1993-2035)" */
DEFUN_CMD_FUNC_DECL(send_lifetime_day_month_day_month)
#define funcdecl_send_lifetime_day_month_day_month static int send_lifetime_day_month_day_month_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * hh_mm_ss,\
	const char * month)
funcdecl_send_lifetime_day_month_day_month;
DEFUN_CMD_FUNC_TEXT(send_lifetime_day_month_day_month)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *hh_mm_ss = NULL;
	const char *month = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "hh_mm_ss")) {
			hh_mm_ss = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "month")) {
			month = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!hh_mm_ss) {
		vty_out(vty, "Internal CLI error [%s]\n", "hh_mm_ss");
		return CMD_WARNING;
	}
	if (!month) {
		vty_out(vty, "Internal CLI error [%s]\n", "month");
		return CMD_WARNING;
	}

	return send_lifetime_day_month_day_month_magic(self, vty, argc, argv, hh_mm_ss, month);
}

/* send_lifetime_day_month_month_day => "send-lifetime HH:MM:SS (1-31) MONTH (1993-2035) HH:MM:SS MONTH (1-31) (1993-2035)" */
DEFUN_CMD_FUNC_DECL(send_lifetime_day_month_month_day)
#define funcdecl_send_lifetime_day_month_month_day static int send_lifetime_day_month_month_day_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * hh_mm_ss,\
	const char * month)
funcdecl_send_lifetime_day_month_month_day;
DEFUN_CMD_FUNC_TEXT(send_lifetime_day_month_month_day)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *hh_mm_ss = NULL;
	const char *month = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "hh_mm_ss")) {
			hh_mm_ss = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "month")) {
			month = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!hh_mm_ss) {
		vty_out(vty, "Internal CLI error [%s]\n", "hh_mm_ss");
		return CMD_WARNING;
	}
	if (!month) {
		vty_out(vty, "Internal CLI error [%s]\n", "month");
		return CMD_WARNING;
	}

	return send_lifetime_day_month_month_day_magic(self, vty, argc, argv, hh_mm_ss, month);
}

/* send_lifetime_month_day_day_month => "send-lifetime HH:MM:SS MONTH (1-31) (1993-2035) HH:MM:SS (1-31) MONTH (1993-2035)" */
DEFUN_CMD_FUNC_DECL(send_lifetime_month_day_day_month)
#define funcdecl_send_lifetime_month_day_day_month static int send_lifetime_month_day_day_month_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * hh_mm_ss,\
	const char * month)
funcdecl_send_lifetime_month_day_day_month;
DEFUN_CMD_FUNC_TEXT(send_lifetime_month_day_day_month)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *hh_mm_ss = NULL;
	const char *month = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "hh_mm_ss")) {
			hh_mm_ss = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "month")) {
			month = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!hh_mm_ss) {
		vty_out(vty, "Internal CLI error [%s]\n", "hh_mm_ss");
		return CMD_WARNING;
	}
	if (!month) {
		vty_out(vty, "Internal CLI error [%s]\n", "month");
		return CMD_WARNING;
	}

	return send_lifetime_month_day_day_month_magic(self, vty, argc, argv, hh_mm_ss, month);
}

/* send_lifetime_month_day_month_day => "send-lifetime HH:MM:SS MONTH (1-31) (1993-2035) HH:MM:SS MONTH (1-31) (1993-2035)" */
DEFUN_CMD_FUNC_DECL(send_lifetime_month_day_month_day)
#define funcdecl_send_lifetime_month_day_month_day static int send_lifetime_month_day_month_day_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * hh_mm_ss,\
	const char * month)
funcdecl_send_lifetime_month_day_month_day;
DEFUN_CMD_FUNC_TEXT(send_lifetime_month_day_month_day)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *hh_mm_ss = NULL;
	const char *month = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "hh_mm_ss")) {
			hh_mm_ss = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "month")) {
			month = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!hh_mm_ss) {
		vty_out(vty, "Internal CLI error [%s]\n", "hh_mm_ss");
		return CMD_WARNING;
	}
	if (!month) {
		vty_out(vty, "Internal CLI error [%s]\n", "month");
		return CMD_WARNING;
	}

	return send_lifetime_month_day_month_day_magic(self, vty, argc, argv, hh_mm_ss, month);
}

/* send_lifetime_infinite_day_month => "send-lifetime HH:MM:SS (1-31) MONTH (1993-2035) infinite" */
DEFUN_CMD_FUNC_DECL(send_lifetime_infinite_day_month)
#define funcdecl_send_lifetime_infinite_day_month static int send_lifetime_infinite_day_month_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * hh_mm_ss,\
	const char * month)
funcdecl_send_lifetime_infinite_day_month;
DEFUN_CMD_FUNC_TEXT(send_lifetime_infinite_day_month)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *hh_mm_ss = NULL;
	const char *month = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "hh_mm_ss")) {
			hh_mm_ss = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "month")) {
			month = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!hh_mm_ss) {
		vty_out(vty, "Internal CLI error [%s]\n", "hh_mm_ss");
		return CMD_WARNING;
	}
	if (!month) {
		vty_out(vty, "Internal CLI error [%s]\n", "month");
		return CMD_WARNING;
	}

	return send_lifetime_infinite_day_month_magic(self, vty, argc, argv, hh_mm_ss, month);
}

/* send_lifetime_infinite_month_day => "send-lifetime HH:MM:SS MONTH (1-31) (1993-2035) infinite" */
DEFUN_CMD_FUNC_DECL(send_lifetime_infinite_month_day)
#define funcdecl_send_lifetime_infinite_month_day static int send_lifetime_infinite_month_day_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * hh_mm_ss,\
	const char * month)
funcdecl_send_lifetime_infinite_month_day;
DEFUN_CMD_FUNC_TEXT(send_lifetime_infinite_month_day)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *hh_mm_ss = NULL;
	const char *month = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "hh_mm_ss")) {
			hh_mm_ss = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "month")) {
			month = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!hh_mm_ss) {
		vty_out(vty, "Internal CLI error [%s]\n", "hh_mm_ss");
		return CMD_WARNING;
	}
	if (!month) {
		vty_out(vty, "Internal CLI error [%s]\n", "month");
		return CMD_WARNING;
	}

	return send_lifetime_infinite_month_day_magic(self, vty, argc, argv, hh_mm_ss, month);
}

/* send_lifetime_duration_day_month => "send-lifetime HH:MM:SS (1-31) MONTH (1993-2035) duration (1-2147483646)" */
DEFUN_CMD_FUNC_DECL(send_lifetime_duration_day_month)
#define funcdecl_send_lifetime_duration_day_month static int send_lifetime_duration_day_month_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * hh_mm_ss,\
	const char * month,\
	long duration,\
	const char * duration_str __attribute__ ((unused)))
funcdecl_send_lifetime_duration_day_month;
DEFUN_CMD_FUNC_TEXT(send_lifetime_duration_day_month)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *hh_mm_ss = NULL;
	const char *month = NULL;
	long duration = 0;
	const char *duration_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "hh_mm_ss")) {
			hh_mm_ss = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "month")) {
			month = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "duration")) {
			duration_str = argv[_i]->arg;
			char *_end;
			duration = strtol(argv[_i]->arg, &_end, 10);
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
	if (!hh_mm_ss) {
		vty_out(vty, "Internal CLI error [%s]\n", "hh_mm_ss");
		return CMD_WARNING;
	}
	if (!month) {
		vty_out(vty, "Internal CLI error [%s]\n", "month");
		return CMD_WARNING;
	}
	if (!duration_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "duration_str");
		return CMD_WARNING;
	}

	return send_lifetime_duration_day_month_magic(self, vty, argc, argv, hh_mm_ss, month, duration, duration_str);
}

/* send_lifetime_duration_month_day => "send-lifetime HH:MM:SS MONTH (1-31) (1993-2035) duration (1-2147483646)" */
DEFUN_CMD_FUNC_DECL(send_lifetime_duration_month_day)
#define funcdecl_send_lifetime_duration_month_day static int send_lifetime_duration_month_day_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * hh_mm_ss,\
	const char * month,\
	long duration,\
	const char * duration_str __attribute__ ((unused)))
funcdecl_send_lifetime_duration_month_day;
DEFUN_CMD_FUNC_TEXT(send_lifetime_duration_month_day)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *hh_mm_ss = NULL;
	const char *month = NULL;
	long duration = 0;
	const char *duration_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "hh_mm_ss")) {
			hh_mm_ss = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "month")) {
			month = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "duration")) {
			duration_str = argv[_i]->arg;
			char *_end;
			duration = strtol(argv[_i]->arg, &_end, 10);
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
	if (!hh_mm_ss) {
		vty_out(vty, "Internal CLI error [%s]\n", "hh_mm_ss");
		return CMD_WARNING;
	}
	if (!month) {
		vty_out(vty, "Internal CLI error [%s]\n", "month");
		return CMD_WARNING;
	}
	if (!duration_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "duration_str");
		return CMD_WARNING;
	}

	return send_lifetime_duration_month_day_magic(self, vty, argc, argv, hh_mm_ss, month, duration, duration_str);
}

