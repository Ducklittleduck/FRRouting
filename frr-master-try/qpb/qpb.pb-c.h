/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: qpb/qpb.proto */

#ifndef PROTOBUF_C_qpb_2fqpb_2eproto__INCLUDED
#define PROTOBUF_C_qpb_2fqpb_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Qpb__Ipv4Address Qpb__Ipv4Address;
typedef struct _Qpb__Ipv6Address Qpb__Ipv6Address;
typedef struct _Qpb__L3Address Qpb__L3Address;
typedef struct _Qpb__L3Prefix Qpb__L3Prefix;
typedef struct _Qpb__IfIdentifier Qpb__IfIdentifier;


/* --- enums --- */

typedef enum _Qpb__AddressFamily {
  QPB__ADDRESS_FAMILY__UNKNOWN_AF = 0,
  /*
   * IP version 4
   */
  QPB__ADDRESS_FAMILY__IPV4 = 1,
  /*
   * IP version 6
   */
  QPB__ADDRESS_FAMILY__IPV6 = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(QPB__ADDRESS_FAMILY)
} Qpb__AddressFamily;
typedef enum _Qpb__SubAddressFamily {
  QPB__SUB_ADDRESS_FAMILY__UNKNOWN_SAF = 0,
  QPB__SUB_ADDRESS_FAMILY__UNICAST = 1,
  QPB__SUB_ADDRESS_FAMILY__MULTICAST = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(QPB__SUB_ADDRESS_FAMILY)
} Qpb__SubAddressFamily;
typedef enum _Qpb__Protocol {
  QPB__PROTOCOL__UNKNOWN_PROTO = 0,
  QPB__PROTOCOL__LOCAL = 1,
  QPB__PROTOCOL__CONNECTED = 2,
  QPB__PROTOCOL__KERNEL = 3,
  QPB__PROTOCOL__STATIC = 4,
  QPB__PROTOCOL__RIP = 5,
  QPB__PROTOCOL__RIPNG = 6,
  QPB__PROTOCOL__OSPF = 7,
  QPB__PROTOCOL__ISIS = 8,
  QPB__PROTOCOL__BGP = 9,
  QPB__PROTOCOL__OTHER = 10
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(QPB__PROTOCOL)
} Qpb__Protocol;

/* --- messages --- */

/*
 * An IP version 4 address, such as 10.1.1.1.
 */
struct  _Qpb__Ipv4Address
{
  ProtobufCMessage base;
  uint32_t value;
};
#define QPB__IPV4_ADDRESS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&qpb__ipv4_address__descriptor) \
    , 0 }


struct  _Qpb__Ipv6Address
{
  ProtobufCMessage base;
  /*
   * 16 bytes.
   */
  ProtobufCBinaryData bytes;
};
#define QPB__IPV6_ADDRESS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&qpb__ipv6_address__descriptor) \
    , {0,NULL} }


/*
 * An IP version 4 or IP version 6 address.
 */
struct  _Qpb__L3Address
{
  ProtobufCMessage base;
  Qpb__Ipv4Address *v4;
  Qpb__Ipv6Address *v6;
};
#define QPB__L3_ADDRESS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&qpb__l3_address__descriptor) \
    , NULL, NULL }


/*
 * An IP prefix, such as 10.1/16.
 * We use the message below to represent both IPv4 and IPv6 prefixes.
 */
struct  _Qpb__L3Prefix
{
  ProtobufCMessage base;
  uint32_t length;
  ProtobufCBinaryData bytes;
};
#define QPB__L3_PREFIX__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&qpb__l3_prefix__descriptor) \
    , 0, {0,NULL} }


/*
 * Something that identifies an interface on a machine. It can either
 * be a name (for instance, 'eth0') or a number currently.
 */
struct  _Qpb__IfIdentifier
{
  ProtobufCMessage base;
  protobuf_c_boolean has_index;
  uint32_t index;
  char *name;
};
#define QPB__IF_IDENTIFIER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&qpb__if_identifier__descriptor) \
    , 0, 0, NULL }


/* Qpb__Ipv4Address methods */
void   qpb__ipv4_address__init
                     (Qpb__Ipv4Address         *message);
size_t qpb__ipv4_address__get_packed_size
                     (const Qpb__Ipv4Address   *message);
size_t qpb__ipv4_address__pack
                     (const Qpb__Ipv4Address   *message,
                      uint8_t             *out);
