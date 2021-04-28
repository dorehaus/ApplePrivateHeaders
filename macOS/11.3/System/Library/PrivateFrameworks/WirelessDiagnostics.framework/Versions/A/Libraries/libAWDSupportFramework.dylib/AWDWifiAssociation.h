/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface AWDWifiAssociation : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _band;
	NSData* _bssidOui;
	int _channel;
	NSString* _countryCode;
	int _deauthReason;
	NSData* _deauthSourceOui;
	unsigned _error;
	int _noise;
	unsigned _phymode;
	NSString* _privateMacType;
	NSString* _security;
	int _signal;
	int _txrate;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasError; 
@property (assign,nonatomic) unsigned error;                            //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) char hasChannel; 
@property (assign,nonatomic) int channel;                               //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) char hasSignal; 
@property (assign,nonatomic) int signal;                                //@synthesize signal=_signal - In the implementation block
@property (nonatomic,readonly) char hasBssidOui; 
@property (nonatomic,retain) NSData * bssidOui;                         //@synthesize bssidOui=_bssidOui - In the implementation block
@property (nonatomic,readonly) char hasSecurity; 
@property (nonatomic,retain) NSString * security;                       //@synthesize security=_security - In the implementation block
@property (assign,nonatomic) char hasDeauthReason; 
@property (assign,nonatomic) int deauthReason;                          //@synthesize deauthReason=_deauthReason - In the implementation block
@property (nonatomic,readonly) char hasDeauthSourceOui; 
@property (nonatomic,retain) NSData * deauthSourceOui;                  //@synthesize deauthSourceOui=_deauthSourceOui - In the implementation block
@property (assign,nonatomic) char hasNoise; 
@property (assign,nonatomic) int noise;                                 //@synthesize noise=_noise - In the implementation block
@property (assign,nonatomic) char hasTxrate; 
@property (assign,nonatomic) int txrate;                                //@synthesize txrate=_txrate - In the implementation block
@property (nonatomic,readonly) char hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                    //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) char hasPhymode; 
@property (assign,nonatomic) unsigned phymode;                          //@synthesize phymode=_phymode - In the implementation block
@property (assign,nonatomic) char hasBand; 
@property (assign,nonatomic) int band;                                  //@synthesize band=_band - In the implementation block
@property (nonatomic,readonly) char hasPrivateMacType; 
@property (nonatomic,retain) NSString * privateMacType;                 //@synthesize privateMacType=_privateMacType - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)error;
-(NSString *)countryCode;
-(void)setError:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(int)signal;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int)channel;
-(char)hasTimestamp;
-(char)hasError;
-(void)setChannel:(int)arg1 ;
-(NSString *)security;
-(void)setNoise:(int)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasCountryCode;
-(void)setHasChannel:(char)arg1 ;
-(char)hasChannel;
-(void)setBand:(int)arg1 ;
-(int)band;
-(void)setHasBand:(char)arg1 ;
-(char)hasBand;
-(void)setSignal:(int)arg1 ;
-(void)setHasError:(char)arg1 ;
-(void)setPrivateMacType:(NSString *)arg1 ;
-(char)hasPrivateMacType;
-(NSString *)privateMacType;
-(void)setBssidOui:(NSData *)arg1 ;
-(void)setSecurity:(NSString *)arg1 ;
-(void)setDeauthSourceOui:(NSData *)arg1 ;
-(void)setHasSignal:(char)arg1 ;
-(char)hasSignal;
-(char)hasBssidOui;
-(char)hasSecurity;
-(void)setDeauthReason:(int)arg1 ;
-(void)setHasDeauthReason:(char)arg1 ;
-(char)hasDeauthReason;
-(char)hasDeauthSourceOui;
-(void)setHasNoise:(char)arg1 ;
-(char)hasNoise;
-(void)setTxrate:(int)arg1 ;
-(void)setHasTxrate:(char)arg1 ;
-(char)hasTxrate;
-(void)setPhymode:(unsigned)arg1 ;
-(void)setHasPhymode:(char)arg1 ;
-(char)hasPhymode;
-(NSData *)bssidOui;
-(int)deauthReason;
-(NSData *)deauthSourceOui;
-(int)noise;
-(int)txrate;
-(unsigned)phymode;
@end

