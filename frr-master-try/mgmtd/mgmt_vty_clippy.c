/* show_mgmt_be_adapter => "show mgmt backend-adapter all" */
DEFUN_CMD_FUNC_DECL(show_mgmt_be_adapter)
#define funcdecl_show_mgmt_be_adapter static int show_mgmt_be_adapter_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_show_mgmt_be_adapter;
DEFUN_CMD_FUNC_TEXT(show_mgmt_be_adapter)
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

	return show_mgmt_be_adapter_magic(self, vty, argc, argv);
}

/* show_mgmt_be_xpath_reg => "show mgmt backend-yang-xpath-registry" */
DEFUN_CMD_FUNC_DECL(show_mgmt_be_xpath_reg)
#define funcdecl_show_mgmt_be_xpath_reg static int show_mgmt_be_xpath_reg_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_show_mgmt_be_xpath_reg;
DEFUN_CMD_FUNC_TEXT(show_mgmt_be_xpath_reg)
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

	return show_mgmt_be_xpath_reg_magic(self, vty, argc, argv);
}

/* show_mgmt_fe_adapter => "show mgmt frontend-adapter all [detail$detail]" */
DEFUN_CMD_FUNC_DECL(show_mgmt_fe_adapter)
#define funcdecl_show_mgmt_fe_adapter static int show_mgmt_fe_adapter_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * detail)
funcdecl_show_mgmt_fe_adapter;
DEFUN_CMD_FUNC_TEXT(show_mgmt_fe_adapter)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *detail = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "detail")) {
			detail = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_mgmt_fe_adapter_magic(self, vty, argc, argv, detail);
}

/* mgmt_performance_measurement => "[no] mgmt performance-measurement" */
DEFUN_CMD_FUNC_DECL(mgmt_performance_measurement)
#define funcdecl_mgmt_performance_measurement static int mgmt_performance_measurement_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_mgmt_performance_measurement;
DEFUN_CMD_FUNC_TEXT(mgmt_performance_measurement)
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

	return mgmt_performance_measurement_magic(self, vty, argc, argv, no);
}

/* mgmt_reset_performance_stats => "mgmt reset-statistics" */
DEFUN_CMD_FUNC_DECL(mgmt_reset_performance_stats)
#define funcdecl_mgmt_reset_performance_stats static int mgmt_reset_performance_stats_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_mgmt_reset_performance_stats;
DEFUN_CMD_FUNC_TEXT(mgmt_reset_performance_stats)
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

	return mgmt_reset_performance_stats_magic(self, vty, argc, argv);
}

/* show_mgmt_txn => "show mgmt transaction all" */
DEFUN_CMD_FUNC_DECL(show_mgmt_txn)
#define funcdecl_show_mgmt_txn static int show_mgmt_txn_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_show_mgmt_txn;
DEFUN_CMD_FUNC_TEXT(show_mgmt_txn)
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

	return show_mgmt_txn_magic(self, vty, argc, argv);
}

/* show_mgmt_ds => "show mgmt datastore [all|candidate|operational|running]$dsname" */
DEFUN_CMD_FUNC_DECL(show_mgmt_ds)
#define funcdecl_show_mgmt_ds static int show_mgmt_ds_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * dsname)
funcdecl_show_mgmt_ds;
DEFUN_CMD_FUNC_TEXT(show_mgmt_ds)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *dsname = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "dsname")) {
			dsname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return show_mgmt_ds_magic(self, vty, argc, argv, dsname);
}

/* mgmt_commit => "mgmt commit <check|apply|abort>$type" */
DEFUN_CMD_FUNC_DECL(mgmt_commit)
#define funcdecl_mgmt_commit static int mgmt_commit_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * type)
funcdecl_mgmt_commit;
DEFUN_CMD_FUNC_TEXT(mgmt_commit)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *type = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "type")) {
			type = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!type) {
		vty_out(vty, "Internal CLI error [%s]\n", "type");
		return CMD_WARNING;
	}

	return mgmt_commit_magic(self, vty, argc, argv, type);
}

/* mgmt_create_config_data => "mgmt create-config WORD$path VALUE" */
DEFUN_CMD_FUNC_DECL(mgmt_create_config_data)
#define funcdecl_mgmt_create_config_data static int mgmt_create_config_data_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * path,\
	const char * value)
