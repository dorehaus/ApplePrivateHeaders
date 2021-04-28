/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCHCIActivityTimeout, NSString;

@interface NFAWDActivityTimeout : NSObject <NFAWDEventProtocol> {

	unsigned _version;
	unsigned _spid;
	unsigned _command;
	unsigned _commandParam1;
	unsigned _commandResult;
	unsigned _timeoutValue;
	unsigned _expressType;
	AWDNFCHCIActivityTimeout* _metric;

}

@property (assign,nonatomic) unsigned version;                               //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned spid;                                  //@synthesize spid=_spid - In the implementation block
@property (assign,nonatomic) unsigned command;                               //@synthesize command=_command - In the implementation block
@property (assign,nonatomic) unsigned commandParam1;                         //@synthesize commandParam1=_commandParam1 - In the implementation block
@property (assign,nonatomic) unsigned commandResult;                         //@synthesize commandResult=_commandResult - In the implementation block
@property (assign,nonatomic) unsigned timeoutValue;                          //@synthesize timeoutValue=_timeoutValue - In the implementation block
@property (assign,nonatomic) unsigned expressType;                           //@synthesize expressType=_expressType - In the implementation block
@property (nonatomic,retain) AWDNFCHCIActivityTimeout * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCommandParam1:(unsigned)arg1 ;
-(void)setCommandResult:(unsigned)arg1 ;
-(void)setExpressType:(unsigned)arg1 ;
-(unsigned)commandParam1;
-(unsigned)commandResult;
-(unsigned)expressType;
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(void)setTimeoutValue:(unsigned)arg1 ;
-(unsigned)timeoutValue;
-(id)init;
-(unsigned)version;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)command;
-(AWDNFCHCIActivityTimeout *)metric;
-(void)setMetric:(AWDNFCHCIActivityTimeout *)arg1 ;
-(void)setCommand:(unsigned)arg1 ;
-(unsigned)spid;
-(void)setSpid:(unsigned)arg1 ;
@end

