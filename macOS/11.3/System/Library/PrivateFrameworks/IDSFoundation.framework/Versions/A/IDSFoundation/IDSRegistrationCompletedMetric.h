/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/Versions/A/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>
#import <libobjc.A.dylib/CUTAWDMetric.h>
#import <libobjc.A.dylib/CUTRTCMetric.h>

@class NSDictionary, NSString;

@interface IDSRegistrationCompletedMetric : NSObject <CUTCoreAnalyticsMetric, CUTAWDMetric, CUTRTCMetric> {

	int _registrationType;
	NSString* _serviceIdentifier;
	char _wasSuccessful;
	long long _registrationError;
	long long _circleStatus;

}

@property (nonatomic,readonly) NSString * name; 
@property (readonly) unsigned awdIdentifier; 
@property (nonatomic,readonly) unsigned short rtcType; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) PBCodable*<NSCopying> awdRepresentation; 
@property (nonatomic,readonly) int registrationType;                                 //@synthesize registrationType=_registrationType - In the implementation block
@property (nonatomic,readonly) NSString * serviceIdentifier;                         //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,readonly) char wasSuccessful;                                   //@synthesize wasSuccessful=_wasSuccessful - In the implementation block
@property (nonatomic,readonly) long long registrationError;                          //@synthesize registrationError=_registrationError - In the implementation block
@property (nonatomic,readonly) long long circleStatus;                               //@synthesize circleStatus=_circleStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)serviceIdentifier;
-(long long)registrationError;
-(unsigned short)rtcType;
-(PBCodable*<NSCopying>)awdRepresentation;
-(unsigned)awdIdentifier;
-(int)registrationType;
-(char)wasSuccessful;
-(long long)circleStatus;
-(id)initWithRegistrationType:(int)arg1 serviceIdentifier:(id)arg2 wasSuccessful:(char)arg3 registrationError:(long long)arg4 circleStatus:(long long)arg5 ;
@end

