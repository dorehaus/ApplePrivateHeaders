/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/Versions/A/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSThread.h>

@class NSTimer, NSDate;

@interface _CPPowerAssertionThread : NSThread {

	NSTimer* _timer;
	NSDate* _earliest;

}
-(void)main;
-(void)didTimeOut:(id)arg1 ;
-(void)addAssertion:(id)arg1 ;
@end

