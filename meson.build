project(
  'asdf-qwer',
  'c',
  meson_version : '>= 1.3.0',
  version : '0.1',
  default_options : ['warning_level=3', 'c_std=c23'],
)

dependencies = [
]

exe = executable(
  'asdf-qwer',
  'asdf_qwer.c',
  dependencies : dependencies,
  install : true,
)

test('basic', exe)
