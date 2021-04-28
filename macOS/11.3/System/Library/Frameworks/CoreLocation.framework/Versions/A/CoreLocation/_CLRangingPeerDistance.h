/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/Versions/A/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _CLRangingPeer, NSDate, NSNumber;

@interface _CLRangingPeerDistance : NSObject <NSCopying, NSSecureCoding> {

	id _internal;
	char _initiator;

}

@property (nonatomic,copy,readonly) _CLRangingPeer * peer; 
@property (nonatomic,copy,readonly) NSDate * timestamp; 
@property (nonatomic,copy,readonly) NSDate * date; 
@property (nonatomic,copy,readonly) NSNumber * distanceMeters; 
@property (nonatomic,copy,readonly) NSNumber * accuracyMeters; 
@property (getter=isInitiator,nonatomic,readonly) char initiator;              //@synthesize initiator=_initiator - In the implementation block
@property (nonatomic,readonly) char shouldUnlock; 
+(char)supportsSecureCoding;
-(id)initWithPeer:(id)arg1 date:(id)arg2 distanceMeters:(id)arg3 accuracyMeters:(id)arg4 initiator:(char)arg5 ;
-(id)initWithPeer:(id)arg1 timestamp:(id)arg2 distanceMeters:(id)arg3 accuracyMeters:(id)arg4 initiator:(char)arg5 ;
-(NSNumber *)accuracyMeters;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSDate *)timestamp;
-(char)isInitiator;
-(_CLRangingPeer *)peer;
-(NSNumber *)distanceMeters;
-(char)initiator;
-(char)shouldUnlock;
-(id)initWithPeer:(id)arg1 date:(id)arg2 distanceMeters:(id)arg3 accuracyMeters:(id)arg4 initiator:(char)arg5 shouldUnlock:(char)arg6 ;
@end