funcdecl_mgmt_create_config_data;
DEFUN_CMD_FUNC_TEXT(mgmt_create_config_data)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *path = NULL;
	const char *value = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "path")) {
			path = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "value")) {
			value = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!path) {
		vty_out(vty, "Internal CLI error [%s]\n", "path");
		return CMD_WARNING;
	}
	if (!value) {
		vty_out(vty, "Internal CLI error [%s]\n", "value");
		return CMD_WARNING;
	}

	return mgmt_create_config_data_magic(self, vty, argc, argv, path, value);
}

/* mgmt_set_config_data => "mgmt set-config WORD$path VALUE" */
DEFUN_CMD_FUNC_DECL(mgmt_set_config_data)
#define funcdecl_mgmt_set_config_data static int mgmt_set_config_data_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * path,\
	const char * value)
funcdecl_mgmt_set_config_data;
DEFUN_CMD_FUNC_TEXT(mgmt_set_config_data)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *path = NULL;
	const char *value = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "path")) {
			path = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "value")) {
			value = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!path) {
		vty_out(vty, "Internal CLI error [%s]\n", "path");
		return CMD_WARNING;
	}
	if (!value) {
		vty_out(vty, "Internal CLI error [%s]\n", "value");
		return CMD_WARNING;
	}

	return mgmt_set_config_data_magic(self, vty, argc, argv, path, value);
}

/* mgmt_delete_config_data => "mgmt delete-config WORD$path" */
DEFUN_CMD_FUNC_DECL(mgmt_delete_config_data)
#define funcdecl_mgmt_delete_config_data static int mgmt_delete_config_data_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * path)
funcdecl_mgmt_delete_config_data;
DEFUN_CMD_FUNC_TEXT(mgmt_delete_config_data)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *path = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "path")) {
			path = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!path) {
		vty_out(vty, "Internal CLI error [%s]\n", "path");
		return CMD_WARNING;
	}

	return mgmt_delete_config_data_magic(self, vty, argc, argv, path);
}

/* mgmt_remove_config_data => "mgmt remove-config WORD$path" */
DEFUN_CMD_FUNC_DECL(mgmt_remove_config_data)
#define funcdecl_mgmt_remove_config_data static int mgmt_remove_config_data_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * path)
funcdecl_mgmt_remove_config_data;
DEFUN_CMD_FUNC_TEXT(mgmt_remove_config_data)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *path = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "path")) {
			path = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!path) {
		vty_out(vty, "Internal CLI error [%s]\n", "path");
		return CMD_WARNING;
	}

	return mgmt_remove_config_data_magic(self, vty, argc, argv, path);
}

/* mgmt_replace_config_data => "mgmt replace-config WORD$path VALUE" */
DEFUN_CMD_FUNC_DECL(mgmt_replace_config_data)
#define funcdecl_mgmt_replace_config_data static int mgmt_replace_config_data_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * path,\
	const char * value)
funcdecl_mgmt_replace_config_data;
DEFUN_CMD_FUNC_TEXT(mgmt_replace_config_data)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *path = NULL;
	const char *value = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "path")) {
			path = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "value")) {
			value = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!path) {
		vty_out(vty, "Internal CLI error [%s]\n", "path");
		return CMD_WARNING;
	}
	if (!value) {
		vty_out(vty, "Internal CLI error [%s]\n", "value");
		return CMD_WARNING;
	}

	return mgmt_replace_config_data_magic(self, vty, argc, argv, path, value);
}

/* mgmt_edit => "mgmt edit {create|delete|merge|replace|remove}$op XPATH [json|xml]$fmt [lock$lock] [commit$commit] [DATA]" */
DEFUN_CMD_FUNC_DECL(mgmt_edit)
#define funcdecl_mgmt_edit static int mgmt_edit_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * op,\
	const char * xpath,\
	const char * fmt,\
	const char * lock,\
	const char * commit,\
	const char * data)
funcdecl_mgmt_edit;
DEFUN_CMD_FUNC_TEXT(mgmt_edit)
{
#if 6 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *op = NULL;
	const char *xpath = NULL;
	const char *fmt = NULL;
	const char *lock = NULL;
	const char *commit = NULL;
	const char *data = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "op")) {
			op = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "xpath")) {
			xpath = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "fmt")) {
			fmt = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "lock")) {
			lock = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "commit")) {
			commit = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "data")) {
			data = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!op) {
		vty_out(vty, "Internal CLI error [%s]\n", "op");
		return CMD_WARNING;
	}
	if (!xpath) {
		vty_out(vty, "Internal CLI error [%s]\n", "xpath");
		return CMD_WARNING;
	}

	return mgmt_edit_magic(self, vty, argc, argv, op, xpath, fmt, lock, commit, data);
}

