/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SensorKit.framework/Versions/A/SensorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SRSampleExporting.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SRSampling.h>

@class NSMutableSet, NSString;

@interface SRMessagesUsageReport : NSObject <SRSampleExporting, NSSecureCoding, SRSampling> {

	long long _totalUniqueContacts;
	double _duration;
	long long _totalOutgoingMessages;
	long long _totalIncomingMessages;
	double _startTime;
	NSMutableSet* _uniqueContacts;

}

@property (assign) double startTime;                                //@synthesize startTime=_startTime - In the implementation block
@property (assign) double duration;                                 //@synthesize duration=_duration - In the implementation block
@property (assign) long long totalOutgoingMessages;                 //@synthesize totalOutgoingMessages=_totalOutgoingMessages - In the implementation block
@property (assign) long long totalIncomingMessages;                 //@synthesize totalIncomingMessages=_totalIncomingMessages - In the implementation block
@property (retain) NSMutableSet * uniqueContacts;                   //@synthesize uniqueContacts=_uniqueContacts - In the implementation block
@property (readonly) long long totalUniqueContacts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)usageReportWithInterval:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(id)binarySampleRepresentation;
-(id)sr_dictionaryRepresentation;
-(long long)totalUniqueContacts;
-(void)setUniqueContacts:(NSMutableSet *)arg1 ;
-(long long)totalIncomingMessages;
-(long long)totalOutgoingMessages;
-(void)setTotalOutgoingMessages:(long long)arg1 ;
-(void)setTotalIncomingMessages:(long long)arg1 ;
-(NSMutableSet *)uniqueContacts;
@end

