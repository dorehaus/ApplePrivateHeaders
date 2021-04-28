/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/Versions/A/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotificationCenter/NotificationCenter-Structs.h>
#import <NotificationCenter/NCTexturedView.h>

@class CALayer;

@interface _NCWidgetDragBackground : NCTexturedView {

	char _dark;
	CALayer* backgroundLayer1;
	CALayer* backgroundLayer2;

}
-(void)layout;
-(id)makeBackingLayer;
-(id)initWithFrame:(CGRect)arg1 dark:(char)arg2 ;
@end

