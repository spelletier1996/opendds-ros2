project('Opendds-ros2', ['c', 'cpp'], version: '0.1.0', meson_version: '>=0.60.0')

cpp = meson.get_compiler('cpp')

# Dependencies
rt            = cpp.find_library('rt')
dl            = cpp.find_library('dl')
opendds       = dependency('OpenDDS', required: false)

idl_compiler = find_program(meson.current_source_dir() + '/idl_compiler.py')
# These are the same for all IDL we want to generate
idl_out_args =  ['@BASENAME@C.h', '@BASENAME@TypeSupportImpl.h', '@BASENAME@TypeSupportImpl.cpp', '@BASENAME@TypeSupportC.cpp']
idl_cmd_args = [idl_compiler, '-o', '@OUTDIR@', '-s', '@CURRENT_SOURCE_DIR@', '-I' + meson.current_source_dir() + '/utils/DDS/IDL', '@INPUT@']

sources = ['StringTypeSupportC.cpp', 'StringTypeSupportImpl.cpp']

executable('Opendds-ros2', 'TestPublisher.cpp', sources, dependencies : [rt, dl, opendds])


