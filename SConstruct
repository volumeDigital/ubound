env = Environment()

env.Append(CCFLAGS='-std=c++11')
env.Append(CPPPATH='.')

env_lib  = env.Clone()
env_test = env.Clone()

lib = env_lib.Library('ubound', 'ubound.cpp')
test = env_test.Program('test_ubound', ['test_ubound.cpp', lib])


