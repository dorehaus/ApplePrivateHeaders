/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GPURawCounter.framework/Versions/A/GPURawCounter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GPURawCounter/GPURawCounterSourceGroup.h>

@class NSString, NSArray, NSDictionary;

@interface _GPURawCounterSourceGroup : NSObject <GPURawCounterSourceGroup> {

	unsigned _acceleratorPort;
	NSString* _name;
	NSArray* _sourceList;
	unsigned long long _samplingPeriodInMicroseconds;
	unsigned long long _samplingTriggers;
	NSDictionary* _options;

}

@property (readonly) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (readonly) NSArray * sourceList;                                       //@synthesize sourceList=_sourceList - In the implementation block
@property (readonly) unsigned acceleratorPort;                                   //@synthesize acceleratorPort=_acceleratorPort - In the implementation block
@property (assign) unsigned long long samplingPeriodInMicroseconds;              //@synthesize samplingPeriodInMicroseconds=_samplingPeriodInMicroseconds - In the implementation block
@property (assign) unsigned long long samplingTriggers;                          //@synthesize samplingTriggers=_samplingTriggers - In the implementation block
@property (copy) NSDictionary * vendorOptions; 
@property (copy) NSDictionary * options;                                         //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long sampleMarker; 
@property (readonly) unsigned long long availableCounterTriggers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)name;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(unsigned)acceleratorPort;
-(id)initWithAcceleratorPort:(unsigned)arg1 ;
-(char)startSampling;
-(char)stopSampling;
-(id)subDivideCounterList:(id)arg1 withOptions:(id)arg2 ;
-(NSArray *)sourceList;
-(unsigned long long)samplingPeriodInMicroseconds;
-(void)setSamplingPeriodInMicroseconds:(unsigned long long)arg1 ;
-(unsigned long long)samplingTriggers;
-(void)setSamplingTriggers:(unsigned long long)arg1 ;
-(NSDictionary *)vendorOptions;
-(void)setVendorOptions:(NSDictionary *)arg1 ;
-(unsigned long long)sampleMarker;
-(unsigned long long)availableCounterTriggers;
@end
