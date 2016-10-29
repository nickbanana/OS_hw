#ifndef __MAILBOX_H__
#define __MAILBOX_H__
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>

mailbox_t mailbox_open(int id);
int mailbox_unlink(int id);
int mailbox_close(mailbox_t box);
int mailbox_send(mailbox_t box, mail_t *mail);
int mailbox_recv(mailbox_t box, mail_t *mail);
int mailbox_check_empty(mailbox_t box);
int mailbox_check_full(mailbox_t box);
#endif
