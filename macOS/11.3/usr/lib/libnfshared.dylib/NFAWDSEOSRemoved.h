/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCSEOSRemovedEvent, NSString;

@interface NFAWDSEOSRemoved : NSObject <NFAWDEventProtocol> {

	unsigned _hardwareType;
	AWDNFCSEOSRemovedEvent* _metric;

}

@property (assign,nonatomic) unsigned hardwareType;                          //@synthesize hardwareType=_hardwareType - In the implementation block
@property (assign,nonatomic) unsigned reason; 
@property (assign,nonatomic) char hasExpressTransactionStarted; 
@property (assign,nonatomic) char hasCardEmulationStarted; 
@property (nonatomic,retain) AWDNFCSEOSRemovedEvent * metric;                //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHasExpressTransactionStarted:(char)arg1 ;
-(void)setHasCardEmulationStarted:(char)arg1 ;
-(char)hasExpressTransactionStarted;
-(char)hasCardEmulationStarted;
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateExceptionUUID:(id)arg1 ;
-(id)init;
-(unsigned)reason;
-(void)setReason:(unsigned)arg1 ;
-(AWDNFCSEOSRemovedEvent *)metric;
-(void)setMetric:(AWDNFCSEOSRemovedEvent *)arg1 ;
-(unsigned)hardwareType;
-(void)setHardwareType:(unsigned)arg1 ;
@end

