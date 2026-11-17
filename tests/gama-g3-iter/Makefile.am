# https://www.gnu.org/software/automake/manual/html_node/Tests.html
#
# Automake can generate code to handle two kinds of test suites. One
# is based on integration with the dejagnu framework. The other (and
# most used) form is based on the use of generic test scripts, and its
# activation is triggered by the definition of the special TESTS
# variable. This second form allows for various degrees of
# sophistication and customization; in particular, it allows for
# concurrent execution of test scripts, use of established test
# protocols such as TAP, and definition of custom test drivers and
# test runners.
#
# In either case, the testsuite is invoked via ‘make check’.

TESTSA = gama-g3-iter






TESTS = $(TESTSA)


SUBDIRS = input src

INPUT_FILES = demo-g3iter-01


G3ITER_SRC     = $(srcdir)/src
G3ITER_INPUT   = $(srcdir)/input
G3ITER_RESULTS = results/$(PACKAGE_VERSION)
G3ITER_OTHERS  = Makefile $(G3_RESULTS)

do_subst = sed -e 's,[@]top_builddir[@],$(top_builddir),g' \
               -e 's,[@]PACKAGE_VERSION[@],$(PACKAGE_VERSION),g' \
               -e 's,[@]INPUT_FILES[@],$(INPUT_FILES),g' \
               -e 's,[@]G3ITER_INPUT[@],$(G3ITER_INPUT),g' \
               -e 's,[@]G3ITER_RESULTS[@],$(G3ITER_RESULTS),g' \
               -e 's,[@]GAMA_XML[@],$(top_srcdir)/xml,g'

clean-local: clean-local-check
.PHONY: clean-local-check
clean-local-check:
	-rm -rf $(G3ITER_RESULTS) $(TESTS)

$(G3ITER_RESULTS):
	mkdir -p $(G3ITER_RESULTS)

gama-g3-iter.sh: $(G3ITER_SRC)/gama-g3-iter.in $(G3ITER_OTHERS)
    echo "### gama-g3-iter.sh" > gama-g3-iter.sh
#	@$(do_subst) < $(G3ITER_SRC)/gama-g3-iter.in \
#	        > gama-g3-iter.sh
#	@chmod +x gama-g3-iter.sh


#---gama-g3-adjustment.sh: $(G3_SRC)/gama-g3-adjustment.in $(G3_OTHERS)
#---	@$(do_subst) < $(G3_SRC)/gama-g3-adjustment.in \
#---	        > gama-g3-adjustment.sh
#---	@chmod +x gama-g3-adjustment.sh
#---
#---gama-g3-xmllint-xsd.sh: $(G3_SRC)/gama-g3-xmllint-xsd.in $(G3_OTHERS)
#---	@$(do_subst)  < $(G3_SRC)/gama-g3-xmllint-xsd.in \
#---	        > gama-g3-xmllint-xsd.sh
#---	@chmod +x gama-g3-xmllint-xsd.sh
#---
#---gama-g3-ellipsoid-xyz2blh.sh: $(G3_SRC)/gama-g3-ellipsoid-xyz2blh.in \
#---			      $(G3_OTHERS)
#---	@$(do_subst)  < $(G3_SRC)/gama-g3-ellipsoid-xyz2blh.in \
#---	        > gama-g3-ellipsoid-xyz2blh.sh
#---	@chmod +x gama-g3-ellipsoid-xyz2blh.sh
#---
#---gama-g3-ellipsoid-xyz2blh-list.sh: $(G3_SRC)/gama-g3-ellipsoid-xyz2blh-list.in \
#---			      $(G3_OTHERS)
#---	@$(do_subst)  < $(G3_SRC)/gama-g3-ellipsoid-xyz2blh-list.in \
#---	        > gama-g3-ellipsoid-xyz2blh-list.sh
#---	@chmod +x gama-g3-ellipsoid-xyz2blh-list.sh



#---if BUILD_DEMO_G3_XYZBLH
#---
#---bin_PROGRAMS = demo-g3-xyz2blh demo-g3-blh2xyz
#---
#---demo_g3_xyz2blh_SOURCES  = demo-g3-xyz2blh.cpp
#---demo_g3_xyz2blh_LDADD    = $(top_builddir)/lib/libgama.a
#---demo_g3_xyz2blh_CPPFLAGS = -I $(top_srcdir)/lib
#---
#---demo_g3_blh2xyz_SOURCES  = demo-g3-blh2xyz.cpp
#---demo_g3_blh2xyz_LDADD    = $(top_builddir)/lib/libgama.a
#---demo_g3_blh2xyz_CPPFLAGS = -I $(top_srcdir)/lib
#---
#---endif
