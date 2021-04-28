/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/Versions/A/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/RTCoreDataReadable.h>
#import <libobjc.A.dylib/RTCoreDataWritable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RTLocation, NSDate, NSString;

@interface RTHint : NSObject <RTCoreDataReadable, RTCoreDataWritable, NSSecureCoding, NSCopying> {

	RTLocation* _location;
	long long _source;
	NSDate* _date;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) RTLocation * location;               //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) long long source;                    //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSDate * date;                       //@synthesize date=_date - In the implementation block
+(id)createWithManagedObject:(id)arg1 ;
+(id)createWithHintMO:(id)arg1 ;
+(long long)convertHintSource:(int)arg1 ;
+(char)supportsSecureCoding;
+(id)hintSourceToString:(long long)arg1 ;
-(id)managedObjectWithContext:(id)arg1 ;
-(id)initWithRTPHint:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(long long)source;
-(RTLocation *)location;
-(id)initWithLocation:(id)arg1 source:(long long)arg2 date:(id)arg3 ;
@end

