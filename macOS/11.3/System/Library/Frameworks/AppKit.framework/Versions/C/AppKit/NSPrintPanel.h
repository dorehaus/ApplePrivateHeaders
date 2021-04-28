/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSView, NSString, NSPrintInfo, NSWindowController, NSArray;

@interface NSPrintPanel : NSObject {

	NSMutableArray* _accessoryControllers;
	id _previewController;
	NSView* _thumbnailView;
	long long _options;
	NSString* _defaultButtonTitle;
	NSString* _helpAnchor;
	NSString* _jobStyleHint;
	NSPrintInfo* _originalPrintInfo;
	id _delegate;
	SEL _didEndSelector;
	void* _contextInfo;
	NSPrintInfo* _presentedPrintInfo;
	NSWindowController* _windowController;

}

@property (copy,readonly) NSArray * accessoryControllers; 
@property (assign) unsigned long long options; 
@property (copy) NSString * helpAnchor; 
@property (copy) NSString * jobStyleHint; 
@property (readonly) NSPrintInfo * printInfo; 
+(id)printPanel;
-(void)dealloc;
-(id)init;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(void)setAccessoryView:(id)arg1 ;
-(long long)runModal;
-(NSString *)helpAnchor;
-(void)setHelpAnchor:(NSString *)arg1 ;
-(id)accessoryView;
-(NSPrintInfo *)printInfo;
-(void)beginSheetWithPrintInfo:(id)arg1 modalForWindow:(id)arg2 delegate:(id)arg3 didEndSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(long long)runModalWithPrintInfo:(id)arg1 ;
-(NSArray *)accessoryControllers;
-(void)_sheet:(id)arg1 didEndWithResult:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)addAccessoryController:(id)arg1 ;
-(void)removeAccessoryController:(id)arg1 ;
-(void)pickedButton:(id)arg1 ;
-(void)setJobStyleHint:(NSString *)arg1 ;
-(NSString *)jobStyleHint;
-(void)_setThumbnailView:(id)arg1 ;
-(id)_thumbnailView;
-(void)_setPreviewController:(id)arg1 ;
-(void)_deprecatedUpdateFromPrintInfo;
-(unsigned)_optionsForShowingAsSheet:(char)arg1 ;
-(id)defaultButtonTitle;
-(void)setDefaultButtonTitle:(id)arg1 ;
-(void)_deprecatedFinalWritePrintInfo;
-(long long)_runModalWithPrintInfo:(id)arg1 ;
-(void)updateFromPrintInfo;
-(void)finalWritePrintInfo;
-(void)_deprecatedSetAccessoryView:(id)arg1 ;
-(id)_deprecatedAccessoryView;
-(void)pickedAllPages:(id)arg1 ;
-(void)pickedLayoutList:(id)arg1 ;
@end
