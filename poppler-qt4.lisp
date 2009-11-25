

;;;SWIG wrapper code starts here

(cl:defmacro defanonenum (&body enums)
   "Converts anonymous enums to defconstants."
  `(cl:progn ,@(cl:loop for value in enums
                        for index = 0 then (cl:1+ index)
                        when (cl:listp value) do (cl:setf index (cl:second value)
                                                          value (cl:first value))
                        collect `(cl:defconstant ,value ,index))))

(cl:eval-when (:compile-toplevel :load-toplevel)
  (cl:unless (cl:fboundp 'swig-lispify)
    (cl:defun swig-lispify (name flag cl:&optional (package cl:*package*))
      (cl:labels ((helper (lst last rest cl:&aux (c (cl:car lst)))
                    (cl:cond
                      ((cl:null lst)
                       rest)
                      ((cl:upper-case-p c)
                       (helper (cl:cdr lst) 'upper
                               (cl:case last
                                 ((lower digit) (cl:list* c #\- rest))
                                 (cl:t (cl:cons c rest)))))
                      ((cl:lower-case-p c)
                       (helper (cl:cdr lst) 'lower (cl:cons (cl:char-upcase c) rest)))
                      ((cl:digit-char-p c)
                       (helper (cl:cdr lst) 'digit 
                               (cl:case last
                                 ((upper lower) (cl:list* c #\- rest))
                                 (cl:t (cl:cons c rest)))))
                      ((cl:char-equal c #\_)
                       (helper (cl:cdr lst) '_ (cl:cons #\- rest)))
                      (cl:t
                       (cl:error "Invalid character: ~A" c)))))
        (cl:let ((fix (cl:case flag
                        ((constant enumvalue) "+")
                        (variable "*")
                        (cl:t ""))))
          (cl:intern
           (cl:concatenate
            'cl:string
            fix
            (cl:nreverse (helper (cl:concatenate 'cl:list name) cl:nil cl:nil))
            fix)
           package))))))

;;;SWIG wrapper code ends here


(cffi:defcfun ("_wrap_new_TextBox" new_TextBox) :pointer
  (text :pointer)
  (bBox :pointer))

(cffi:defcfun ("_wrap_delete_TextBox" delete_TextBox) :void
  (self :pointer))

(cffi:defcfun ("_wrap_TextBox_text" TextBox_text) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_TextBox_boundingBox" TextBox_boundingBox) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_TextBox_nextWord" TextBox_nextWord) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_TextBox_charBoundingBox" TextBox_charBoundingBox) :pointer
  (self :pointer)
  (i :int))

(cffi:defcfun ("_wrap_TextBox_hasSpaceAfter" TextBox_hasSpaceAfter) :pointer
  (self :pointer))

(cffi:defcenum Type
	:unknown
	:Type1
	:Type1C
	:Type1COT
	:Type3
	:TrueType
	:TrueTypeOT
	:CIDType0
	:CIDType0C
	:CIDType0COT
	:CIDTrueType
	:CIDTrueTypeOT)

(cffi:defcfun ("_wrap_new_FontInfo__SWIG_0" new_FontInfo) :pointer)

(cffi:defcfun ("_wrap_new_FontInfo__SWIG_1" new_FontInfo) :pointer
  (fid :pointer))

(cffi:defcfun ("_wrap_new_FontInfo__SWIG_2" new_FontInfo) :pointer
  (fi :pointer))

(cffi:defcfun ("_wrap_delete_FontInfo" delete_FontInfo) :void
  (self :pointer))

(cffi:defcfun ("_wrap_FontInfo_name" FontInfo_name) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_FontInfo_file" FontInfo_file) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_FontInfo_isEmbedded" FontInfo_isEmbedded) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_FontInfo_isSubset" FontInfo_isSubset) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_FontInfo_type" FontInfo_type) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_FontInfo_typeName" FontInfo_typeName) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_FontInfo___assign__" FontInfo___assign__) :pointer
  (self :pointer)
  (fi :pointer))

(cffi:defcfun ("_wrap_new_EmbeddedFile" new_EmbeddedFile) :pointer
  (embfile :pointer))

(cffi:defcfun ("_wrap_delete_EmbeddedFile" delete_EmbeddedFile) :void
  (self :pointer))

(cffi:defcfun ("_wrap_EmbeddedFile_name" EmbeddedFile_name) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_EmbeddedFile_description" EmbeddedFile_description) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_EmbeddedFile_size" EmbeddedFile_size) :int
  (self :pointer))

(cffi:defcfun ("_wrap_EmbeddedFile_modDate" EmbeddedFile_modDate) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_EmbeddedFile_createDate" EmbeddedFile_createDate) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_EmbeddedFile_checksum" EmbeddedFile_checksum) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_EmbeddedFile_mimeType" EmbeddedFile_mimeType) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_EmbeddedFile_data" EmbeddedFile_data) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_delete_Page" delete_Page) :void
  (self :pointer))

(cffi:defcenum Rotation
	(:Rotate0 0)
	(:Rotate90 1)
	(:Rotate180 2)
	(:Rotate270 3))

(cffi:defcenum PageAction
	:Opening
	:Closing)

(cffi:defcfun ("_wrap_Page_renderToImage__SWIG_0" Page_renderToImage) :pointer
  (self :pointer)
  (xres :double)
  (yres :double)
  (x :int)
  (y :int)
  (w :int)
  (h :int)
  (rotate :pointer))

(cffi:defcfun ("_wrap_Page_renderToImage__SWIG_1" Page_renderToImage) :pointer
  (self :pointer)
  (xres :double)
  (yres :double)
  (x :int)
  (y :int)
  (w :int)
  (h :int))

(cffi:defcfun ("_wrap_Page_renderToImage__SWIG_2" Page_renderToImage) :pointer
  (self :pointer)
  (xres :double)
  (yres :double)
  (x :int)
  (y :int)
  (w :int))

(cffi:defcfun ("_wrap_Page_renderToImage__SWIG_3" Page_renderToImage) :pointer
  (self :pointer)
  (xres :double)
  (yres :double)
  (x :int)
  (y :int))

(cffi:defcfun ("_wrap_Page_renderToImage__SWIG_4" Page_renderToImage) :pointer
  (self :pointer)
  (xres :double)
  (yres :double)
  (x :int))

(cffi:defcfun ("_wrap_Page_renderToImage__SWIG_5" Page_renderToImage) :pointer
  (self :pointer)
  (xres :double)
  (yres :double))

(cffi:defcfun ("_wrap_Page_renderToImage__SWIG_6" Page_renderToImage) :pointer
  (self :pointer)
  (xres :double))

(cffi:defcfun ("_wrap_Page_renderToImage__SWIG_7" Page_renderToImage) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Page_text" Page_text) :pointer
  (self :pointer)
  (rect :pointer))

(cffi:defcenum SearchDirection
	:FromTop
	:NextResult
	:PreviousResult)

(cffi:defcenum SearchMode
	:CaseSensitive
	:CaseInsensitive)

(cffi:defcfun ("_wrap_Page_search__SWIG_0" Page_search) :pointer
  (self :pointer)
  (text :pointer)
  (rect :pointer)
  (direction :pointer)
  (caseSensitive :pointer)
  (rotate :pointer))

(cffi:defcfun ("_wrap_Page_search__SWIG_1" Page_search) :pointer
  (self :pointer)
  (text :pointer)
  (rect :pointer)
  (direction :pointer)
  (caseSensitive :pointer))

(cffi:defcfun ("_wrap_Page_textList__SWIG_0" Page_textList) :pointer
  (self :pointer)
  (rotate :pointer))

(cffi:defcfun ("_wrap_Page_textList__SWIG_1" Page_textList) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Page_pageSizeF" Page_pageSizeF) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Page_pageSize" Page_pageSize) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Page_transition" Page_transition) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Page_action" Page_action) :pointer
  (self :pointer)
  (act :pointer))

(cffi:defcenum Orientation
	:Landscape
	:Portrait
	:Seascape
	:UpsideDown)

(cffi:defcfun ("_wrap_Page_orientation" Page_orientation) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Page_defaultCTM" Page_defaultCTM) :void
  (self :pointer)
  (CTM :pointer)
  (dpiX :double)
  (dpiY :double)
  (rotate :int)
  (upsideDown :pointer))

(cffi:defcfun ("_wrap_Page_links" Page_links) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Page_annotations" Page_annotations) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Page_formFields" Page_formFields) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Page_duration" Page_duration) :double
  (self :pointer))

(cffi:defcfun ("_wrap_Page_label" Page_label) :pointer
  (self :pointer))

(cffi:defcenum PageMode
	:UseNone
	:UseOutlines
	:UseThumbs
	:FullScreen
	:UseOC
	:UseAttach)

(cffi:defcenum PageLayout
	:NoLayout
	:SinglePage
	:OneColumn
	:TwoColumnLeft
	:TwoColumnRight
	:TwoPageLeft
	:TwoPageRight)

(cffi:defcenum RenderBackend
	:SplashBackend
	:ArthurBackend)

(cffi:defcenum RenderHint
	(:Antialiasing #x00000001)
	(:TextAntialiasing #x00000002))

(cffi:defcfun ("_wrap_Document_load__SWIG_0" Document_load) :pointer
  (filePath :pointer)
  (ownerPassword :pointer)
  (userPassword :pointer))

(cffi:defcfun ("_wrap_Document_load__SWIG_1" Document_load) :pointer
  (filePath :pointer)
  (ownerPassword :pointer))

(cffi:defcfun ("_wrap_Document_load__SWIG_2" Document_load) :pointer
  (filePath :pointer))

(cffi:defcfun ("_wrap_Document_loadFromData__SWIG_0" Document_loadFromData) :pointer
  (fileContents :pointer)
  (ownerPassword :pointer)
  (userPassword :pointer))

(cffi:defcfun ("_wrap_Document_loadFromData__SWIG_1" Document_loadFromData) :pointer
  (fileContents :pointer)
  (ownerPassword :pointer))

(cffi:defcfun ("_wrap_Document_loadFromData__SWIG_2" Document_loadFromData) :pointer
  (fileContents :pointer))

(cffi:defcfun ("_wrap_Document_page__SWIG_0" Document_page) :pointer
  (self :pointer)
  (index :int))

(cffi:defcfun ("_wrap_Document_page__SWIG_1" Document_page) :pointer
  (self :pointer)
  (label :pointer))

(cffi:defcfun ("_wrap_Document_numPages" Document_numPages) :int
  (self :pointer))

(cffi:defcfun ("_wrap_Document_pageMode" Document_pageMode) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Document_pageLayout" Document_pageLayout) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Document_unlock" Document_unlock) :pointer
  (self :pointer)
  (ownerPassword :pointer)
  (userPassword :pointer))

(cffi:defcfun ("_wrap_Document_isLocked" Document_isLocked) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Document_date" Document_date) :pointer
  (self :pointer)
  (data :pointer))

(cffi:defcfun ("_wrap_Document_info" Document_info) :pointer
  (self :pointer)
  (data :pointer))

(cffi:defcfun ("_wrap_Document_infoKeys" Document_infoKeys) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Document_isEncrypted" Document_isEncrypted) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Document_isLinearized" Document_isLinearized) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Document_okToPrint" Document_okToPrint) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Document_okToPrintHighRes" Document_okToPrintHighRes) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Document_okToChange" Document_okToChange) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Document_okToCopy" Document_okToCopy) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Document_okToAddNotes" Document_okToAddNotes) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Document_okToFillForm" Document_okToFillForm) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Document_okToCreateFormFields" Document_okToCreateFormFields) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Document_okToExtractForAccessibility" Document_okToExtractForAccessibility) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Document_okToAssemble" Document_okToAssemble) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Document_pdfVersion" Document_pdfVersion) :double
  (self :pointer))

