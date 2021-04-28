/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@class NSTimer;

@interface IKImageBrowserMagnifying : NSObject {

	CGPoint _center;
	int _state;
	double _time;
	float _delay;
	NSTimer* _timer;
	int _mode;

}
-(void)processCells:(id)arg1 withBrowser:(id)arg2 ;
-(void)alternateMagnifying;
-(void)dealloc;
-(void)setMode:(int)arg1 ;
-(char)isActive;
-(void)start;
-(void)stop;
-(void)setCenter:(CGPoint)arg1 ;
@end

