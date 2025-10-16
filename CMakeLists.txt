cmake_minimum_required(VERSION 3.31)
project(XPDFBUILD)

set(CMAKE_CXX_STANDARD 14)

set_source_files_properties(test.c PROPERTIES COMPILE_FLAGS -DXPDFBUILD_EXPORTS)

# include_directories(.)
include_directories(${CMAKE_SOURCE_DIR}/include)
# include_directories(vcpkg_installed)
# include_directories(vcpkg_installed/x64-windows)
# include_directories(dependencies)
# include_directories(dependencies/bin)
# include_directories(dependencies/lib)
include_directories(${CMAKE_SOURCE_DIR}/dependencies/include)
# include_directories(dependencies/include/brotli)
# include_directories(dependencies/include/freetype)
# include_directories(dependencies/include/freetype/config)
include_directories(${CMAKE_SOURCE_DIR}/dependencies/include/libpng16)
# add_subdirectory(dependencies/bin)
# find_library(freetype_LIBRARY_PATH freetype.lib)

link_directories(${CMAKE_SOURCE_DIR}/dependencies/lib)

add_library(XPDFBUILD SHARED
		external_include/pdftotext.h
        ${CMAKE_SOURCE_DIR}/include/aconf.h
        ${CMAKE_SOURCE_DIR}/dependencies/include/brotli/decode.h
        dependencies/include/brotli/encode.h
        dependencies/include/brotli/port.h
        dependencies/include/brotli/shared_dictionary.h
        dependencies/include/brotli/types.h
        dependencies/include/freetype/config/ftconfig.h
        dependencies/include/freetype/config/ftheader.h
        dependencies/include/freetype/config/ftmodule.h
        dependencies/include/freetype/config/ftoption.h
        dependencies/include/freetype/config/ftstdlib.h
        dependencies/include/freetype/config/integer-types.h
        dependencies/include/freetype/config/mac-support.h
        dependencies/include/freetype/config/public-macros.h
        dependencies/include/freetype/freetype.h
        dependencies/include/freetype/ftadvanc.h
        dependencies/include/freetype/ftbbox.h
        dependencies/include/freetype/ftbdf.h
        dependencies/include/freetype/ftbitmap.h
        dependencies/include/freetype/ftbzip2.h
        dependencies/include/freetype/ftcache.h
        dependencies/include/freetype/ftchapters.h
        dependencies/include/freetype/ftcid.h
        dependencies/include/freetype/ftcolor.h
        dependencies/include/freetype/ftdriver.h
        dependencies/include/freetype/fterrdef.h
        dependencies/include/freetype/fterrors.h
        dependencies/include/freetype/ftfntfmt.h
        dependencies/include/freetype/ftgasp.h
        dependencies/include/freetype/ftglyph.h
        dependencies/include/freetype/ftgxval.h
        dependencies/include/freetype/ftgzip.h
        dependencies/include/freetype/ftimage.h
        dependencies/include/freetype/ftincrem.h
        dependencies/include/freetype/ftlcdfil.h
        dependencies/include/freetype/ftlist.h
        dependencies/include/freetype/ftlogging.h
        dependencies/include/freetype/ftlzw.h
        dependencies/include/freetype/ftmac.h
        dependencies/include/freetype/ftmm.h
        dependencies/include/freetype/ftmodapi.h
        dependencies/include/freetype/ftmoderr.h
        dependencies/include/freetype/ftotval.h
        dependencies/include/freetype/ftoutln.h
        dependencies/include/freetype/ftparams.h
        dependencies/include/freetype/ftpfr.h
        dependencies/include/freetype/ftrender.h
        dependencies/include/freetype/ftsizes.h
        dependencies/include/freetype/ftsnames.h
        dependencies/include/freetype/ftstroke.h
        dependencies/include/freetype/ftsynth.h
        dependencies/include/freetype/ftsystem.h
        dependencies/include/freetype/fttrigon.h
        dependencies/include/freetype/fttypes.h
        dependencies/include/freetype/ftwinfnt.h
        dependencies/include/freetype/otsvg.h
        dependencies/include/freetype/t1tables.h
        dependencies/include/freetype/ttnameid.h
        dependencies/include/freetype/tttables.h
        dependencies/include/freetype/tttags.h
        dependencies/include/libpng16/png.h
        dependencies/include/libpng16/pngconf.h
        dependencies/include/libpng16/pnglibconf.h
        dependencies/include/bzlib.h
        dependencies/include/ft2build.h
        dependencies/include/png.h
        dependencies/include/pngconf.h
        dependencies/include/pnglibconf.h
        dependencies/include/zconf.h
        dependencies/include/zlib.h
        dependencies/lib/pkgconfig/bzip2.pc
        dependencies/lib/pkgconfig/freetype2.pc
        dependencies/lib/pkgconfig/libbrotlicommon.pc
        dependencies/lib/pkgconfig/libbrotlidec.pc
        dependencies/lib/pkgconfig/libbrotlienc.pc
        dependencies/lib/pkgconfig/libpng.pc
        dependencies/lib/pkgconfig/libpng16.pc
        dependencies/lib/pkgconfig/zlib.pc
        AcroForm.cc
        AcroForm.h
        Annot.cc
        Annot.h
        Array.cc
        Array.h
        BuiltinFont.cc
        BuiltinFont.h
        BuiltinFontTables.cc
        BuiltinFontTables.h
        Catalog.cc
        Catalog.h
        CharCodeToUnicode.cc
        CharCodeToUnicode.h
        CharTypes.h
        CMap.cc
        CMap.h
        CompactFontTables.h
        config.h
        Decrypt.cc
        Decrypt.h
        Dict.cc
        Dict.h
        DisplayState.cc
        DisplayState.h
        dllmain.cpp
        Error.cc
        Error.h
        ErrorCodes.h
        FixedPoint.cc
        FixedPoint.h
        FoFiBase.cc
        FoFiBase.h
        FoFiEncodings.cc
        FoFiEncodings.h
        FoFiIdentifier.cc
        FoFiIdentifier.h
        FoFiTrueType.cc
        FoFiTrueType.h
        FoFiType1.cc
        FoFiType1.h
        FoFiType1C.cc
        FoFiType1C.h
        FontEncodingTables.cc
        FontEncodingTables.h
        framework.h
        Function.cc
        Function.h
        gfile.cc
        gfile.h
        Gfx.cc
        Gfx.h
        GfxFont.cc
        GfxFont.h
        GfxState.cc
        GfxState.h
        GHash.cc
        GHash.h
        GList.cc
        GList.h
        GlobalParams.cc
        GlobalParams.h
        gmem.cc
        gmem.h
        gmempp.cc
        gmempp.h
        GMutex.h
        GString.cc
        GString.h
        gtypes.h
        HTMLGen.cc
        HTMLGen.h
        ImageOutputDev.cc
        ImageOutputDev.h
        JArithmeticDecoder.cc
        JArithmeticDecoder.h
        JBIG2Stream.cc
        JBIG2Stream.h
        JPXStream.cc
        JPXStream.h
        Lexer.cc
        Lexer.h
        Link.cc
        Link.h
        NameToCharCode.cc
        NameToCharCode.h
        NameToUnicodeTable.h
        Object.cc
        Object.h
        OptionalContent.cc
        OptionalContent.h
        Outline.cc
        Outline.h
        OutputDev.cc
        OutputDev.h
        Page.cc
        Page.h
        parseargs.c
        parseargs.h
        Parser.cc
        Parser.h
        pch.cpp
        pch.h
        PDF417Barcode.cc
        PDF417Barcode.h
        PDFCore.cc
        PDFCore.h
        pdfdetach.cc
        PDFDoc.cc
        PDFDoc.h
        PDFDocEncoding.cc
        PDFDocEncoding.h
        pdffonts.cc
        pdfimages.cc
        pdfinfo.cc
        pdftohtml.cc
        pdftopng.cc
        pdftoppm.cc
        pdftops.cc
        pdftotext.cc
        PreScanOutputDev.cc
        PreScanOutputDev.h
        PSOutputDev.cc
        PSOutputDev.h
        PSTokenizer.cc
        PSTokenizer.h
        SecurityHandler.cc
        SecurityHandler.h
        ShadingImage.cc
        ShadingImage.h
        Splash.cc
        Splash.h
        SplashBitmap.cc
        SplashBitmap.h
        SplashClip.cc
        SplashClip.h
        SplashErrorCodes.h
        SplashFont.cc
        SplashFont.h
        SplashFontEngine.cc
        SplashFontEngine.h
        SplashFontFile.cc
        SplashFontFile.h
        SplashFontFileID.cc
        SplashFontFileID.h
        SplashFTFont.cc
        SplashFTFont.h
        SplashFTFontEngine.cc
        SplashFTFontEngine.h
        SplashFTFontFile.cc
        SplashFTFontFile.h
        SplashGlyphBitmap.h
        SplashMath.h
        SplashOutputDev.cc
        SplashOutputDev.h
        SplashPath.cc
        SplashPath.h
        SplashPattern.cc
        SplashPattern.h
        SplashScreen.cc
        SplashScreen.h
        SplashState.cc
        SplashState.h
        SplashTypes.h
        SplashXPath.cc
        SplashXPath.h
        SplashXPathScanner.cc
        SplashXPathScanner.h
        Stream-CCITT.h
        Stream.cc
        Stream.h
        TextOutputDev.cc
        TextOutputDev.h
        TextString.cc
        TextString.h
        TileCache.cc
        TileCache.h
        TileCompositor.cc
        TileCompositor.h
        TileMap.cc
        TileMap.h
        Trace.cc
        Trace.h
        UnicodeMap.cc
        UnicodeMap.h
        UnicodeMapTables.h
        UnicodeRemapping.cc
        UnicodeRemapping.h
        UnicodeTypeTable.cc
        UnicodeTypeTable.h
        UTF8.cc
        UTF8.h
        WebFont.cc
        WebFont.h
        XFAScanner.cc
        XFAScanner.h
        XRef.cc
        XRef.h
        Zoox.cc
        Zoox.h)
		