/* mgmt_rpc => "mgmt rpc XPATH [json|xml]$fmt [DATA]" */
DEFUN_CMD_FUNC_DECL(mgmt_rpc)
#define funcdecl_mgmt_rpc static int mgmt_rpc_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * xpath,\
	const char * fmt,\
	const char * data)
funcdecl_mgmt_rpc;
DEFUN_CMD_FUNC_TEXT(mgmt_rpc)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *xpath = NULL;
	const char *fmt = NULL;
	const char *data = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "xpath")) {
			xpath = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "fmt")) {
			fmt = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "data")) {
			data = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!xpath) {
		vty_out(vty, "Internal CLI error [%s]\n", "xpath");
		return CMD_WARNING;
	}

	return mgmt_rpc_magic(self, vty, argc, argv, xpath, fmt, data);
}

/* show_mgmt_get_config => "show mgmt get-config [candidate|operational|running]$dsname WORD$path" */
DEFUN_CMD_FUNC_DECL(show_mgmt_get_config)
#define funcdecl_show_mgmt_get_config static int show_mgmt_get_config_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * dsname,\
	const char * path)
funcdecl_show_mgmt_get_config;
DEFUN_CMD_FUNC_TEXT(show_mgmt_get_config)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *dsname = NULL;
	const char *path = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "dsname")) {
			dsname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "path")) {
			path = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!path) {
		vty_out(vty, "Internal CLI error [%s]\n", "path");
		return CMD_WARNING;
	}

	return show_mgmt_get_config_magic(self, vty, argc, argv, dsname, path);
}

/* show_mgmt_get_data => "show mgmt get-data WORD$path [datastore <candidate|running|operational>$ds] [with-config|only-config]$content [exact]$exact [with-defaults <trim|all-tag|all>$wd] [json|xml]$fmt" */
DEFUN_CMD_FUNC_DECL(show_mgmt_get_data)
#define funcdecl_show_mgmt_get_data static int show_mgmt_get_data_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * path,\
	const char * ds,\
	const char * content,\
	const char * exact,\
	const char * wd,\
	const char * fmt)
funcdecl_show_mgmt_get_data;
DEFUN_CMD_FUNC_TEXT(show_mgmt_get_data)
{
#if 6 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *path = NULL;
	const char *ds = NULL;
	const char *content = NULL;
	const char *exact = NULL;
	const char *wd = NULL;
	const char *fmt = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "path")) {
			path = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "ds")) {
			ds = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "content")) {
			content = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "exact")) {
			exact = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "wd")) {
			wd = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "fmt")) {
			fmt = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!path) {
		vty_out(vty, "Internal CLI error [%s]\n", "path");
		return CMD_WARNING;
	}

	return show_mgmt_get_data_magic(self, vty, argc, argv, path, ds, content, exact, wd, fmt);
}

/* show_mgmt_dump_data => "show mgmt datastore-contents [candidate|operational|running]$dsname [xpath WORD$path] [file WORD$filepath] <json|xml>$fmt" */
DEFUN_CMD_FUNC_DECL(show_mgmt_dump_data)
#define funcdecl_show_mgmt_dump_data static int show_mgmt_dump_data_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * dsname,\
	const char * path,\
	const char * filepath,\
	const char * fmt)
funcdecl_show_mgmt_dump_data;
DEFUN_CMD_FUNC_TEXT(show_mgmt_dump_data)
{
#if 4 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *dsname = NULL;
	const char *path = NULL;
	const char *filepath = NULL;
	const char *fmt = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "dsname")) {
			dsname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "path")) {
			path = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "filepath")) {
			filepath = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "fmt")) {
			fmt = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!fmt) {
		vty_out(vty, "Internal CLI error [%s]\n", "fmt");
		return CMD_WARNING;
	}

	return show_mgmt_dump_data_magic(self, vty, argc, argv, dsname, path, filepath, fmt);
}

/* show_mgmt_map_xpath => "show mgmt yang-xpath-subscription WORD$path" */
DEFUN_CMD_FUNC_DECL(show_mgmt_map_xpath)
#define funcdecl_show_mgmt_map_xpath static int show_mgmt_map_xpath_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * path)
funcdecl_show_mgmt_map_xpath;
DEFUN_CMD_FUNC_TEXT(show_mgmt_map_xpath)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *path = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "path")) {
			path = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!path) {
		vty_out(vty, "Internal CLI error [%s]\n", "path");
		return CMD_WARNING;
	}

	return show_mgmt_map_xpath_magic(self, vty, argc, argv, path);
}

