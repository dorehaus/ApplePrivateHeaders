/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PreferencePanes.framework/Versions/A/PreferencePanes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencePanes/PreferencePanes-Structs.h>
#import <AppKit/NSWindow.h>

@class NSMutableArray, NSPrefCrossFadeWindowMoveHelper;

@interface NSPrefCrossFadeWindow : NSWindow {

	NSMutableArray* mAnimatedViews;
	NSPrefCrossFadeWindowMoveHelper* mMoveHelper;

}
-(void)setFrame:(CGRect)arg1 display:(char)arg2 animate:(char)arg3 ;
-(double)animationResizeTime:(CGRect)arg1 ;
-(void)addAnimatedView:(id)arg1 ;
-(void)removeAnimatedView:(id)arg1 ;
-(id)animatedViews;
@end
