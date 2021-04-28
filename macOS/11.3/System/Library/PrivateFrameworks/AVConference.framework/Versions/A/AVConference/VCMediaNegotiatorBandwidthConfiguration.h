/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCMediaNegotiatorBandwidthConfiguration : NSObject {

	int _mode;
	int _connectionType;
	unsigned _maxBandwidth;
	char _isDefaultMode;

}

@property (assign,nonatomic) int mode;                           //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) int connectionType;                 //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) unsigned maxBandwidth;              //@synthesize maxBandwidth=_maxBandwidth - In the implementation block
@property (assign,nonatomic) char isDefaultMode;                 //@synthesize isDefaultMode=_isDefaultMode - In the implementation block
-(char)isEqual:(id)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)connectionType;
-(int)mode;
-(void)setConnectionType:(int)arg1 ;
-(unsigned)maxBandwidth;
-(char)isDefaultMode;
-(id)initWithConnectionType:(int)arg1 maxBandwidth:(unsigned)arg2 ;
-(id)initWithMode:(int)arg1 connectionType:(int)arg2 maxBandwidth:(unsigned)arg3 ;
-(void)setMaxBandwidth:(unsigned)arg1 ;
-(void)setIsDefaultMode:(char)arg1 ;
@end