/* mgmt_load_config => "mgmt load-config WORD$filepath <merge|replace>$type" */
DEFUN_CMD_FUNC_DECL(mgmt_load_config)
#define funcdecl_mgmt_load_config static int mgmt_load_config_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * filepath,\
	const char * type)
funcdecl_mgmt_load_config;
DEFUN_CMD_FUNC_TEXT(mgmt_load_config)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *filepath = NULL;
	const char *type = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "filepath")) {
			filepath = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "type")) {
			type = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!filepath) {
		vty_out(vty, "Internal CLI error [%s]\n", "filepath");
		return CMD_WARNING;
	}
	if (!type) {
		vty_out(vty, "Internal CLI error [%s]\n", "type");
		return CMD_WARNING;
	}

	return mgmt_load_config_magic(self, vty, argc, argv, filepath, type);
}

/* mgmt_save_config => "mgmt save-config <candidate|running>$dsname WORD$filepath" */
DEFUN_CMD_FUNC_DECL(mgmt_save_config)
#define funcdecl_mgmt_save_config static int mgmt_save_config_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * dsname,\
	const char * filepath)
funcdecl_mgmt_save_config;
DEFUN_CMD_FUNC_TEXT(mgmt_save_config)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *dsname = NULL;
	const char *filepath = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "dsname")) {
			dsname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "filepath")) {
			filepath = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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
	if (!dsname) {
		vty_out(vty, "Internal CLI error [%s]\n", "dsname");
		return CMD_WARNING;
	}
	if (!filepath) {
		vty_out(vty, "Internal CLI error [%s]\n", "filepath");
		return CMD_WARNING;
	}

	return mgmt_save_config_magic(self, vty, argc, argv, dsname, filepath);
}

/* show_mgmt_cmt_hist => "show mgmt commit-history" */
DEFUN_CMD_FUNC_DECL(show_mgmt_cmt_hist)
#define funcdecl_show_mgmt_cmt_hist static int show_mgmt_cmt_hist_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_show_mgmt_cmt_hist;
DEFUN_CMD_FUNC_TEXT(show_mgmt_cmt_hist)
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

	return show_mgmt_cmt_hist_magic(self, vty, argc, argv);
}

/* mgmt_rollback => "mgmt rollback <commit-id WORD$commit | last [(1-10)]$last>" */
DEFUN_CMD_FUNC_DECL(mgmt_rollback)
#define funcdecl_mgmt_rollback static int mgmt_rollback_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * commit,\
	long last,\
	const char * last_str __attribute__ ((unused)))
funcdecl_mgmt_rollback;
DEFUN_CMD_FUNC_TEXT(mgmt_rollback)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *commit = NULL;
	long last = 0;
	const char *last_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "commit")) {
			commit = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "last")) {
			last_str = argv[_i]->arg;
			char *_end;
			last = strtol(argv[_i]->arg, &_end, 10);
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

	return mgmt_rollback_magic(self, vty, argc, argv, commit, last, last_str);
}

/* show_debugging_mgmt => "show debugging [mgmt]" */
DEFUN_CMD_FUNC_DECL(show_debugging_mgmt)
#define funcdecl_show_debugging_mgmt static int show_debugging_mgmt_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_show_debugging_mgmt;
DEFUN_CMD_FUNC_TEXT(show_debugging_mgmt)
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

	return show_debugging_mgmt_magic(self, vty, argc, argv);
}

/* debug_mgmt => "[no$no] debug mgmt {backend$be|datastore$ds|frontend$fe|transaction$txn}" */
DEFUN_CMD_FUNC_DECL(debug_mgmt)
#define funcdecl_debug_mgmt static int debug_mgmt_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * be,\
	const char * ds,\
	const char * fe,\
	const char * txn)
funcdecl_debug_mgmt;
DEFUN_CMD_FUNC_TEXT(debug_mgmt)
{
#if 5 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *be = NULL;
	const char *ds = NULL;
	const char *fe = NULL;
	const char *txn = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "be")) {
			be = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "ds")) {
			ds = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "fe")) {
			fe = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "txn")) {
			txn = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return debug_mgmt_magic(self, vty, argc, argv, no, be, ds, fe, txn);
}