size_t qpb__ipv4_address__pack_to_buffer
                     (const Qpb__Ipv4Address   *message,
                      ProtobufCBuffer     *buffer);
Qpb__Ipv4Address *
       qpb__ipv4_address__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   qpb__ipv4_address__free_unpacked
                     (Qpb__Ipv4Address *message,
                      ProtobufCAllocator *allocator);
/* Qpb__Ipv6Address methods */
void   qpb__ipv6_address__init
                     (Qpb__Ipv6Address         *message);
size_t qpb__ipv6_address__get_packed_size
                     (const Qpb__Ipv6Address   *message);
size_t qpb__ipv6_address__pack
                     (const Qpb__Ipv6Address   *message,
                      uint8_t             *out);
size_t qpb__ipv6_address__pack_to_buffer
                     (const Qpb__Ipv6Address   *message,
                      ProtobufCBuffer     *buffer);
Qpb__Ipv6Address *
       qpb__ipv6_address__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   qpb__ipv6_address__free_unpacked
                     (Qpb__Ipv6Address *message,
                      ProtobufCAllocator *allocator);
/* Qpb__L3Address methods */
void   qpb__l3_address__init
                     (Qpb__L3Address         *message);
size_t qpb__l3_address__get_packed_size
                     (const Qpb__L3Address   *message);
size_t qpb__l3_address__pack
                     (const Qpb__L3Address   *message,
                      uint8_t             *out);
size_t qpb__l3_address__pack_to_buffer
                     (const Qpb__L3Address   *message,
                      ProtobufCBuffer     *buffer);
Qpb__L3Address *
       qpb__l3_address__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   qpb__l3_address__free_unpacked
                     (Qpb__L3Address *message,
                      ProtobufCAllocator *allocator);
/* Qpb__L3Prefix methods */
void   qpb__l3_prefix__init
                     (Qpb__L3Prefix         *message);
size_t qpb__l3_prefix__get_packed_size
                     (const Qpb__L3Prefix   *message);
size_t qpb__l3_prefix__pack
                     (const Qpb__L3Prefix   *message,
                      uint8_t             *out);
size_t qpb__l3_prefix__pack_to_buffer
                     (const Qpb__L3Prefix   *message,
                      ProtobufCBuffer     *buffer);
Qpb__L3Prefix *
       qpb__l3_prefix__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   qpb__l3_prefix__free_unpacked
                     (Qpb__L3Prefix *message,
                      ProtobufCAllocator *allocator);
/* Qpb__IfIdentifier methods */
void   qpb__if_identifier__init
                     (Qpb__IfIdentifier         *message);
size_t qpb__if_identifier__get_packed_size
                     (const Qpb__IfIdentifier   *message);
size_t qpb__if_identifier__pack
                     (const Qpb__IfIdentifier   *message,
                      uint8_t             *out);
size_t qpb__if_identifier__pack_to_buffer
                     (const Qpb__IfIdentifier   *message,
                      ProtobufCBuffer     *buffer);
Qpb__IfIdentifier *
       qpb__if_identifier__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   qpb__if_identifier__free_unpacked
                     (Qpb__IfIdentifier *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Qpb__Ipv4Address_Closure)
                 (const Qpb__Ipv4Address *message,
                  void *closure_data);
typedef void (*Qpb__Ipv6Address_Closure)
                 (const Qpb__Ipv6Address *message,
                  void *closure_data);
typedef void (*Qpb__L3Address_Closure)
                 (const Qpb__L3Address *message,
                  void *closure_data);
typedef void (*Qpb__L3Prefix_Closure)
                 (const Qpb__L3Prefix *message,
                  void *closure_data);
typedef void (*Qpb__IfIdentifier_Closure)
                 (const Qpb__IfIdentifier *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    qpb__address_family__descriptor;
extern const ProtobufCEnumDescriptor    qpb__sub_address_family__descriptor;
extern const ProtobufCEnumDescriptor    qpb__protocol__descriptor;
extern const ProtobufCMessageDescriptor qpb__ipv4_address__descriptor;
extern const ProtobufCMessageDescriptor qpb__ipv6_address__descriptor;
extern const ProtobufCMessageDescriptor qpb__l3_address__descriptor;
extern const ProtobufCMessageDescriptor qpb__l3_prefix__descriptor;
extern const ProtobufCMessageDescriptor qpb__if_identifier__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_qpb_2fqpb_2eproto__INCLUDED */
