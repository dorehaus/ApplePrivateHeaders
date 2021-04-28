/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityFoundation.framework/Versions/A/AccessibilityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityFoundation/AccessibilityFoundation-Structs.h>
#import <AccessibilityFoundation/_AXFObserverGroupIPC.h>

@class NSArray;

@interface _AXFObserverGroupIPCFiringCopy : _AXFObserverGroupIPC {

	NSArray* _observersForFiring;

}

@property (nonatomic,copy) NSArray * observersForFiring;              //@synthesize observersForFiring=_observersForFiring - In the implementation block
-(char)isObserving:(id)arg1 element:(id)arg2 ;
-(id)initWithName:(id)arg1 element:(id)arg2 application:(id)arg3 ;
-(char)addObserver:(id)arg1 selector:(SEL)arg2 queue:(id)arg3 ;
-(char)removeObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)fireWithElement:(id)arg1 userInfo:(id)arg2 ;
-(void)setObserversForFiring:(NSArray *)arg1 ;
-(NSArray *)observersForFiring;
-(void)setObserver:(AXObserverRef)arg1 ;
-(char)registerObserver;
@end
