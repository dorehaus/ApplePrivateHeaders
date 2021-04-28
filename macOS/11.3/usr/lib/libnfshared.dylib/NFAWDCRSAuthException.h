/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCCRSAuthExceptionEvent, NSString;

@interface NFAWDCRSAuthException : NSObject <NFAWDEventProtocol> {

	AWDNFCCRSAuthExceptionEvent* _metric;

}

@property (nonatomic,retain) AWDNFCCRSAuthExceptionEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateExceptionUUID:(id)arg1 ;
-(id)init;
-(AWDNFCCRSAuthExceptionEvent *)metric;
-(void)setMetric:(AWDNFCCRSAuthExceptionEvent *)arg1 ;
@end
