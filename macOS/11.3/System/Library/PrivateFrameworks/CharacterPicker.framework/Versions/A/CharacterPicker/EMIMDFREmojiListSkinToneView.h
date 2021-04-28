/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CharacterPicker.framework/Versions/A/CharacterPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CharacterPicker/CharacterPicker-Structs.h>
#import <AppKit/NSView.h>

@class NSButton, NSBox, NSMutableArray, NSLayoutConstraint, EMIMDFREmojiListMatrixView, NSImageView;

@interface EMIMDFREmojiListSkinToneView : NSView {

	char _hasClosebox;
	char _shownAtOppositeSide;
	char _gestureCanceled;
	NSButton* _closeButton;
	NSBox* _backgroundBox;
	NSMutableArray* _skinToneCells;
	NSLayoutConstraint* _closeBoxLeadingConstraint;
	NSLayoutConstraint* _skinToneBoxLeadingConstraint;
	id _firstTouchID;
	long long _selectedCharacterIndex;
	long long _highlightedCharacterIndex;
	EMIMDFREmojiListMatrixView* _sourceMatrixView;
	NSImageView* _prereleaseStamp;

}

@property (assign) NSButton * closeButton;                                         //@synthesize closeButton=_closeButton - In the implementation block
@property (assign) NSBox * backgroundBox;                                          //@synthesize backgroundBox=_backgroundBox - In the implementation block
@property (retain) NSMutableArray * skinToneCells;                                 //@synthesize skinToneCells=_skinToneCells - In the implementation block
@property (assign) char hasClosebox;                                               //@synthesize hasClosebox=_hasClosebox - In the implementation block
@property (assign) char shownAtOppositeSide;                                       //@synthesize shownAtOppositeSide=_shownAtOppositeSide - In the implementation block
@property (assign) NSLayoutConstraint * closeBoxLeadingConstraint;                 //@synthesize closeBoxLeadingConstraint=_closeBoxLeadingConstraint - In the implementation block
@property (assign) NSLayoutConstraint * skinToneBoxLeadingConstraint;              //@synthesize skinToneBoxLeadingConstraint=_skinToneBoxLeadingConstraint - In the implementation block
@property (retain) id firstTouchID;                                                //@synthesize firstTouchID=_firstTouchID - In the implementation block
@property (assign) char gestureCanceled;                                           //@synthesize gestureCanceled=_gestureCanceled - In the implementation block
@property (assign) long long selectedCharacterIndex;                               //@synthesize selectedCharacterIndex=_selectedCharacterIndex - In the implementation block
@property (assign) long long highlightedCharacterIndex;                            //@synthesize highlightedCharacterIndex=_highlightedCharacterIndex - In the implementation block
@property (assign) EMIMDFREmojiListMatrixView * sourceMatrixView;                  //@synthesize sourceMatrixView=_sourceMatrixView - In the implementation block
@property (assign) NSImageView * prereleaseStamp;                                  //@synthesize prereleaseStamp=_prereleaseStamp - In the implementation block
-(void)dealloc;
-(id)init;
-(NSButton *)closeButton;
-(void)touchesBeganWithEvent:(id)arg1 ;
-(void)touchesMovedWithEvent:(id)arg1 ;
-(void)touchesEndedWithEvent:(id)arg1 ;
-(void)touchesCancelledWithEvent:(id)arg1 ;
-(void)setCloseButton:(NSButton *)arg1 ;
-(id)firstTouchID;
-(void)setFirstTouchID:(id)arg1 ;
-(void)closeSkinToneSelector:(id)arg1 ;
-(void)showForCharacterIndex:(long long)arg1 inMatrixView:(id)arg2 byPressAndHold:(char)arg3 ;
-(NSBox *)backgroundBox;
-(void)trackHighlightWithLocation:(CGPoint)arg1 finished:(char)arg2 ;
-(void)setGestureCanceled:(char)arg1 ;
-(char)gestureCanceled;
-(long long)highlightedCharacterIndex;
-(void)setHighlightedCharacterIndex:(long long)arg1 ;
-(void)_highlightCharacterCellAtIndex:(long long)arg1 ;
-(void)setBackgroundBox:(NSBox *)arg1 ;
-(NSMutableArray *)skinToneCells;
-(void)setSkinToneCells:(NSMutableArray *)arg1 ;
-(char)hasClosebox;
-(void)setHasClosebox:(char)arg1 ;
-(char)shownAtOppositeSide;
-(void)setShownAtOppositeSide:(char)arg1 ;
-(NSLayoutConstraint *)closeBoxLeadingConstraint;
-(void)setCloseBoxLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)skinToneBoxLeadingConstraint;
-(void)setSkinToneBoxLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(long long)selectedCharacterIndex;
-(void)setSelectedCharacterIndex:(long long)arg1 ;
-(EMIMDFREmojiListMatrixView *)sourceMatrixView;
-(void)setSourceMatrixView:(EMIMDFREmojiListMatrixView *)arg1 ;
-(NSImageView *)prereleaseStamp;
-(void)setPrereleaseStamp:(NSImageView *)arg1 ;
@end

