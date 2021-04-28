/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSAnimation.h>

@class NSArray;

@interface NSDocumentRevisionsWindowTransformAnimationGroup : NSAnimation {

	NSArray* _animations;
	char _resizesWindow;
	/*^block*/id _completionHandler;

}

@property (copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)dealloc;
-(void)startAnimation;
-(void)setCurrentProgress:(float)arg1 ;
-(void)_stopAnimation:(int)arg1 withDisplayLink:(id)arg2 ;
-(id)_screen;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(id)initWithAnimations:(id)arg1 ;
@end

