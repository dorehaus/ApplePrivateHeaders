/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/Versions/A/C2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSUUID, C2MetricOptions;

@interface C2MetricRequestOptions : NSObject {

	unsigned char __allowsExpensiveAccess;
	unsigned char __allowsPowerNapScheduling;
	NSString* __sourceApplicationBundleIdentifier;
	NSString* __sourceApplicationSecondaryIdentifier;
	NSUUID* _metricUUID;
	C2MetricOptions* _metricOptions;

}

@property (assign,nonatomic) unsigned char _allowsExpensiveAccess;                          //@synthesize _allowsExpensiveAccess=__allowsExpensiveAccess - In the implementation block
@property (assign,nonatomic) unsigned char _allowsPowerNapScheduling;                       //@synthesize _allowsPowerNapScheduling=__allowsPowerNapScheduling - In the implementation block
@property (nonatomic,retain) NSString * _sourceApplicationBundleIdentifier;                 //@synthesize _sourceApplicationBundleIdentifier=__sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * _sourceApplicationSecondaryIdentifier;              //@synthesize _sourceApplicationSecondaryIdentifier=__sourceApplicationSecondaryIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * metricUUID;                                           //@synthesize metricUUID=_metricUUID - In the implementation block
@property (nonatomic,retain) C2MetricOptions * metricOptions;                               //@synthesize metricOptions=_metricOptions - In the implementation block
-(id)init;
-(NSUUID *)metricUUID;
-(NSString *)_sourceApplicationBundleIdentifier;
-(NSString *)_sourceApplicationSecondaryIdentifier;
-(unsigned char)_allowsExpensiveAccess;
-(void)set_sourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(void)set_sourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)set_allowsExpensiveAccess:(unsigned char)arg1 ;
-(unsigned char)_allowsPowerNapScheduling;
-(C2MetricOptions *)metricOptions;
-(void)setMetricOptions:(C2MetricOptions *)arg1 ;
-(void)set_allowsPowerNapScheduling:(unsigned char)arg1 ;
-(id)initWithRequestOptions:(id)arg1 ;
-(id)metricRequestTransportOptions;
-(void)setMetricUUID:(NSUUID *)arg1 ;
@end

