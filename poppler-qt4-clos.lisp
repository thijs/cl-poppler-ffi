
(cl:defclass text-box()
  ((ff-pointer :reader ff-pointer)))

(cl:defmethod initialize-instance :after ((obj text-box) &key text bBox)
  (setf (slot-value obj 'ff-pointer) (new_TextBox text bBox)))

(cl:defmethod text ((self text-box))
  (TextBox_text (ff-pointer self)))

(cl:defmethod bounding-box ((self text-box))
  (TextBox_boundingBox (ff-pointer self)))

(cl:defmethod next-word ((self text-box))
  (TextBox_nextWord (ff-pointer self)))

(cl:defmethod char-bounding-box ((self text-box) (i cl:integer))
  (TextBox_charBoundingBox (ff-pointer self) i))

(cl:defmethod has-space-after ((self text-box))
  (TextBox_hasSpaceAfter (ff-pointer self)))


(cl:defclass font-info()
  ((ff-pointer :reader ff-pointer)))

(cl:defmethod initialize-instance :after ((obj font-info) &key)
  (setf (slot-value obj 'ff-pointer) (new_FontInfo)))

(cl:defmethod initialize-instance :after ((obj font-info) &key fid)
  (setf (slot-value obj 'ff-pointer) (new_FontInfo fid)))

(cl:defmethod initialize-instance :after ((obj font-info) &key (fi font-info))
  (setf (slot-value obj 'ff-pointer) (new_FontInfo (ff-pointer fi))))

(cl:defmethod name ((self font-info))
  (FontInfo_name (ff-pointer self)))

(cl:defmethod file ((self font-info))
  (FontInfo_file (ff-pointer self)))

(cl:defmethod is-embedded ((self font-info))
  (FontInfo_isEmbedded (ff-pointer self)))

(cl:defmethod is-subset ((self font-info))
  (FontInfo_isSubset (ff-pointer self)))

(cl:defmethod type ((self font-info))
  (FontInfo_type (ff-pointer self)))

(cl:defmethod type-name ((self font-info))
  (FontInfo_typeName (ff-pointer self)))

(cl:shadow "=")
(cl:defmethod = ((self font-info) (fi font-info))
  (FontInfo___assign__ (ff-pointer self) (ff-pointer fi)))


(cl:defclass embedded-file()
  ((ff-pointer :reader ff-pointer)))

(cl:defmethod initialize-instance :after ((obj embedded-file) &key embfile)
  (setf (slot-value obj 'ff-pointer) (new_EmbeddedFile embfile)))

(cl:defmethod name ((self embedded-file))
  (EmbeddedFile_name (ff-pointer self)))

(cl:defmethod description ((self embedded-file))
  (EmbeddedFile_description (ff-pointer self)))

(cl:defmethod size ((self embedded-file))
  (EmbeddedFile_size (ff-pointer self)))

(cl:defmethod mod-date ((self embedded-file))
  (EmbeddedFile_modDate (ff-pointer self)))

(cl:defmethod create-date ((self embedded-file))
  (EmbeddedFile_createDate (ff-pointer self)))

(cl:defmethod checksum ((self embedded-file))
  (EmbeddedFile_checksum (ff-pointer self)))

(cl:defmethod mime-type ((self embedded-file))
  (EmbeddedFile_mimeType (ff-pointer self)))

(cl:defmethod data ((self embedded-file))
  (EmbeddedFile_data (ff-pointer self)))


(cl:defclass page()
  ((ff-pointer :reader ff-pointer)))

(cl:defmethod render-to-image ((self page) (xres cl:number) (yres cl:number) (x cl:integer) (y cl:integer) (w cl:integer) (h cl:integer) (rotate cl:integer))
  (Page_renderToImage (ff-pointer self) xres yres x y w h rotate))

(cl:defmethod render-to-image ((self page) (xres cl:number) (yres cl:number) (x cl:integer) (y cl:integer) (w cl:integer) (h cl:integer))
  (Page_renderToImage (ff-pointer self) xres yres x y w h))

(cl:defmethod render-to-image ((self page) (xres cl:number) (yres cl:number) (x cl:integer) (y cl:integer) (w cl:integer))
  (Page_renderToImage (ff-pointer self) xres yres x y w))

(cl:defmethod render-to-image ((self page) (xres cl:number) (yres cl:number) (x cl:integer) (y cl:integer))
  (Page_renderToImage (ff-pointer self) xres yres x y))

(cl:defmethod render-to-image ((self page) (xres cl:number) (yres cl:number) (x cl:integer))
  (Page_renderToImage (ff-pointer self) xres yres x))

(cl:defmethod render-to-image ((self page) (xres cl:number) (yres cl:number))
  (Page_renderToImage (ff-pointer self) xres yres))

(cl:defmethod render-to-image ((self page) (xres cl:number))
  (Page_renderToImage (ff-pointer self) xres))

(cl:defmethod render-to-image ((self page))
  (Page_renderToImage (ff-pointer self)))

(cl:defmethod text ((self page) rect)
  (Page_text (ff-pointer self) rect))

(cl:defmethod search ((self page) text rect (direction cl:integer) (caseSensitive cl:integer) (rotate cl:integer))
  (Page_search (ff-pointer self) text rect direction caseSensitive rotate))

(cl:defmethod search ((self page) text rect (direction cl:integer) (caseSensitive cl:integer))
  (Page_search (ff-pointer self) text rect direction caseSensitive))

(cl:defmethod text-list ((self page) (rotate cl:integer))
  (Page_textList (ff-pointer self) rotate))

(cl:defmethod text-list ((self page))
  (Page_textList (ff-pointer self)))

(cl:defmethod page-size-f ((self page))
  (Page_pageSizeF (ff-pointer self)))

(cl:defmethod page-size ((self page))
  (Page_pageSize (ff-pointer self)))

(cl:defmethod transition ((self page))
  (Page_transition (ff-pointer self)))

(cl:defmethod action ((self page) (act cl:integer))
  (Page_action (ff-pointer self) act))

(cl:defmethod orientation ((self page))
  (Page_orientation (ff-pointer self)))

(cl:defmethod default-ctm ((self page) CTM (dpiX cl:number) (dpiY cl:number) (rotate cl:integer) (upsideDown t))
  (Page_defaultCTM (ff-pointer self) CTM dpiX dpiY rotate upsideDown))

(cl:defmethod links ((self page))
  (Page_links (ff-pointer self)))

(cl:defmethod annotations ((self page))
  (Page_annotations (ff-pointer self)))

(cl:defmethod form-fields ((self page))
  (Page_formFields (ff-pointer self)))

(cl:defmethod duration ((self page))
  (Page_duration (ff-pointer self)))

(cl:defmethod label ((self page))
  (Page_label (ff-pointer self)))


(cl:defclass document()
  ((ff-pointer :reader ff-pointer)))

(cl:defmethod page ((self document) (index cl:integer))
  (Document_page (ff-pointer self) index))

(cl:defmethod page ((self document) label)
  (Document_page (ff-pointer self) label))

(cl:defmethod num-pages ((self document))
  (Document_numPages (ff-pointer self)))

(cl:defmethod page-mode ((self document))
  (Document_pageMode (ff-pointer self)))

(cl:defmethod page-layout ((self document))
  (Document_pageLayout (ff-pointer self)))

(cl:defmethod unlock ((self document) ownerPassword userPassword)
  (Document_unlock (ff-pointer self) ownerPassword userPassword))

(cl:defmethod is-locked ((self document))
  (Document_isLocked (ff-pointer self)))

(cl:defmethod date ((self document) data)
  (Document_date (ff-pointer self) data))

(cl:defmethod info ((self document) data)
  (Document_info (ff-pointer self) data))

(cl:defmethod info-keys ((self document))
  (Document_infoKeys (ff-pointer self)))

(cl:defmethod is-encrypted ((self document))
  (Document_isEncrypted (ff-pointer self)))

(cl:defmethod is-linearized ((self document))
  (Document_isLinearized (ff-pointer self)))

(cl:defmethod ok-to-print ((self document))
  (Document_okToPrint (ff-pointer self)))

(cl:defmethod ok-to-print-high-res ((self document))
  (Document_okToPrintHighRes (ff-pointer self)))

(cl:defmethod ok-to-change ((self document))
  (Document_okToChange (ff-pointer self)))

(cl:defmethod ok-to-copy ((self document))
  (Document_okToCopy (ff-pointer self)))

(cl:defmethod ok-to-add-notes ((self document))
  (Document_okToAddNotes (ff-pointer self)))

(cl:defmethod ok-to-fill-form ((self document))
  (Document_okToFillForm (ff-pointer self)))

(cl:defmethod ok-to-create-form-fields ((self document))
  (Document_okToCreateFormFields (ff-pointer self)))

(cl:defmethod ok-to-extract-for-accessibility ((self document))
  (Document_okToExtractForAccessibility (ff-pointer self)))

(cl:defmethod ok-to-assemble ((self document))
  (Document_okToAssemble (ff-pointer self)))

(cl:defmethod pdf-version ((self document))
  (Document_pdfVersion (ff-pointer self)))

(cl:defmethod fonts ((self document))
  (Document_fonts (ff-pointer self)))

(cl:defmethod scan-for-fonts ((self document) (numPages cl:integer) fontList)
  (Document_scanForFonts (ff-pointer self) numPages fontList))

(cl:defmethod font-data ((self document) (font font-info))
  (Document_fontData (ff-pointer self) font))

(cl:defmethod embedded-files ((self document))
  (Document_embeddedFiles (ff-pointer self)))

(cl:defmethod has-embedded-files ((self document))
  (Document_hasEmbeddedFiles (ff-pointer self)))

(cl:defmethod toc ((self document))
  (Document_toc (ff-pointer self)))

(cl:defmethod link-destination ((self document) name)
  (Document_linkDestination (ff-pointer self) name))

(cl:defmethod set-paper-color ((self document) color)
  (Document_setPaperColor (ff-pointer self) color))

(cl:defmethod paper-color ((self document))
  (Document_paperColor (ff-pointer self)))

(cl:defmethod set-render-backend ((self document) (backend cl:integer))
  (Document_setRenderBackend (ff-pointer self) backend))

(cl:defmethod render-backend ((self document))
  (Document_renderBackend (ff-pointer self)))

(cl:defmethod set-render-hint ((self document) (hint cl:integer) (on t))
  (Document_setRenderHint (ff-pointer self) hint on))

(cl:defmethod set-render-hint ((self document) (hint cl:integer))
  (Document_setRenderHint (ff-pointer self) hint))

(cl:defmethod render-hints ((self document))
  (Document_renderHints (ff-pointer self)))

(cl:defmethod ps-converter ((self document))
  (Document_psConverter (ff-pointer self)))

(cl:defmethod pdf-converter ((self document))
  (Document_pdfConverter (ff-pointer self)))

(cl:defmethod metadata ((self document))
  (Document_metadata (ff-pointer self)))

(cl:defmethod has-optional-content ((self document))
  (Document_hasOptionalContent (ff-pointer self)))

(cl:defmethod optional-content-model ((self document))
  (Document_optionalContentModel (ff-pointer self)))

(cl:defmethod scripts ((self document))
  (Document_scripts (ff-pointer self)))


(cl:defclass base-converter()
  ((ff-pointer :reader ff-pointer)))

(cl:defmethod set-output-file-name ((self base-converter) outputFileName)
  (BaseConverter_setOutputFileName (ff-pointer self) outputFileName))

(cl:defmethod set-output-device ((self base-converter) device)
  (BaseConverter_setOutputDevice (ff-pointer self) device))

(cl:defmethod convert ((self base-converter))
  (BaseConverter_convert (ff-pointer self)))


(cl:defclass psconverter(Poppler::BaseConverter)
  ((ff-pointer :reader ff-pointer)))

(cl:defmethod set-page-list ((self psconverter) pageList)
  (PSConverter_setPageList (ff-pointer self) pageList))

(cl:defmethod set-title ((self psconverter) title)
  (PSConverter_setTitle (ff-pointer self) title))

(cl:defmethod set-hdpi ((self psconverter) (hDPI cl:number))
  (PSConverter_setHDPI (ff-pointer self) hDPI))

(cl:defmethod set-vdpi ((self psconverter) (vDPI cl:number))
  (PSConverter_setVDPI (ff-pointer self) vDPI))

(cl:defmethod set-rotate ((self psconverter) (rotate cl:integer))
  (PSConverter_setRotate (ff-pointer self) rotate))

(cl:defmethod set-paper-width ((self psconverter) (paperWidth cl:integer))
  (PSConverter_setPaperWidth (ff-pointer self) paperWidth))

(cl:defmethod set-paper-height ((self psconverter) (paperHeight cl:integer))
  (PSConverter_setPaperHeight (ff-pointer self) paperHeight))

(cl:defmethod set-right-margin ((self psconverter) (marginRight cl:integer))
  (PSConverter_setRightMargin (ff-pointer self) marginRight))

(cl:defmethod set-bottom-margin ((self psconverter) (marginBottom cl:integer))
  (PSConverter_setBottomMargin (ff-pointer self) marginBottom))

(cl:defmethod set-left-margin ((self psconverter) (marginLeft cl:integer))
  (PSConverter_setLeftMargin (ff-pointer self) marginLeft))

(cl:defmethod set-top-margin ((self psconverter) (marginTop cl:integer))
  (PSConverter_setTopMargin (ff-pointer self) marginTop))

(cl:defmethod set-strict-margins ((self psconverter) (strictMargins t))
  (PSConverter_setStrictMargins (ff-pointer self) strictMargins))

(cl:defmethod set-force-rasterize ((self psconverter) (forceRasterize t))
  (PSConverter_setForceRasterize (ff-pointer self) forceRasterize))

(cl:defmethod set-psoptions ((self psconverter) options)
  (PSConverter_setPSOptions (ff-pointer self) options))

(cl:defmethod ps-options ((self psconverter))
  (PSConverter_psOptions (ff-pointer self)))

(cl:defmethod convert ((self psconverter))
  (PSConverter_convert (ff-pointer self)))


(cl:defclass pdfconverter(Poppler::BaseConverter)
  ((ff-pointer :reader ff-pointer)))

(cl:defmethod set-pdfoptions ((self pdfconverter) options)
  (PDFConverter_setPDFOptions (ff-pointer self) options))

(cl:defmethod pdf-options ((self pdfconverter))
  (PDFConverter_pdfOptions (ff-pointer self)))

(cl:defmethod convert ((self pdfconverter))
  (PDFConverter_convert (ff-pointer self)))


(cl:defclass sound-object()
  ((ff-pointer :reader ff-pointer)))

(cl:defmethod initialize-instance :after ((obj sound-object) &key popplersound)
  (setf (slot-value obj 'ff-pointer) (new_SoundObject popplersound)))

(cl:defmethod sound-type ((self sound-object))
  (SoundObject_soundType (ff-pointer self)))

(cl:defmethod url ((self sound-object))
  (SoundObject_url (ff-pointer self)))

(cl:defmethod data ((self sound-object))
  (SoundObject_data (ff-pointer self)))

(cl:defmethod sampling-rate ((self sound-object))
  (SoundObject_samplingRate (ff-pointer self)))

(cl:defmethod channels ((self sound-object))
  (SoundObject_channels (ff-pointer self)))

(cl:defmethod bits-per-sample ((self sound-object))
  (SoundObject_bitsPerSample (ff-pointer self)))

(cl:defmethod sound-encoding ((self sound-object))
  (SoundObject_soundEncoding (ff-pointer self)))


(cl:defclass movie-object()
  ((ff-pointer :reader ff-pointer)))

(cl:defmethod url ((self movie-object))
  (MovieObject_url (ff-pointer self)))

(cl:defmethod size ((self movie-object))
  (MovieObject_size (ff-pointer self)))

(cl:defmethod rotation ((self movie-object))
  (MovieObject_rotation (ff-pointer self)))

(cl:defmethod show-controls ((self movie-object))
  (MovieObject_showControls (ff-pointer self)))

(cl:defmethod play-mode ((self movie-object))
  (MovieObject_playMode (ff-pointer self)))

