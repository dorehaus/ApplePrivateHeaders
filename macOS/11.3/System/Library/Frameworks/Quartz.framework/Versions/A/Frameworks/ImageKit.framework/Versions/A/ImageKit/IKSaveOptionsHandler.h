/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <libobjc.A.dylib/NSControlTextEditingDelegate.h>

@class NSString, IKFlippedView, NSGridView, NSPopUpButton, NSSlider, NSButton, NSTextField, NSMutableDictionary, IKSaveOptions, NSArray, NSDictionary, NSView;

@interface IKSaveOptionsHandler : NSObject <NSControlTextEditingDelegate> {

	char _showOrientaionUI;
	char _rotateWithoutModifying;
	char _delegateSupportsCalculateEstimatedSize;
	char _delegateSupportsSaveOptionsChanged;
	char _delegateSupportsSaveOptionCanUseFileType;
	char _rememberLastSetting;
	BOOL _alphaRowVisible;
	BOOL _blockSizeRowVisible;
	BOOL _compressionRowVisible;
	BOOL _depthRowVisible;
	BOOL _encoderRowVisible;
	BOOL _encryptRowVisible;
	BOOL _fileSizeRowVisible;
	BOOL _formatRowVisible;
	BOOL _passwordRowVisible;
	BOOL _passwordsDontMatchRowVisible;
	BOOL _pdfaRowVisible;
	BOOL _pdfLinearRowVisible;
	BOOL _qualityRowVisible;
	BOOL _quartzFilterRowVisible;
	BOOL _resolutionRowVisible;
	BOOL _rotateRowVisible;
	BOOL _showGroup4Compression;
	BOOL _showLZWCompression;
	BOOL _showJPEGCompression;
	BOOL _showPackBitsCompression;
	BOOL _showRLECompression;
	BOOL _showZIPCompression;
	BOOL _alphaRowEnabled;
	NSString* _estimatedFileSize;
	IKFlippedView* _containerView;
	NSGridView* _gridView;
	NSPopUpButton* _fileFormatPopup;
	NSPopUpButton* _encoderPopup;
	NSPopUpButton* _blockSizePopup;
	NSPopUpButton* _quartzFilterPopup;
	NSSlider* _qualitySlider;
	NSPopUpButton* _bitDepthPopup;
	NSPopUpButton* _compressionPopup;
	NSButton* _alphaButton;
	NSButton* _rotateButton;
	NSTextField* _resolutionTextField;
	NSPopUpButton* _resolutionUnit;
	NSButton* _pdfAButton;
	NSButton* _pdfLinearButton;
	NSButton* _encryptButton;
	NSTextField* _password1TextField;
	NSTextField* _password2TextField;
	NSMutableDictionary* _currentSelection;
	IKSaveOptions* _saveOptions;
	NSString* _originalImageUTType;
	NSString* _minQualityLabel;
	NSString* _maxQualityLabel;
	NSString* _estimatedFileSizeDisplay;
	NSString* _passwordWarningString;
	long long _originalBitDepth;
	long long _originalHasAlpha;
	long long _originalResolution;
	long long _selectedBitDepth;
	long long _selectedResolutionUnit;
	NSArray* _fileFormats;
	NSArray* _defaultFileFormats;
	NSMutableDictionary* _displayNames;
	NSDictionary* _qualitySupport;
	NSArray* _alphaSupport;
	NSArray* _encoderSupport;
	NSArray* _blockSizeSupport;
	NSArray* _compressionSupport;
	NSDictionary* _bitDepthSupport;
	NSArray* _pdfASupport;
	NSArray* _pdfLinearSupport;
	NSArray* _pdfEncryptSupport;
	NSArray* _quartzFilterSupport;
	NSArray* _rotateSupport;

}

