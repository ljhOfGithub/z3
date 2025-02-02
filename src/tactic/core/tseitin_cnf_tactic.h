/*++
Copyright (c) 2011 Microsoft Corporation

Module Name:

    tseitin_cnf_tactic.h

Abstract:

    Puts an assertion set in CNF.
    Auxiliary variables are used to avoid blowup.

Author:

    Leonardo (leonardo) 2011-12-29

Notes:

--*/
#pragma once

#include "util/params.h"
class ast_manager;
class tactic;

tactic * mk_tseitin_cnf_core_tactic(ast_manager & m, params_ref const & p = params_ref());

tactic * mk_tseitin_cnf_tactic(ast_manager & m, params_ref const & p = params_ref());

/*
  ADD_TACTIC("tseitin-cnf", "convert goal into CNF using tseitin-like encoding (note: quantifiers are ignored).", "mk_tseitin_cnf_tactic(m, p)")
  ADD_TACTIC("tseitin-cnf-core", "convert goal into CNF using tseitin-like encoding (note: quantifiers are ignored). This tactic does not apply required simplifications to the input goal like the tseitin-cnf tactic.", "mk_tseitin_cnf_core_tactic(m, p)")
ADD_TACTIC("tseitin-cnf"， "使用类似tseitin的编码将目标转换为CNF(注意:量词被忽略)。"，"mk_tseitin_cnf_tactic(m, p)")
ADD_TACTIC(" tsetin - CNF -core"， "使用类似tsetin的编码将目标转换为CNF(注意:量词被忽略)。该策略不像tsetin -cnf策略那样对输入目标应用必要的简化。"，"mk_tseitin_cnf_core_tactic(m, p)")
*/

