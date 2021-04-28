/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CharacterPicker.framework/Versions/A/CharacterPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CharacterPicker/CharacterPicker-Structs.h>
#import <AppKit/NSButtonCell.h>

@class CPKHorizontalPopupMenuView;

@interface CPKHorizontalPopupMenuCell : NSButtonCell {

	char _determinate;
	double _contentSize;
	CPKHorizontalPopupMenuView* _parentView;

}

@property (assign) char determinate;                                     //@synthesize determinate=_determinate - In the implementation block
@property (assign) double contentSize;                                   //@synthesize contentSize=_contentSize - In the implementation block
@property (assign) CPKHorizontalPopupMenuView * parentView;              //@synthesize parentView=_parentView - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setContentSize:(double)arg1 ;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(double)contentSize;
-(char)startTrackingAt:(CGPoint)arg1 inView:(id)arg2 ;
-(char)continueTracking:(CGPoint)arg1 at:(CGPoint)arg2 inView:(id)arg3 ;
-(CPKHorizontalPopupMenuView *)parentView;
-(void)setParentView:(CPKHorizontalPopupMenuView *)arg1 ;
-(char)determinate;
-(void)setDeterminate:(char)arg1 ;
@end
