/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/IKUIHelper.h>

@class IKScanUIControllerSimple, IKUIHelper, NSMutableDictionary, IKScannerPreviewSimple, NSImageView, NSView, NSPopUpButton, NSButton, IKPathPopupButton, NSMutableArray;

@interface IKScanUIViewSimple : NSView <IKUIHelper> {

	IKScanUIControllerSimple* _scanUIControllerSimple;
	IKUIHelper* _uiHelper;
	char _didSetupWindowNotifications;
	NSMutableDictionary* _bindingInfo;
	IKScannerPreviewSimple* _preview;
	NSImageView* _separator;
	NSView* _controlsContainer;
	NSPopUpButton* _deviceSelectorPopup;
	char _showUseDocumentFeederCheckbox;
	NSButton* _useDocumentFeederCheckbox;
	IKPathPopupButton* _pathControl;
	NSPopUpButton* _scanSizePopup;
	NSButton* _showDetailsButton;
	NSButton* _scan_or_addToDocument_Button;
	NSButton* _overview_or_ScanRescan_Button;
	NSButton* _doneButton;
	char _reviewResultFlagAtButtonCreation;
	char _scanSizeIncludesAutoDetection;
	NSMutableArray* _nextKeyViews;

}

@property (assign) IKScanUIControllerSimple * scanUIControllerSimple;              //@synthesize scanUIControllerSimple=_scanUIControllerSimple - In the implementation block
@property (assign) IKScannerPreviewSimple * preview;                               //@synthesize preview=_preview - In the implementation block
@property (assign) NSImageView * separator;                                        //@synthesize separator=_separator - In the implementation block
@property (assign) NSView * controlsContainer;                                     //@synthesize controlsContainer=_controlsContainer - In the implementation block
@property (assign) NSPopUpButton * deviceSelectorPopup;                            //@synthesize deviceSelectorPopup=_deviceSelectorPopup - In the implementation block
@property (assign) char showUseDocumentFeederCheckbox;                             //@synthesize showUseDocumentFeederCheckbox=_showUseDocumentFeederCheckbox - In the implementation block
@property (assign) NSButton * useDocumentFeederCheckbox;                           //@synthesize useDocumentFeederCheckbox=_useDocumentFeederCheckbox - In the implementation block
@property (assign) IKPathPopupButton * pathControl;                                //@synthesize pathControl=_pathControl - In the implementation block
@property (assign) NSPopUpButton * scanSizePopup;                                  //@synthesize scanSizePopup=_scanSizePopup - In the implementation block
@property (assign) NSButton * showDetailsButton;                                   //@synthesize showDetailsButton=_showDetailsButton - In the implementation block
@property (assign) NSButton * scan_or_addToDocument_Button;                        //@synthesize scan_or_addToDocument_Button=_scan_or_addToDocument_Button - In the implementation block
@property (assign) NSButton * overview_or_ScanRescan_Button;                       //@synthesize overview_or_ScanRescan_Button=_overview_or_ScanRescan_Button - In the implementation block
@property (assign) NSButton * doneButton;                                          //@synthesize doneButton=_doneButton - In the implementation block
-(CGRect)defaultRectForIdentifier:(id)arg1 ;
-(unsigned long long)controlSizeForIdentifier:(id)arg1 ;
-(void)setupScanSizePopup:(id)arg1 includeAutoDetect:(char)arg2 ;
-(void)createAllViews;
-(void)scannerDeviceChanged:(id)arg1 ;
-(NSPopUpButton *)deviceSelectorPopup;
-(void)setShowUseDocumentFeederCheckbox:(char)arg1 ;
-(void)reLayoutUI;
-(NSButton *)useDocumentFeederCheckbox;
-(NSPopUpButton *)scanSizePopup;
-(void)setControlsContainer:(NSView *)arg1 ;
-(void)setDeviceSelectorPopup:(NSPopUpButton *)arg1 ;
-(void)setUseDocumentFeederCheckbox:(NSButton *)arg1 ;
-(void)setScanSizePopup:(NSPopUpButton *)arg1 ;
-(void)setScan_or_addToDocument_Button:(NSButton *)arg1 ;
-(void)setOverview_or_ScanRescan_Button:(NSButton *)arg1 ;
-(void)setupAllViews;
-(void)setupDeviceSelectorUI;
-(void)setupUseDocumentFeederUI;
-(void)setupPathControlUI;
-(void)setupScanButtonsUI;
-(void)addBindingInfo:(id)arg1 object:(id)arg2 ;
-(int)scanSizePopupWidth;
-(void)setupUseDocumentFeederCheckbox:(id)arg1 ;
-(void)updatePathControl;
-(NSView *)controlsContainer;
-(char)showUseDocumentFeederCheckbox;
-(NSButton *)scan_or_addToDocument_Button;
-(NSButton *)overview_or_ScanRescan_Button;
-(IKScanUIControllerSimple *)scanUIControllerSimple;
-(void)setScanUIControllerSimple:(IKScanUIControllerSimple *)arg1 ;
-(void)remove;
-(void)updateConstraints;
-(id)initWithController:(id)arg1 ;
-(void)install;
-(IKPathPopupButton *)pathControl;
-(NSButton *)showDetailsButton;
-(void)setShowDetailsButton:(NSButton *)arg1 ;
-(NSImageView *)separator;
-(void)setSeparator:(NSImageView *)arg1 ;
-(void)setupBindings;
-(NSButton *)doneButton;
-(void)setDoneButton:(NSButton *)arg1 ;
-(void)setPreview:(IKScannerPreviewSimple *)arg1 ;
-(IKScannerPreviewSimple *)preview;
-(void)setupPreview;
-(void)unbindAll;
-(void)setPathControl:(IKPathPopupButton *)arg1 ;
@end
