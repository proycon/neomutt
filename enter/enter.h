/**
 * @file
 * Enter buffer
 *
 * @authors
 * Copyright (C) 2022 Richard Russon <rich@flatcap.org>
 *
 * @copyright
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 2 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MUTT_ENTER_ENTER_H
#define MUTT_ENTER_ENTER_H

struct EnterState;

int editor_backspace      (struct EnterState *es);
int editor_backward_char  (struct EnterState *es);
int editor_backward_word  (struct EnterState *es);
int editor_bol            (struct EnterState *es);
int editor_capitalize_word(struct EnterState *es);
int editor_delete_char    (struct EnterState *es);
int editor_downcase_word  (struct EnterState *es);
int editor_eol            (struct EnterState *es);
int editor_forward_char   (struct EnterState *es);
int editor_forward_word   (struct EnterState *es);
int editor_kill_eol       (struct EnterState *es);
int editor_kill_eow       (struct EnterState *es);
int editor_kill_line      (struct EnterState *es);
int editor_kill_word      (struct EnterState *es);
int editor_mailbox_cycle  (struct EnterState *es);
int editor_quote_char     (struct EnterState *es);
int editor_transpose_chars(struct EnterState *es);
int editor_upcase_word    (struct EnterState *es);

#endif /* MUTT_ENTER_ENTER_H */
