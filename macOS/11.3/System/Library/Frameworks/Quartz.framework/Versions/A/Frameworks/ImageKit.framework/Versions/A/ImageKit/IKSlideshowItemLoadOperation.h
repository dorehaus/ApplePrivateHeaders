/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class IKSlideshowElement;

@interface IKSlideshowItemLoadOperation : NSOperation {

	IKSlideshowElement* _item;
	char _display;

}
-(id)initWithItem:(id)arg1 display:(char)arg2 ;
-(void)slideshowWillStop:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)cleanup;
-(void)main;
@end

