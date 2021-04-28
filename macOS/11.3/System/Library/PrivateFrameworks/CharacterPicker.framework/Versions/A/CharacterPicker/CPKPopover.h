/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CharacterPicker.framework/Versions/A/CharacterPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CharacterPicker/CharacterPicker-Structs.h>
#import <AppKit/NSPopover.h>

@protocol CPKPopoverDelegate, CPKTargetProvider;
@interface CPKPopover : NSPopover {

	id<CPKPopoverDelegate> _CPKDelegate;
	id<CPKTargetProvider> _CPKTargetProvider;
	void* _CPKUserInfo;
	id _CPKPrivate;

}

@property (assign) id<CPKPopoverDelegate> CPKDelegate;                   //@synthesize CPKDelegate=_CPKDelegate - In the implementation block
@property (assign) id<CPKTargetProvider> CPKTargetProvider;              //@synthesize CPKTargetProvider=_CPKTargetProvider - In the implementation block
@property (assign) void* CPKUserInfo;                                    //@synthesize CPKUserInfo=_CPKUserInfo - In the implementation block
+(id)transformWindowButtonToExpand:(char)arg1 ;
+(id)characterPickerToolbarItem:(id)arg1 ;
+(void)logCurrentTimeWithLabel:(id)arg1 forLogType:(id)arg2 ;
+(id)logArrayForLogType:(id)arg1 ;
+(id)performanceLogWithBaseTime:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(void)close;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)makeKeyWindow;
-(void)setDataSource:(id)arg1 ;
-(void)cancelOperation:(id)arg1 ;
-(void)showRelativeToRect:(CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3 ;
-(id)searchString;
-(char)popoverShouldDetach:(id)arg1 ;
-(id)detachableWindowForPopover:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(id)_actionTarget;
-(id)_privateStorage;
-(void)characterDidSelected:(id)arg1 ;
-(void)windowWillClosed:(id)arg1 ;
-(void)_characterViewerWillOpen:(id)arg1 ;
-(void)_characterViewerDidOpen:(id)arg1 ;
-(id<CPKPopoverDelegate>)CPKDelegate;
-(char)showingLargeWindow;
-(id)alternateLargeWindow;
-(void)setShowingLargeWindow:(char)arg1 ;
-(void)informClosingDetachedWindow:(id)arg1 ;
-(void)setDataSource:(id)arg1 usingBlockOnMainThread:(/*^block*/id)arg2 ;
-(char)_isValidTarget:(id)arg1 ;
-(void)_insertSelectedCharacter:(id)arg1 toTarget:(id)arg2 ;
-(void)_showPopoverFromToolbarItem:(id)arg1 ;
-(void)_showPopoverFromToolbarMenu:(id)arg1 ;
-(void)_popoverDidOpen:(id)arg1 ;
-(void)_popoverDidClose:(id)arg1 ;
-(void)_emojiBarDidDismiss:(id)arg1 ;
-(void)_externalCharacterViewerWindowOpened:(id)arg1 ;
-(void)_externalCharacterViewerWindowRevertedToPicker:(id)arg1 ;
-(void)_popoverWillOpen;
-(void)_showPopoverByCallingSuperclass;
-(id)detachedWindowCreate:(char)arg1 ;
-(void)setDetachedWindowLevel:(long long)arg1 ;
-(void)setAlternateLargeWindow:(id)arg1 ;
-(void)_targetTextViewSelectionChanged:(id)arg1 ;
-(void)setDisplayAsWindow:(char)arg1 preferredLoc:(CGPoint)arg2 ;
-(void)_postCharacterPickerOpenedNotification;
-(void)setEmojiIMViewState:(id)arg1 ;
-(void)transformWindow;
-(void)setShowOpeningAnimation:(char)arg1 ;
-(void)setCPKDelegate:(id<CPKPopoverDelegate>)arg1 ;
-(id<CPKTargetProvider>)CPKTargetProvider;
-(void)setCPKTargetProvider:(id<CPKTargetProvider>)arg1 ;
-(void*)CPKUserInfo;
-(void)setCPKUserInfo:(void*)arg1 ;
@end