(cffi:defcfun ("_wrap_Document_fonts" Document_fonts) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Document_scanForFonts" Document_scanForFonts) :pointer
  (self :pointer)
  (numPages :int)
  (fontList :pointer))

(cffi:defcfun ("_wrap_Document_fontData" Document_fontData) :pointer
  (self :pointer)
  (font :pointer))

(cffi:defcfun ("_wrap_Document_embeddedFiles" Document_embeddedFiles) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Document_hasEmbeddedFiles" Document_hasEmbeddedFiles) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Document_toc" Document_toc) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Document_linkDestination" Document_linkDestination) :pointer
  (self :pointer)
  (name :pointer))

(cffi:defcfun ("_wrap_Document_setPaperColor" Document_setPaperColor) :void
  (self :pointer)
  (color :pointer))

(cffi:defcfun ("_wrap_Document_paperColor" Document_paperColor) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Document_setRenderBackend" Document_setRenderBackend) :void
  (self :pointer)
  (backend :pointer))

(cffi:defcfun ("_wrap_Document_renderBackend" Document_renderBackend) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Document_availableRenderBackends" Document_availableRenderBackends) :pointer)

(cffi:defcfun ("_wrap_Document_setRenderHint__SWIG_0" Document_setRenderHint) :void
  (self :pointer)
  (hint :pointer)
  (on :pointer))

(cffi:defcfun ("_wrap_Document_setRenderHint__SWIG_1" Document_setRenderHint) :void
  (self :pointer)
  (hint :pointer))

(cffi:defcfun ("_wrap_Document_renderHints" Document_renderHints) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Document_psConverter" Document_psConverter) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Document_pdfConverter" Document_pdfConverter) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Document_metadata" Document_metadata) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Document_hasOptionalContent" Document_hasOptionalContent) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Document_optionalContentModel" Document_optionalContentModel) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_Document_scripts" Document_scripts) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_delete_Document" delete_Document) :void
  (self :pointer))

