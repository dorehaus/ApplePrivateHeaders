/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityEvents.framework/Versions/A/AccessibilityEvents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSArray;

@interface AXETrackingGestureEvent : NSObject {

	char _isSynthetic;
	unsigned long long _source;
	NSDate* _timestamp;
	NSArray* _allTouches;
	NSArray* _touchingTouches;

}

@property (nonatomic,readonly) unsigned long long source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char isSynthetic;                       //@synthesize isSynthetic=_isSynthetic - In the implementation block
@property (nonatomic,readonly) NSArray * allTouches;                   //@synthesize allTouches=_allTouches - In the implementation block
@property (nonatomic,readonly) NSArray * touchingTouches;              //@synthesize touchingTouches=_touchingTouches - In the implementation block
-(id)description;
-(unsigned long long)source;
-(NSDate *)timestamp;
-(NSArray *)allTouches;
-(char)isSynthetic;
-(id)_nameOfSource:(unsigned long long)arg1 ;
-(id)initWithTouches:(id)arg1 eventSource:(unsigned long long)arg2 isSynthetic:(char)arg3 previousGestureEvent:(id)arg4 ;
-(id)touchMatchingIdentity:(id)arg1 phase:(unsigned long long)arg2 ;
-(id)touchesMatchingPhase:(unsigned long long)arg1 ;
-(id)initWithNSEvent:(id)arg1 eventSource:(unsigned long long)arg2 isSynthetic:(char)arg3 previousGestureEvent:(id)arg4 ;
-(id)initWithTouches:(id)arg1 eventSource:(unsigned long long)arg2 isSynthetic:(char)arg3 ;
-(NSArray *)touchingTouches;
@end

