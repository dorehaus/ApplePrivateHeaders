/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSPrintInfo, NSWindowController, NSArray;

@interface NSPageLayout : NSObject {

	NSMutableArray* _accessoryControllers;
	NSPrintInfo* _originalPrintInfo;
	id _delegate;
	SEL _didEndSelector;
	void* _contextInfo;
	NSPrintInfo* _presentedPrintInfo;
	NSWindowController* _windowController;

}

@property (copy,readonly) NSArray * accessoryControllers; 
@property (readonly) NSPrintInfo * printInfo; 
+(id)pageLayout;
-(void)dealloc;
-(void)setAccessoryView:(id)arg1 ;
-(long long)runModal;
-(id)accessoryView;
-(NSPrintInfo *)printInfo;
-(void)beginSheetWithPrintInfo:(id)arg1 modalForWindow:(id)arg2 delegate:(id)arg3 didEndSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(long long)runModalWithPrintInfo:(id)arg1 ;
-(void)_deprecatedReadPrintInfo;
-(NSArray *)accessoryControllers;
-(void)_sheet:(id)arg1 didEndWithResult:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)_deprecatedWritePrintInfo;
-(void)addAccessoryController:(id)arg1 ;
-(void)removeAccessoryController:(id)arg1 ;
-(void)readPrintInfo;
-(void)writePrintInfo;
-(void)convertOldFactor:(float*)arg1 newFactor:(float*)arg2 ;
-(void)pickedButton:(id)arg1 ;
-(void)pickedOrientation:(id)arg1 ;
-(void)pickedPaperSize:(id)arg1 ;
-(void)pickedUnits:(id)arg1 ;
@end