(cffi:defcfun ("_wrap_delete_BaseConverter" delete_BaseConverter) :void
  (self :pointer))

(cffi:defcfun ("_wrap_BaseConverter_setOutputFileName" BaseConverter_setOutputFileName) :void
  (self :pointer)
  (outputFileName :pointer))

(cffi:defcfun ("_wrap_BaseConverter_setOutputDevice" BaseConverter_setOutputDevice) :void
  (self :pointer)
  (device :pointer))

(cffi:defcfun ("_wrap_BaseConverter_convert" BaseConverter_convert) :pointer
  (self :pointer))

(cffi:defcenum PSOption
	(:Printing #x00000001)
	(:StrictMargins #x00000002)
	(:ForceRasterization #x00000004))

(cffi:defcfun ("_wrap_delete_PSConverter" delete_PSConverter) :void
  (self :pointer))

(cffi:defcfun ("_wrap_PSConverter_setPageList" PSConverter_setPageList) :void
  (self :pointer)
  (pageList :pointer))

(cffi:defcfun ("_wrap_PSConverter_setTitle" PSConverter_setTitle) :void
  (self :pointer)
  (title :pointer))

(cffi:defcfun ("_wrap_PSConverter_setHDPI" PSConverter_setHDPI) :void
  (self :pointer)
  (hDPI :double))

(cffi:defcfun ("_wrap_PSConverter_setVDPI" PSConverter_setVDPI) :void
  (self :pointer)
  (vDPI :double))

(cffi:defcfun ("_wrap_PSConverter_setRotate" PSConverter_setRotate) :void
  (self :pointer)
  (rotate :int))

(cffi:defcfun ("_wrap_PSConverter_setPaperWidth" PSConverter_setPaperWidth) :void
  (self :pointer)
  (paperWidth :int))

(cffi:defcfun ("_wrap_PSConverter_setPaperHeight" PSConverter_setPaperHeight) :void
  (self :pointer)
  (paperHeight :int))

(cffi:defcfun ("_wrap_PSConverter_setRightMargin" PSConverter_setRightMargin) :void
  (self :pointer)
  (marginRight :int))

(cffi:defcfun ("_wrap_PSConverter_setBottomMargin" PSConverter_setBottomMargin) :void
  (self :pointer)
  (marginBottom :int))

(cffi:defcfun ("_wrap_PSConverter_setLeftMargin" PSConverter_setLeftMargin) :void
  (self :pointer)
  (marginLeft :int))

(cffi:defcfun ("_wrap_PSConverter_setTopMargin" PSConverter_setTopMargin) :void
  (self :pointer)
  (marginTop :int))

(cffi:defcfun ("_wrap_PSConverter_setStrictMargins" PSConverter_setStrictMargins) :void
  (self :pointer)
  (strictMargins :pointer))

(cffi:defcfun ("_wrap_PSConverter_setForceRasterize" PSConverter_setForceRasterize) :void
  (self :pointer)
  (forceRasterize :pointer))

(cffi:defcfun ("_wrap_PSConverter_setPSOptions" PSConverter_setPSOptions) :void
  (self :pointer)
  (options :pointer))

(cffi:defcfun ("_wrap_PSConverter_psOptions" PSConverter_psOptions) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_PSConverter_convert" PSConverter_convert) :pointer
  (self :pointer))

(cffi:defcenum PDFOption
	(:WithChanges #x00000001))

(cffi:defcfun ("_wrap_delete_PDFConverter" delete_PDFConverter) :void
  (self :pointer))

(cffi:defcfun ("_wrap_PDFConverter_setPDFOptions" PDFConverter_setPDFOptions) :void
  (self :pointer)
  (options :pointer))

(cffi:defcfun ("_wrap_PDFConverter_pdfOptions" PDFConverter_pdfOptions) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_PDFConverter_convert" PDFConverter_convert) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_convertDate" convertDate) :pointer
  (dateString :string))

(cffi:defcenum SoundType
	:External
	:Embedded)

(cffi:defcenum SoundEncoding
	:Raw
	:Signed
	:muLaw
	:ALaw)

(cffi:defcfun ("_wrap_new_SoundObject" new_SoundObject) :pointer
  (popplersound :pointer))

(cffi:defcfun ("_wrap_delete_SoundObject" delete_SoundObject) :void
  (self :pointer))

(cffi:defcfun ("_wrap_SoundObject_soundType" SoundObject_soundType) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_SoundObject_url" SoundObject_url) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_SoundObject_data" SoundObject_data) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_SoundObject_samplingRate" SoundObject_samplingRate) :double
  (self :pointer))

(cffi:defcfun ("_wrap_SoundObject_channels" SoundObject_channels) :int
  (self :pointer))

(cffi:defcfun ("_wrap_SoundObject_bitsPerSample" SoundObject_bitsPerSample) :int
  (self :pointer))

(cffi:defcfun ("_wrap_SoundObject_soundEncoding" SoundObject_soundEncoding) :pointer
  (self :pointer))

(cffi:defcenum PlayMode
	:PlayOnce
	:PlayOpen
	:PlayRepeat
	:PlayPalindrome)

(cffi:defcfun ("_wrap_delete_MovieObject" delete_MovieObject) :void
  (self :pointer))

(cffi:defcfun ("_wrap_MovieObject_url" MovieObject_url) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_MovieObject_size" MovieObject_size) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_MovieObject_rotation" MovieObject_rotation) :int
  (self :pointer))

(cffi:defcfun ("_wrap_MovieObject_showControls" MovieObject_showControls) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_MovieObject_playMode" MovieObject_playMode) :pointer
  (self :pointer))


