/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSClipView.h>

@interface NSTabBarClipView : NSClipView {

	char _shouldChangeNextScrollFromVerticalToHorizontal;

}

@property (assign,nonatomic) char shouldChangeNextScrollFromVerticalToHorizontal;              //@synthesize shouldChangeNextScrollFromVerticalToHorizontal=_shouldChangeNextScrollFromVerticalToHorizontal - In the implementation block
-(char)_scrollTo:(const CGPoint*)arg1 animateScroll:(long long)arg2 flashScrollerKnobs:(unsigned long long)arg3 ;
-(char)shouldChangeNextScrollFromVerticalToHorizontal;
-(void)setShouldChangeNextScrollFromVerticalToHorizontal:(char)arg1 ;
@end
