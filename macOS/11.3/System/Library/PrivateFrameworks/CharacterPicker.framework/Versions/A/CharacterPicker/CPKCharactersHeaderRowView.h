/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CharacterPicker.framework/Versions/A/CharacterPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CharacterPicker/CharacterPicker-Structs.h>
#import <AppKit/NSTableRowView.h>

@class NSVisualEffectView;

@interface CPKCharactersHeaderRowView : NSTableRowView {

	NSVisualEffectView* _backgroundView;

}

@property (assign) NSVisualEffectView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundView:(NSVisualEffectView *)arg1 ;
-(NSVisualEffectView *)backgroundView;
-(void)adjustTransparency;
@end

