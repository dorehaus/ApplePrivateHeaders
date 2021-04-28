/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XCTAutomationSupport.framework/Versions/A/XCTAutomationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <XCTAutomationSupport/XCTCapabilitiesProviding.h>

@class NSString;

@interface XCTAnimationsIdleNotifier : NSObject <XCTCapabilitiesProviding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)animationDidStart;
+(void)animationDidStop;
+(void)provideCapabilitiesToBuilder:(id)arg1 ;
+(char)supportsAnimationsIdleNotification;
+(char)swizzleUIViewAnimationStateMethodsWithError:(id*)arg1 ;
+(void)handleAnimationsIdle;
+(void)addAnimationIdleHandler:(/*^block*/id)arg1 ;
+(char)isAnimationInProgress;
-(void)notifyWhenIdle:(/*^block*/id)arg1 ;
@end
