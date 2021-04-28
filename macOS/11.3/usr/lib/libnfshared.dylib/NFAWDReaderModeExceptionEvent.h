/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCReaderModeExceptionEvent, NSString;

@interface NFAWDReaderModeExceptionEvent : NSObject <NFAWDEventProtocol> {

	char _rfFrameInterface;
	unsigned _type;
	unsigned _errorCode;
	unsigned _tagType;
	AWDNFCReaderModeExceptionEvent* _metric;

}

@property (assign,nonatomic) unsigned type;                                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned errorCode;                                   //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) unsigned tagType;                                     //@synthesize tagType=_tagType - In the implementation block
@property (assign,nonatomic) char rfFrameInterface;                                //@synthesize rfFrameInterface=_rfFrameInterface - In the implementation block
@property (nonatomic,retain) AWDNFCReaderModeExceptionEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRfFrameInterface:(char)arg1 ;
-(char)rfFrameInterface;
-(unsigned)getMetricId;
-(id)getMetric;
-(id)init;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(AWDNFCReaderModeExceptionEvent *)metric;
-(void)setMetric:(AWDNFCReaderModeExceptionEvent *)arg1 ;
-(unsigned)errorCode;
-(void)setErrorCode:(unsigned)arg1 ;
-(unsigned)tagType;
-(void)setTagType:(unsigned)arg1 ;
@end
