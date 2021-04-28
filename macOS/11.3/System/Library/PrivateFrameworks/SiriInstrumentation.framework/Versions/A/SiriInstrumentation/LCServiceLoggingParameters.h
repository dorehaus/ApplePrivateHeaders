/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSData, NSString;

@interface LCServiceLoggingParameters : SISchemaInstrumentationMessage {

	char _hasQos;
	char _hasMessageSizeQuotaInBytes;
	char _hasTotalDiskSizeQuotaInBytes;
	char _optOutOfCompression;
	char _hasOptOutOfCompression;
	char _hasUploadSamplingRate;
	char _hasRealtimeSamplingRate;
	char _hasEntropy;
	char _overrideIntoSamplePopulation;
	char _hasOverrideIntoSamplePopulation;
	char _hasUploadEndpointURL;
	int _qos;
	int _messageSizeQuotaInBytes;
	int _totalDiskSizeQuotaInBytes;
	float _uploadSamplingRate;
	float _realtimeSamplingRate;
	NSData* _entropy;
	NSString* _uploadEndpointURL;

}

@property (assign,nonatomic) int qos;                                           //@synthesize qos=_qos - In the implementation block
@property (assign,nonatomic) char hasQos;                                       //@synthesize hasQos=_hasQos - In the implementation block
@property (assign,nonatomic) int messageSizeQuotaInBytes;                       //@synthesize messageSizeQuotaInBytes=_messageSizeQuotaInBytes - In the implementation block
@property (assign,nonatomic) char hasMessageSizeQuotaInBytes;                   //@synthesize hasMessageSizeQuotaInBytes=_hasMessageSizeQuotaInBytes - In the implementation block
@property (assign,nonatomic) int totalDiskSizeQuotaInBytes;                     //@synthesize totalDiskSizeQuotaInBytes=_totalDiskSizeQuotaInBytes - In the implementation block
@property (assign,nonatomic) char hasTotalDiskSizeQuotaInBytes;                 //@synthesize hasTotalDiskSizeQuotaInBytes=_hasTotalDiskSizeQuotaInBytes - In the implementation block
@property (assign,nonatomic) char optOutOfCompression;                          //@synthesize optOutOfCompression=_optOutOfCompression - In the implementation block
@property (assign,nonatomic) char hasOptOutOfCompression;                       //@synthesize hasOptOutOfCompression=_hasOptOutOfCompression - In the implementation block
@property (assign,nonatomic) float uploadSamplingRate;                          //@synthesize uploadSamplingRate=_uploadSamplingRate - In the implementation block
@property (assign,nonatomic) char hasUploadSamplingRate;                        //@synthesize hasUploadSamplingRate=_hasUploadSamplingRate - In the implementation block
@property (assign,nonatomic) float realtimeSamplingRate;                        //@synthesize realtimeSamplingRate=_realtimeSamplingRate - In the implementation block
@property (assign,nonatomic) char hasRealtimeSamplingRate;                      //@synthesize hasRealtimeSamplingRate=_hasRealtimeSamplingRate - In the implementation block
@property (nonatomic,copy) NSData * entropy;                                    //@synthesize entropy=_entropy - In the implementation block
@property (assign,nonatomic) char hasEntropy;                                   //@synthesize hasEntropy=_hasEntropy - In the implementation block
@property (assign,nonatomic) char overrideIntoSamplePopulation;                 //@synthesize overrideIntoSamplePopulation=_overrideIntoSamplePopulation - In the implementation block
@property (assign,nonatomic) char hasOverrideIntoSamplePopulation;              //@synthesize hasOverrideIntoSamplePopulation=_hasOverrideIntoSamplePopulation - In the implementation block
@property (nonatomic,copy) NSString * uploadEndpointURL;                        //@synthesize uploadEndpointURL=_uploadEndpointURL - In the implementation block
@property (assign,nonatomic) char hasUploadEndpointURL;                         //@synthesize hasUploadEndpointURL=_hasUploadEndpointURL - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)qos;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setQos:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setHasQos:(char)arg1 ;
-(char)hasQos;
-(void)setMessageSizeQuotaInBytes:(int)arg1 ;
-(void)setTotalDiskSizeQuotaInBytes:(int)arg1 ;
-(void)setOptOutOfCompression:(char)arg1 ;
-(void)setUploadSamplingRate:(float)arg1 ;
-(void)setRealtimeSamplingRate:(float)arg1 ;
-(void)setEntropy:(NSData *)arg1 ;
-(void)setOverrideIntoSamplePopulation:(char)arg1 ;
-(void)setUploadEndpointURL:(NSString *)arg1 ;
-(int)messageSizeQuotaInBytes;
-(int)totalDiskSizeQuotaInBytes;
-(char)optOutOfCompression;
-(float)uploadSamplingRate;
-(float)realtimeSamplingRate;
-(NSData *)entropy;
-(char)overrideIntoSamplePopulation;
-(NSString *)uploadEndpointURL;
-(char)hasMessageSizeQuotaInBytes;
-(void)setHasMessageSizeQuotaInBytes:(char)arg1 ;
-(char)hasTotalDiskSizeQuotaInBytes;
-(void)setHasTotalDiskSizeQuotaInBytes:(char)arg1 ;
-(char)hasOptOutOfCompression;
-(void)setHasOptOutOfCompression:(char)arg1 ;
-(char)hasUploadSamplingRate;
-(void)setHasUploadSamplingRate:(char)arg1 ;
-(char)hasRealtimeSamplingRate;
-(void)setHasRealtimeSamplingRate:(char)arg1 ;
-(char)hasEntropy;
-(void)setHasEntropy:(char)arg1 ;
-(char)hasOverrideIntoSamplePopulation;
-(void)setHasOverrideIntoSamplePopulation:(char)arg1 ;
-(char)hasUploadEndpointURL;
-(void)setHasUploadEndpointURL:(char)arg1 ;
@end
