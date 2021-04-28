/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CharacterPicker.framework/Versions/A/CharacterPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSTextView.h>

@class NSCell;

@interface CPKSearchFieldEditor : NSTextView {

	char _hasActiveNavigationTarget;
	char _isRTLLayout;
	NSCell* _ownerCell;

}

@property (assign) char hasActiveNavigationTarget;              //@synthesize hasActiveNavigationTarget=_hasActiveNavigationTarget - In the implementation block
@property (assign) NSCell * ownerCell;                          //@synthesize ownerCell=_ownerCell - In the implementation block
@property (assign) char isRTLLayout;                            //@synthesize isRTLLayout=_isRTLLayout - In the implementation block
-(void)dealloc;
-(id)init;
-(char)_isEmpty;
-(char)allowsVibrancy;
-(void)doCommandBySelector:(SEL)arg1 ;
-(void)moveRight:(id)arg1 ;
-(void)moveLeft:(id)arg1 ;
-(void)cancelOperation:(id)arg1 ;
-(void)didChangeText;
-(void)insertNewline:(id)arg1 ;
-(void)insertTab:(id)arg1 ;
-(void)insertBacktab:(id)arg1 ;
-(void)moveDown:(id)arg1 ;
-(void)moveUp:(id)arg1 ;
-(void)pageDown:(id)arg1 ;
-(void)pageUp:(id)arg1 ;
-(void)moveToEndOfDocument:(id)arg1 ;
-(void)scrollToBeginningOfDocument:(id)arg1 ;
-(void)scrollToEndOfDocument:(id)arg1 ;
-(void)insertNewlineIgnoringFieldEditor:(id)arg1 ;
-(void)moveForward:(id)arg1 ;
-(void)moveBackward:(id)arg1 ;
-(void)moveToBeginningOfDocument:(id)arg1 ;
-(void)scrollPageUp:(id)arg1 ;
-(void)scrollPageDown:(id)arg1 ;
-(void)scrollLineUp:(id)arg1 ;
-(void)scrollLineDown:(id)arg1 ;
-(char)isRTLLayout;
-(void)setIsRTLLayout:(char)arg1 ;
-(void)setHasActiveNavigationTarget:(char)arg1 ;
-(void)checkNavigationFocusChange;
-(char)hasActiveNavigationTarget;
-(void)setOwnerCell:(NSCell *)arg1 ;
-(void)_postNavigationFocusMovedWithDirection:(int)arg1 ;
-(void)_postNavigationCancel;
-(id)_delegateWithSelector:(SEL)arg1 ;
-(id)_ownerSearchField;
-(void)_postCharacterSelectionMove:(int)arg1 onTarget:(int)arg2 ;
-(void)_postNavigationConfirm;
-(NSCell *)ownerCell;
@end

