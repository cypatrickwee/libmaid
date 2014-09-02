# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: controller.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='controller.proto',
  package='maid.proto',
  serialized_pb=_b('\n\x10\x63ontroller.proto\x12\nmaid.proto\"\xbd\x01\n\x0e\x43ontrollerMeta\x12\x14\n\x0cservice_name\x18\x01 \x01(\t\x12\x13\n\x0bmethod_name\x18\x02 \x01(\t\x12\x13\n\x0btransmit_id\x18\x03 \x01(\r\x12\x12\n\x04stub\x18\x04 \x01(\x08:\x04true\x12\x13\n\x0bis_canceled\x18\x05 \x01(\x08\x12\x0e\n\x06\x66\x61iled\x18\x06 \x01(\x08\x12\x12\n\nerror_text\x18\x07 \x01(\t\x12\x0e\n\x06status\x18\x08 \x01(\x05\x12\x0e\n\x06notify\x18\t \x01(\x08')
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_CONTROLLERMETA = _descriptor.Descriptor(
  name='ControllerMeta',
  full_name='maid.proto.ControllerMeta',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='service_name', full_name='maid.proto.ControllerMeta.service_name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='method_name', full_name='maid.proto.ControllerMeta.method_name', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='transmit_id', full_name='maid.proto.ControllerMeta.transmit_id', index=2,
      number=3, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='stub', full_name='maid.proto.ControllerMeta.stub', index=3,
      number=4, type=8, cpp_type=7, label=1,
      has_default_value=True, default_value=True,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='is_canceled', full_name='maid.proto.ControllerMeta.is_canceled', index=4,
      number=5, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='failed', full_name='maid.proto.ControllerMeta.failed', index=5,
      number=6, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='error_text', full_name='maid.proto.ControllerMeta.error_text', index=6,
      number=7, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='status', full_name='maid.proto.ControllerMeta.status', index=7,
      number=8, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='notify', full_name='maid.proto.ControllerMeta.notify', index=8,
      number=9, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=33,
  serialized_end=222,
)

DESCRIPTOR.message_types_by_name['ControllerMeta'] = _CONTROLLERMETA

ControllerMeta = _reflection.GeneratedProtocolMessageType('ControllerMeta', (_message.Message,), dict(
  DESCRIPTOR = _CONTROLLERMETA,
  __module__ = 'controller_pb2'
  # @@protoc_insertion_point(class_scope:maid.proto.ControllerMeta)
  ))
_sym_db.RegisterMessage(ControllerMeta)


# @@protoc_insertion_point(module_scope)
