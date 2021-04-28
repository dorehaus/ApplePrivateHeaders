/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/Versions/A/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUTRTCMetric.h>

@class NSString, NSDictionary;

@interface IDSDeliveryControllerTimeMetric : NSObject <CUTRTCMetric> {

	double _timeToSend;
	long long _endpointCount;
	char _usedPipeline;
	char _usedMMCS;
	long long _responseCode;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned short rtcType; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) double timeToSend;                                    //@synthesize timeToSend=_timeToSend - In the implementation block
@property (nonatomic,readonly) long long endpointCount;                              //@synthesize endpointCount=_endpointCount - In the implementation block
@property (nonatomic,readonly) char usedPipeline;                                    //@synthesize usedPipeline=_usedPipeline - In the implementation block
@property (nonatomic,readonly) char usedMMCS;                                        //@synthesize usedMMCS=_usedMMCS - In the implementation block
@property (nonatomic,readonly) long long responseCode;                               //@synthesize responseCode=_responseCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSDictionary *)dictionaryRepresentation;
-(long long)responseCode;
-(unsigned short)rtcType;
-(double)timeToSend;
-(long long)endpointCount;
-(char)usedPipeline;
-(char)usedMMCS;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 endpointCount:(long long)arg3 usedPipeline:(char)arg4 usedMMCS:(char)arg5 responseCode:(long long)arg6 ;
@end

