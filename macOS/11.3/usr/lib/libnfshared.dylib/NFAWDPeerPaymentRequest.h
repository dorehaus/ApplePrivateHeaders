/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCPeerPaymentRequest, NSString;

@interface NFAWDPeerPaymentRequest : NSObject <NFAWDEventProtocol> {

	AWDNFCPeerPaymentRequest* _metric;

}

@property (nonatomic,retain) AWDNFCPeerPaymentRequest * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setErrorStep:(unsigned)arg1 ;
-(unsigned)getMetricId;
-(id)getMetric;
-(id)init;
-(void)setType:(unsigned)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(AWDNFCPeerPaymentRequest *)metric;
-(void)setMetric:(AWDNFCPeerPaymentRequest *)arg1 ;
-(void)setErrorCode:(unsigned)arg1 ;
@end

