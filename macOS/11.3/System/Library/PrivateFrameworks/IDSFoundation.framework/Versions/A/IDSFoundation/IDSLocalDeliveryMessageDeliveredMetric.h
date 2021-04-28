/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/Versions/A/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSString, NSDictionary;

@interface IDSLocalDeliveryMessageDeliveredMetric : NSObject <CUTCoreAnalyticsMetric> {

	char _isToDefaultPairedDevice;
	NSString* _service;
	unsigned long long _messageSize;
	unsigned long long _linkType;
	unsigned long long _deliveryError;
	unsigned long long _RTT;
	unsigned long long _priority;

}

@property (nonatomic,readonly) NSString * service;                            //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) char isToDefaultPairedDevice;                  //@synthesize isToDefaultPairedDevice=_isToDefaultPairedDevice - In the implementation block
@property (nonatomic,readonly) unsigned long long messageSize;                //@synthesize messageSize=_messageSize - In the implementation block
@property (nonatomic,readonly) unsigned long long linkType;                   //@synthesize linkType=_linkType - In the implementation block
@property (nonatomic,readonly) unsigned long long deliveryError;              //@synthesize deliveryError=_deliveryError - In the implementation block
@property (nonatomic,readonly) unsigned long long RTT;                        //@synthesize RTT=_RTT - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;                   //@synthesize priority=_priority - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSDictionary *)dictionaryRepresentation;
-(unsigned long long)priority;
-(NSString *)service;
-(unsigned long long)linkType;
-(char)isToDefaultPairedDevice;
-(unsigned long long)messageSize;
-(unsigned long long)deliveryError;
-(unsigned long long)RTT;
-(id)initWithService:(id)arg1 isToDefaultPairedDevice:(char)arg2 messageSize:(unsigned long long)arg3 linkType:(unsigned long long)arg4 deliveryError:(unsigned long long)arg5 RTT:(unsigned long long)arg6 priority:(unsigned long long)arg7 ;
@end

