/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DisplayTransportServices.framework/Versions/A/DisplayTransportServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DTSDisplayPortDevice.h>

@protocol DTSIOPMAssertion;
@class DTSDPDeviceDescription, NSString, DTSDisplayPortDeviceAnalyticsData;

@interface DTSDPDeviceProxy : NSObject <DTSDisplayPortDevice> {

	DTSDPDeviceDescription* _remoteDeviceDescription;
	NSString* _portLookupKey;
	long long _portState;
	id<DTSIOPMAssertion> _sleepAssertion;
	DTSDisplayPortDeviceAnalyticsData* _analyticsData;

}

@property (nonatomic,retain) DTSDPDeviceDescription * remoteDeviceDescription;               //@synthesize remoteDeviceDescription=_remoteDeviceDescription - In the implementation block
@property (nonatomic,readonly) NSString * portLookupKey;                                     //@synthesize portLookupKey=_portLookupKey - In the implementation block
@property (assign,nonatomic) long long portState;                                            //@synthesize portState=_portState - In the implementation block
@property (nonatomic,retain) id<DTSIOPMAssertion> sleepAssertion;                            //@synthesize sleepAssertion=_sleepAssertion - In the implementation block
@property (nonatomic,retain) DTSDisplayPortDeviceAnalyticsData * analyticsData;              //@synthesize analyticsData=_analyticsData - In the implementation block
@property (nonatomic,readonly) id<DTSDisplayPortDeviceInfo> info; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(long long)portStateForKey:(id)arg1 ;
+(void)setPortState:(long long)arg1 forKey:(id)arg2 ;
+(long long)nativeAUXTransactionLengthLimit;
+(long long)i2cTransactionLengthLimit;
-(id<DTSDisplayPortDeviceInfo>)info;
-(id)initWithDescription:(id)arg1 ;
-(void)setPortState:(long long)arg1 ;
-(long long)portState;
-(DTSDisplayPortDeviceAnalyticsData *)analyticsData;
-(void)setAnalyticsData:(DTSDisplayPortDeviceAnalyticsData *)arg1 ;
-(char)lock:(id*)arg1 ;
-(char)_isDeviceLocked;
-(char)unlock:(id*)arg1 ;
-(DTSDPDeviceDescription *)remoteDeviceDescription;
-(NSString *)portLookupKey;
-(char)_assertPortState:(id*)arg1 ;
-(id<DTSIOPMAssertion>)sleepAssertion;
-(void)setSleepAssertion:(id<DTSIOPMAssertion>)arg1 ;
-(void)_deassertPortState;
-(void)setRemoteDeviceDescription:(DTSDPDeviceDescription *)arg1 ;
-(id)nativeReadAtAddress:(long long)arg1 length:(long long)arg2 error:(id*)arg3 ;
-(char)nativeWriteAtAddress:(long long)arg1 data:(id)arg2 error:(id*)arg3 ;
-(id)i2cReadAtAddress:(long long)arg1 length:(long long)arg2 error:(id*)arg3 ;
-(char)i2cWriteAtAddress:(long long)arg1 data:(id)arg2 error:(id*)arg3 ;
-(id)i2cWriteReadAtAddress:(long long)arg1 data:(id)arg2 length:(long long)arg3 error:(id*)arg4 ;
@end
