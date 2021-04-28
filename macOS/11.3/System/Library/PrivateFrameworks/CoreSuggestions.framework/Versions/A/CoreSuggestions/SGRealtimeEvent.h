/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/Versions/A/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SGRealtimeSuggestion.h>

@class SGEvent, NSString;

@interface SGRealtimeEvent : NSObject <NSSecureCoding, NSCopying, SGRealtimeSuggestion> {

	char _isHarvested;
	int _state;
	SGEvent* _event;
	NSString* _eventIdentifier;

}

@property (nonatomic,readonly) int state;                               //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) SGEvent * event;                         //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) NSString * eventIdentifier;              //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
@property (nonatomic,readonly) char isHarvested;                        //@synthesize isHarvested=_isHarvested - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)realtimeEventForNewEvent:(id)arg1 ;
+(id)realtimeEventForNewEvent:(id)arg1 harvested:(char)arg2 ;
+(id)realtimeEventForCanceledEvent:(id)arg1 eventIdentifier:(id)arg2 ;
+(id)realtimeEventForCanceledEvent:(id)arg1 eventIdentifier:(id)arg2 harvested:(char)arg3 ;
+(id)realtimeEventUpdateToEvent:(id)arg1 withNewValues:(id)arg2 ;
+(id)realtimeEventUpdateToEvent:(id)arg1 withNewValues:(id)arg2 harvested:(char)arg3 ;
+(id)realtimeEventForDuplicateEvent:(id)arg1 eventIdentifier:(id)arg2 ;
+(id)realtimeEventForDuplicateEvent:(id)arg1 eventIdentifier:(id)arg2 harvested:(char)arg3 ;
+(id)realtimeEventForNearDuplicateEvent:(id)arg1 ;
+(id)realtimeEventForNearDuplicateEvent:(id)arg1 harvested:(char)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)state;
-(SGEvent *)event;
-(NSString *)eventIdentifier;
-(id)initWithState:(int)arg1 event:(id)arg2 eventIdentifier:(id)arg3 harvested:(char)arg4 ;
-(char)isEqualToRealtimeEvent:(id)arg1 ;
-(char)isHarvested;
@end