set_target_properties(XPDFBUILD PROPERTIES OUTPUT_NAME ${XPDFBUILD_DLL_LIB})
set_target_properties(XPDFBUILD PROPERTIES LIBRARY_OUTPUT_NAME ${XPDFBUILD_DLL_LIB})

set_target_properties(XPDFBUILD PROPERTIES OUTPUT_NAME ${XPDFBUILD_DLL_LIB})
set_target_properties(XPDFBUILD PROPERTIES LIBRARY_OUTPUT_NAME ${XPDFBUILD_DLL_LIB})

target_link_libraries(XPDFBUILD
	freetype
    libpng16
    zlib)

set_target_properties(XPDFBUILD PROPERTIES
    PUBLIC_HEADER "external_include/pdftotext.h"
)

install(TARGETS XPDFBUILD
	ARCHIVE DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/lib
	RUNTIME DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/bin
	PUBLIC_HEADER DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/include)


add_executable(test
		test.c)

target_link_libraries(test
		XPDFBUILD)

set(THIRD_PARTY_DLLS
	${CMAKE_SOURCE_DIR}/dependencies/bin/brotlicommon.dll
	${CMAKE_SOURCE_DIR}/dependencies/bin/brotlidec.dll
	${CMAKE_SOURCE_DIR}/dependencies/bin/brotlienc.dll
	${CMAKE_SOURCE_DIR}/dependencies/bin/bz2.dll
	${CMAKE_SOURCE_DIR}/dependencies/bin/freetype.dll
	${CMAKE_SOURCE_DIR}/dependencies/bin/libpng16.dll
	${CMAKE_SOURCE_DIR}/dependencies/bin/zlib1.dll)

foreach(file_i ${THIRD_PARTY_DLLS})
    add_custom_command(
    TARGET XPDFBUILD
    POST_BUILD
    COMMAND ${CMAKE_COMMAND}
    ARGS -E copy_if_different ${file_i} ${CMAKE_CURRENT_BINARY_DIR}
)
endforeach( file_i )
