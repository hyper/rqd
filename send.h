#ifndef __SEND_H
#define __SEND_H

// these routines are used to send Risp based packets to a node.
// they will generally attempt to send to the socket directly, but if the
// socket is busy, then it will store it in a buffer, and set a WRITE-event.

#include "message.h"
#include "node.h"



void sendConsumeReply(node_t *node, char *queue, int qid);
void sendMessage(node_t *node, message_t *msg);
void sendReply(node_t *node, message_t *msg);
void sendDelivered(node_t *node, message_id_t msgid);
void sendUndelivered(node_t *node, message_id_t msgid);
void sendClosing(node_t *node);
void sendConsume(node_t *node, char *queue, short int max, unsigned char priority, short int exclusive);

void sendPing(node_t *node);
void sendPong(node_t *node);

#endif
