#ifndef CODESET_SOCKETS_BUFFER_H_H
#define CODESET_SOCKETS_BUFFER_H_H

struct sockets_buffer;
struct sockets_buffer* sockets_buffer_create(unsigned int slotcount);
struct sockets_buffer* sockets_buffer_add(struct sockets_buffer* sockets_buf, int fd, char* ip, unsigned char* buf, int len);
int sockets_buffer_del(struct sockets_buffer* buf, int fd);
int sockets_buffer_destroy(struct sockets_buffer* buf);

int print_cached_message(struct socket* buf);

#endif
