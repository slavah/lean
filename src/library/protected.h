/*
Copyright (c) 2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include "kernel/environment.h"

namespace lean {
/** \brief Mark \c n as protected, protected declarations are ignored by wildcard 'open' command */
environment add_protected(environment const & env, name const & n);
/** \brief Return true iff \c n was marked as protected in the environment \c n. */
bool is_protected(environment const & env, name const & n);

void initialize_protected();
void finalize_protected();
}
