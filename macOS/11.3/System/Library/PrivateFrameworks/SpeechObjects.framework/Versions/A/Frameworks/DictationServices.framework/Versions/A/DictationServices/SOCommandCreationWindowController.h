/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeechObjects.framework/Versions/A/Frameworks/DictationServices.framework/Versions/A/DictationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class NSView, NSButton, SOCommandEditingViewController;

@interface SOCommandCreationWindowController : NSWindowController {

	NSView* _editingViewContainer;
	NSButton* _saveButton;
	SOCommandEditingViewController* _editingViewController;

}
+(id)newCommandCreationWindowController;
-(void)dealloc;
-(void)cancel:(id)arg1 ;
-(void)save:(id)arg1 ;
-(void)editingStateDidChange;
-(void)showCommandCreationWindowForAppPID:(int)arg1 nounSpecifiers:(id)arg2 ;
-(void)updatePropertiesForClient:(id)arg1 ;
-(void)_installEditingView;
@end

