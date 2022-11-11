#!/usr/bin/env python3
from argparse import ArgumentParser
import os
import sys
import subprocess

assert len(sys.argv) > 2

argparser = ArgumentParser()
argparser.add_argument("inputfiles", metavar="N", nargs="+")
argparser.add_argument("-o", "--output_dir", dest="outdir")
argparser.add_argument("-s", "--source_dir", dest="srcdir")
argparser.add_argument("-I", nargs="*", dest="include_dirs")
argparser.add_argument("--verbose", type=bool, dest="verbose")
args = argparser.parse_args()

include_dirs = ["-I"+inc for inc in args.include_dirs]
if args.verbose:
    print(include_dirs)

path = os.environ.get('PATH')
env = {'DDS_ROOT': '/usr/local/share/dds', 'PATH': path}
if args.verbose:
    print("Checking compilers exist...")
devnull = open('/dev/null', 'w')
assert subprocess.Popen(['opendds_idl', '--version'],
                        env=env, stdout=devnull, stderr=devnull).returncode == None
assert subprocess.Popen(['tao_idl', '--version'],
                        env=env, stdout=devnull, stderr=devnull).returncode == None
if args.verbose:
    print("Compilers exist.")

idl_flags = ['-Lc++11', '-St']

if args.verbose:
    print("Current Working Directory {}".format(os.getcwd()))
    print("Output directory: {}".format(args.outdir))

full_outdir = os.getcwd() + "/" + args.outdir

if args.verbose:
    print("Full Output directory: {}".format(full_outdir))

opendds_cmd = "opendds_idl -o {} -Lc++11 -St -I{}".format(
    full_outdir, args.srcdir).split(" ")
opendds_cmd += include_dirs
opendds_cmd += args.inputfiles
if args.verbose:
    print(' '.join(opendds_cmd))
subprocess.Popen(opendds_cmd, env=env).wait()

# TAO idl files
tao_inputfiles = [full_outdir +
                  "/" + os.path.basename(f)[:-4] + "TypeSupport.idl" for f in args.inputfiles]
tao_idl_cmd = "tao_idl -o {} -Sp -Sd -Sg -SS -Sa -St --idl-version 4 --unknown-annotations ignore -I/usr/local/include -I{}".format(
    full_outdir, args.srcdir).split(" ")
tao_idl_cmd += include_dirs
tao_idl_cmd += tao_inputfiles
if args.verbose:
    print(' '.join(tao_idl_cmd))

subprocess.Popen(tao_idl_cmd, env=env).wait()

if args.verbose:
    print("IDL Compiling done")

exit(0)
