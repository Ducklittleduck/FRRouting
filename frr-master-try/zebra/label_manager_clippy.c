/* show_label_table => "show debugging label-table [json$uj]" */
DEFUN_CMD_FUNC_DECL(show_label_table)
#define funcdecl_show_label_table static int show_label_table_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * uj)
funcdecl_show_label_table;
DEFUN_CMD_FUNC_TEXT(show_label_table)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *uj = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

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

	return show_label_table_magic(self, vty, argc, argv, uj);
}

/* mpls_label_dynamic_block => "[no$no] mpls label dynamic-block [(16-1048575)$start (16-1048575)$end]" */
DEFUN_CMD_FUNC_DECL(mpls_label_dynamic_block)
#define funcdecl_mpls_label_dynamic_block static int mpls_label_dynamic_block_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long start,\
	const char * start_str __attribute__ ((unused)),\
	long end,\
	const char * end_str __attribute__ ((unused)))
funcdecl_mpls_label_dynamic_block;
DEFUN_CMD_FUNC_TEXT(mpls_label_dynamic_block)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
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

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
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

	return mpls_label_dynamic_block_magic(self, vty, argc, argv, no, start, start_str, end, end_str);
}