@property (assign) IKFlippedView * containerView;                                      //@synthesize containerView=_containerView - In the implementation block
@property (assign) NSGridView * gridView;                                              //@synthesize gridView=_gridView - In the implementation block
@property (assign) NSPopUpButton * fileFormatPopup;                                    //@synthesize fileFormatPopup=_fileFormatPopup - In the implementation block
@property (assign) NSPopUpButton * encoderPopup;                                       //@synthesize encoderPopup=_encoderPopup - In the implementation block
@property (assign) NSPopUpButton * blockSizePopup;                                     //@synthesize blockSizePopup=_blockSizePopup - In the implementation block
@property (assign) NSPopUpButton * quartzFilterPopup;                                  //@synthesize quartzFilterPopup=_quartzFilterPopup - In the implementation block
@property (assign) NSSlider * qualitySlider;                                           //@synthesize qualitySlider=_qualitySlider - In the implementation block
@property (assign) NSPopUpButton * bitDepthPopup;                                      //@synthesize bitDepthPopup=_bitDepthPopup - In the implementation block
@property (assign) NSPopUpButton * compressionPopup;                                   //@synthesize compressionPopup=_compressionPopup - In the implementation block
@property (assign) NSButton * alphaButton;                                             //@synthesize alphaButton=_alphaButton - In the implementation block
@property (assign) NSButton * rotateButton;                                            //@synthesize rotateButton=_rotateButton - In the implementation block
@property (assign) NSTextField * resolutionTextField;                                  //@synthesize resolutionTextField=_resolutionTextField - In the implementation block
@property (assign) NSPopUpButton * resolutionUnit;                                     //@synthesize resolutionUnit=_resolutionUnit - In the implementation block
@property (assign) NSButton * pdfAButton;                                              //@synthesize pdfAButton=_pdfAButton - In the implementation block
@property (assign) NSButton * pdfLinearButton;                                         //@synthesize pdfLinearButton=_pdfLinearButton - In the implementation block
@property (assign) NSButton * encryptButton;                                           //@synthesize encryptButton=_encryptButton - In the implementation block
@property (assign) NSTextField * password1TextField;                                   //@synthesize password1TextField=_password1TextField - In the implementation block
@property (assign) NSTextField * password2TextField;                                   //@synthesize password2TextField=_password2TextField - In the implementation block
@property (retain) NSMutableDictionary * currentSelection;                             //@synthesize currentSelection=_currentSelection - In the implementation block
@property (retain) IKSaveOptions * saveOptions;                                        //@synthesize saveOptions=_saveOptions - In the implementation block
@property (assign) BOOL alphaRowVisible;                                               //@synthesize alphaRowVisible=_alphaRowVisible - In the implementation block
@property (assign) BOOL blockSizeRowVisible;                                           //@synthesize blockSizeRowVisible=_blockSizeRowVisible - In the implementation block
@property (assign) BOOL compressionRowVisible;                                         //@synthesize compressionRowVisible=_compressionRowVisible - In the implementation block
@property (assign) BOOL depthRowVisible;                                               //@synthesize depthRowVisible=_depthRowVisible - In the implementation block
@property (assign) BOOL encoderRowVisible;                                             //@synthesize encoderRowVisible=_encoderRowVisible - In the implementation block
@property (assign) BOOL encryptRowVisible;                                             //@synthesize encryptRowVisible=_encryptRowVisible - In the implementation block
@property (assign) BOOL fileSizeRowVisible;                                            //@synthesize fileSizeRowVisible=_fileSizeRowVisible - In the implementation block
@property (assign) BOOL formatRowVisible;                                              //@synthesize formatRowVisible=_formatRowVisible - In the implementation block
@property (assign) BOOL passwordRowVisible;                                            //@synthesize passwordRowVisible=_passwordRowVisible - In the implementation block
@property (assign) BOOL passwordsDontMatchRowVisible;                                  //@synthesize passwordsDontMatchRowVisible=_passwordsDontMatchRowVisible - In the implementation block
@property (assign) BOOL pdfaRowVisible;                                                //@synthesize pdfaRowVisible=_pdfaRowVisible - In the implementation block
@property (assign) BOOL pdfLinearRowVisible;                                           //@synthesize pdfLinearRowVisible=_pdfLinearRowVisible - In the implementation block
@property (assign) BOOL qualityRowVisible;                                             //@synthesize qualityRowVisible=_qualityRowVisible - In the implementation block
@property (assign) BOOL quartzFilterRowVisible;                                        //@synthesize quartzFilterRowVisible=_quartzFilterRowVisible - In the implementation block
@property (assign) BOOL resolutionRowVisible;                                          //@synthesize resolutionRowVisible=_resolutionRowVisible - In the implementation block
@property (assign) BOOL rotateRowVisible;                                              //@synthesize rotateRowVisible=_rotateRowVisible - In the implementation block
@property (assign) BOOL showGroup4Compression;                                         //@synthesize showGroup4Compression=_showGroup4Compression - In the implementation block
@property (assign) BOOL showLZWCompression;                                            //@synthesize showLZWCompression=_showLZWCompression - In the implementation block
@property (assign) BOOL showJPEGCompression;                                           //@synthesize showJPEGCompression=_showJPEGCompression - In the implementation block
@property (assign) BOOL showPackBitsCompression;                                       //@synthesize showPackBitsCompression=_showPackBitsCompression - In the implementation block
@property (assign) BOOL showRLECompression;                                            //@synthesize showRLECompression=_showRLECompression - In the implementation block
@property (assign) BOOL showZIPCompression;                                            //@synthesize showZIPCompression=_showZIPCompression - In the implementation block
@property (assign) BOOL alphaRowEnabled;                                               //@synthesize alphaRowEnabled=_alphaRowEnabled - In the implementation block
@property (copy) NSString * originalImageUTType;                                       //@synthesize originalImageUTType=_originalImageUTType - In the implementation block
@property (copy) NSString * minQualityLabel;                                           //@synthesize minQualityLabel=_minQualityLabel - In the implementation block
@property (copy) NSString * maxQualityLabel;                                           //@synthesize maxQualityLabel=_maxQualityLabel - In the implementation block
@property (copy) NSString * estimatedFileSizeDisplay;                                  //@synthesize estimatedFileSizeDisplay=_estimatedFileSizeDisplay - In the implementation block
@property (copy) NSString * passwordWarningString;                                     //@synthesize passwordWarningString=_passwordWarningString - In the implementation block
@property (assign) long long originalBitDepth;                                         //@synthesize originalBitDepth=_originalBitDepth - In the implementation block
@property (assign) long long originalHasAlpha;                                         //@synthesize originalHasAlpha=_originalHasAlpha - In the implementation block
@property (assign) long long originalResolution;                                       //@synthesize originalResolution=_originalResolution - In the implementation block
@property (assign) long long selectedBitDepth;                                         //@synthesize selectedBitDepth=_selectedBitDepth - In the implementation block
@property (assign) long long selectedResolutionUnit;                                   //@synthesize selectedResolutionUnit=_selectedResolutionUnit - In the implementation block
@property (retain) NSArray * fileFormats;                                              //@synthesize fileFormats=_fileFormats - In the implementation block
@property (retain) NSArray * defaultFileFormats;                                       //@synthesize defaultFileFormats=_defaultFileFormats - In the implementation block
@property (retain) NSMutableDictionary * displayNames;                                 //@synthesize displayNames=_displayNames - In the implementation block
@property (retain) NSDictionary * qualitySupport;                                      //@synthesize qualitySupport=_qualitySupport - In the implementation block
@property (retain) NSArray * alphaSupport;                                             //@synthesize alphaSupport=_alphaSupport - In the implementation block
@property (retain) NSArray * encoderSupport;                                           //@synthesize encoderSupport=_encoderSupport - In the implementation block
@property (retain) NSArray * blockSizeSupport;                                         //@synthesize blockSizeSupport=_blockSizeSupport - In the implementation block
@property (retain) NSArray * compressionSupport;                                       //@synthesize compressionSupport=_compressionSupport - In the implementation block
@property (retain) NSDictionary * bitDepthSupport;                                     //@synthesize bitDepthSupport=_bitDepthSupport - In the implementation block
@property (retain) NSArray * pdfASupport;                                              //@synthesize pdfASupport=_pdfASupport - In the implementation block
@property (retain) NSArray * pdfLinearSupport;                                         //@synthesize pdfLinearSupport=_pdfLinearSupport - In the implementation block
@property (retain) NSArray * pdfEncryptSupport;                                        //@synthesize pdfEncryptSupport=_pdfEncryptSupport - In the implementation block
@property (retain) NSArray * quartzFilterSupport;                                      //@synthesize quartzFilterSupport=_quartzFilterSupport - In the implementation block
@property (retain) NSArray * rotateSupport;                                            //@synthesize rotateSupport=_rotateSupport - In the implementation block
@property (readonly) NSView * view; 
@property (assign,nonatomic) char showOrientaionUI;                                    //@synthesize showOrientaionUI=_showOrientaionUI - In the implementation block
@property (assign,nonatomic) char rotateWithoutModifying;                              //@synthesize rotateWithoutModifying=_rotateWithoutModifying - In the implementation block
@property (assign,nonatomic) char delegateSupportsCalculateEstimatedSize;              //@synthesize delegateSupportsCalculateEstimatedSize=_delegateSupportsCalculateEstimatedSize - In the implementation block
@property (assign) char delegateSupportsSaveOptionsChanged;                            //@synthesize delegateSupportsSaveOptionsChanged=_delegateSupportsSaveOptionsChanged - In the implementation block
@property (assign) char delegateSupportsSaveOptionCanUseFileType;                      //@synthesize delegateSupportsSaveOptionCanUseFileType=_delegateSupportsSaveOptionCanUseFileType - In the implementation block
@property (assign,nonatomic) NSString * estimatedFileSize;                             //@synthesize estimatedFileSize=_estimatedFileSize - In the implementation block
@property (nonatomic,readonly) NSString * imageUTType; 
@property (__weak,readonly) NSDictionary * userSelection; 
@property (assign) char rememberLastSetting;                                           //@synthesize rememberLastSetting=_rememberLastSetting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSaveOptions:(id)arg1 imageProperties:(id)arg2 imageUTType:(id)arg3 ;
-(void)setDelegateSupportsCalculateEstimatedSize:(char)arg1 ;
-(void)setDelegateSupportsSaveOptionsChanged:(char)arg1 ;
-(void)setDelegateSupportsSaveOptionCanUseFileType:(char)arg1 ;
-(void)setCanCalculateEstimatedSize:(char)arg1 ;
-(void)setRememberLastSetting:(char)arg1 ;
-(void)viewWasAddedToSavePanel;
-(id)fileExtensions;
-(void)updateImageProperties:(id)arg1 imageUTType:(id)arg2 ;
-(void)setShowOrientaionUI:(char)arg1 ;
-(char)showOrientaionUI;
-(void)setRotateWithoutModifying:(char)arg1 ;
-(char)rotateWithoutModifying;
-(void)syncMetadata:(id)arg1 ;
-(id)pdfOptions;
-(char)rememberLastSetting;
-(void)setSaveOptions:(IKSaveOptions *)arg1 ;
-(void)setFormatRowVisible:(BOOL)arg1 ;
-(void)setPasswordWarningString:(NSString *)arg1 ;
-(void)setEstimatedFileSizeDisplay:(NSString *)arg1 ;
-(void)setFileFormats:(NSArray *)arg1 ;
-(void)setDefaultFileFormats:(NSArray *)arg1 ;
-(void)setQualitySupport:(NSDictionary *)arg1 ;
-(void)setEncoderSupport:(NSArray *)arg1 ;
-(void)setBlockSizeSupport:(NSArray *)arg1 ;
-(void)setCompressionSupport:(NSArray *)arg1 ;
-(void)setBitDepthSupport:(NSDictionary *)arg1 ;
-(void)setPdfASupport:(NSArray *)arg1 ;
-(void)setPdfLinearSupport:(NSArray *)arg1 ;
-(void)setPdfEncryptSupport:(NSArray *)arg1 ;
-(void)setQuartzFilterSupport:(NSArray *)arg1 ;
-(void)setAlphaSupport:(NSArray *)arg1 ;
-(void)setRotateSupport:(NSArray *)arg1 ;
-(void)setMinQualityLabel:(NSString *)arg1 ;
-(void)setMaxQualityLabel:(NSString *)arg1 ;
-(void)setOriginalImageUTType:(NSString *)arg1 ;
-(void)setOriginalBitDepth:(long long)arg1 ;
-(long long)originalBitDepth;
-(void)setSelectedBitDepth:(long long)arg1 ;
-(void)setOriginalHasAlpha:(long long)arg1 ;
-(void)setOriginalResolution:(long long)arg1 ;
-(long long)originalResolution;
-(NSArray *)fileFormats;
-(NSPopUpButton *)fileFormatPopup;
-(void)setupArrays;
-(void)setupFileFormatPopup;
-(void)setupQuartzFilterPopup;
-(NSTextField *)resolutionTextField;
-(void)setSelectedResolutionUnit:(long long)arg1 ;
-(void)compressionPopupWillPopup:(id)arg1 ;
-(NSPopUpButton *)compressionPopup;
-(void)formatPopupWillPopup:(id)arg1 ;
-(NSString *)originalImageUTType;
-(void)fileFormatChanged:(id)arg1 ;
-(NSArray *)defaultFileFormats;
-(void)setShowGroup4Compression:(BOOL)arg1 ;
-(void)setShowLZWCompression:(BOOL)arg1 ;
-(void)setShowJPEGCompression:(BOOL)arg1 ;
-(void)setShowPackBitsCompression:(BOOL)arg1 ;
-(void)setShowZIPCompression:(BOOL)arg1 ;
-(void)setShowRLECompression:(BOOL)arg1 ;
-(NSPopUpButton *)bitDepthPopup;
-(void)compareEncyptPassword1and2;
-(void)setupBitDepthPopup:(id)arg1 ;
-(NSArray *)encoderSupport;
-(void)setEncoderRowVisible:(BOOL)arg1 ;
-(NSArray *)blockSizeSupport;
-(void)setBlockSizeRowVisible:(BOOL)arg1 ;
-(NSArray *)quartzFilterSupport;
-(void)setQuartzFilterRowVisible:(BOOL)arg1 ;
-(NSDictionary *)qualitySupport;
-(void)setQualityRowVisible:(BOOL)arg1 ;
-(BOOL)qualityRowVisible;
-(NSDictionary *)bitDepthSupport;
-(void)setDepthRowVisible:(BOOL)arg1 ;
-(NSArray *)compressionSupport;
-(void)setCompressionRowVisible:(BOOL)arg1 ;
-(BOOL)compressionRowVisible;
-(long long)selectedBitDepth;
-(long long)originalHasAlpha;
-(void)setAlphaRowVisible:(BOOL)arg1 ;
-(NSArray *)alphaSupport;
-(void)setAlphaRowEnabled:(BOOL)arg1 ;
-(NSArray *)rotateSupport;
-(void)setRotateRowVisible:(BOOL)arg1 ;
-(void)setResolutionRowVisible:(BOOL)arg1 ;
-(NSArray *)pdfASupport;
-(void)setPdfaRowVisible:(BOOL)arg1 ;
-(void)setPdfLinearRowVisible:(BOOL)arg1 ;
-(void)setEncryptRowVisible:(BOOL)arg1 ;
-(BOOL)encryptRowVisible;
-(void)setPasswordRowVisible:(BOOL)arg1 ;
-(void)setPasswordsDontMatchRowVisible:(BOOL)arg1 ;
-(char)delegateSupportsCalculateEstimatedSize;
-(void)setFileSizeRowVisible:(BOOL)arg1 ;
-(char)delegateSupportsSaveOptionCanUseFileType;
-(void)updateCurrentSelection;
-(BOOL)encoderRowVisible;
-(NSPopUpButton *)encoderPopup;
-(BOOL)blockSizeRowVisible;
-(NSPopUpButton *)blockSizePopup;
-(BOOL)quartzFilterRowVisible;
-(NSPopUpButton *)quartzFilterPopup;
-(NSSlider *)qualitySlider;
-(BOOL)depthRowVisible;
-(BOOL)alphaRowVisible;
-(NSButton *)alphaButton;
-(BOOL)rotateRowVisible;
-(BOOL)resolutionRowVisible;
-(NSPopUpButton *)resolutionUnit;
-(BOOL)pdfaRowVisible;
-(NSButton *)pdfAButton;
-(BOOL)pdfLinearRowVisible;
-(NSButton *)pdfLinearButton;
-(NSTextField *)password1TextField;
-(NSTextField *)password2TextField;
-(char)delegateSupportsSaveOptionsChanged;
-(long long)selectedResolutionUnit;
-(void)quartzFilterChanged:(id)arg1 ;
-(void)bitDepthChanged:(id)arg1 ;
-(void)addBitDepth:(long long)arg1 toMenu:(id)arg2 enabled:(char)arg3 ;
-(void)compressionDidChange:(id)arg1 ;
-(void)setDelegateSupportCalculateEstimatedSize:(char)arg1 ;
-(void)encryptStateChanged:(id)arg1 ;
-(void)resolutionUnitChanged:(id)arg1 ;
-(void)setFileFormatPopup:(NSPopUpButton *)arg1 ;
-(void)setEncoderPopup:(NSPopUpButton *)arg1 ;
-(void)setBlockSizePopup:(NSPopUpButton *)arg1 ;
-(void)setQuartzFilterPopup:(NSPopUpButton *)arg1 ;
-(void)setQualitySlider:(NSSlider *)arg1 ;
-(void)setBitDepthPopup:(NSPopUpButton *)arg1 ;
-(void)setCompressionPopup:(NSPopUpButton *)arg1 ;
-(void)setAlphaButton:(NSButton *)arg1 ;
-(void)setResolutionTextField:(NSTextField *)arg1 ;
-(void)setResolutionUnit:(NSPopUpButton *)arg1 ;
-(void)setPdfAButton:(NSButton *)arg1 ;
-(void)setPdfLinearButton:(NSButton *)arg1 ;
-(void)setPassword1TextField:(NSTextField *)arg1 ;
-(void)setPassword2TextField:(NSTextField *)arg1 ;
-(BOOL)fileSizeRowVisible;
-(BOOL)formatRowVisible;
-(BOOL)passwordRowVisible;
-(BOOL)passwordsDontMatchRowVisible;
-(BOOL)showGroup4Compression;
-(BOOL)showLZWCompression;
-(BOOL)showJPEGCompression;
-(BOOL)showPackBitsCompression;
-(BOOL)showRLECompression;
-(BOOL)showZIPCompression;
-(BOOL)alphaRowEnabled;
-(NSString *)minQualityLabel;
-(NSString *)maxQualityLabel;
-(NSString *)estimatedFileSizeDisplay;
-(NSString *)passwordWarningString;
-(NSArray *)pdfLinearSupport;
-(NSArray *)pdfEncryptSupport;
-(void)dealloc;
-(NSView *)view;
-(IKSaveOptions *)saveOptions;
-(void)controlTextDidChange:(id)arg1 ;
-(NSGridView *)gridView;
-(IKFlippedView *)containerView;
-(void)setContainerView:(IKFlippedView *)arg1 ;
-(NSMutableDictionary *)displayNames;
-(void)setDisplayNames:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)currentSelection;
-(void)setCurrentSelection:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)userSelection;
-(NSButton *)rotateButton;
-(void)setRotateButton:(NSButton *)arg1 ;
-(void)setGridView:(NSGridView *)arg1 ;
-(NSString *)estimatedFileSize;
-(NSString *)imageUTType;
-(NSButton *)encryptButton;
-(void)setEncryptButton:(NSButton *)arg1 ;
-(char)imagePropertiesAreEqualTo:(id)arg1 forType:(id)arg2 ;
-(void)setEstimatedFileSize:(NSString *)arg1 ;
-(void)saveOptionsChanged:(id)arg1 ;
@end

