/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Network.framework/Versions/A/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NWAWDLibnetcoreTCPKernelStats : PBCodable <NSCopying> {

	unsigned long long _numTfoBlackholed;
	unsigned long long _numTfoCookieInvalid;
	unsigned long long _numTfoCookieRcv;
	unsigned long long _numTfoCookieReq;
	unsigned long long _numTfoCookieReqRcv;
	unsigned long long _numTfoCookieSent;
	unsigned long long _numTfoFallback;
	unsigned long long _numTfoSynDataAcked;
	unsigned long long _numTfoSynDataRcv;
	unsigned long long _numTfoSynDataSent;
	unsigned long long _timestamp;
	SCD_Struct_NW6 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasNumTfoCookieReq; 
@property (assign,nonatomic) unsigned long long numTfoCookieReq;                  //@synthesize numTfoCookieReq=_numTfoCookieReq - In the implementation block
@property (assign,nonatomic) char hasNumTfoCookieRcv; 
@property (assign,nonatomic) unsigned long long numTfoCookieRcv;                  //@synthesize numTfoCookieRcv=_numTfoCookieRcv - In the implementation block
@property (assign,nonatomic) char hasNumTfoFallback; 
@property (assign,nonatomic) unsigned long long numTfoFallback;                   //@synthesize numTfoFallback=_numTfoFallback - In the implementation block
@property (assign,nonatomic) char hasNumTfoSynDataSent; 
@property (assign,nonatomic) unsigned long long numTfoSynDataSent;                //@synthesize numTfoSynDataSent=_numTfoSynDataSent - In the implementation block
@property (assign,nonatomic) char hasNumTfoSynDataAcked; 
@property (assign,nonatomic) unsigned long long numTfoSynDataAcked;               //@synthesize numTfoSynDataAcked=_numTfoSynDataAcked - In the implementation block
@property (assign,nonatomic) char hasNumTfoSynDataRcv; 
@property (assign,nonatomic) unsigned long long numTfoSynDataRcv;                 //@synthesize numTfoSynDataRcv=_numTfoSynDataRcv - In the implementation block
@property (assign,nonatomic) char hasNumTfoCookieReqRcv; 
@property (assign,nonatomic) unsigned long long numTfoCookieReqRcv;               //@synthesize numTfoCookieReqRcv=_numTfoCookieReqRcv - In the implementation block
@property (assign,nonatomic) char hasNumTfoCookieSent; 
@property (assign,nonatomic) unsigned long long numTfoCookieSent;                 //@synthesize numTfoCookieSent=_numTfoCookieSent - In the implementation block
@property (assign,nonatomic) char hasNumTfoCookieInvalid; 
@property (assign,nonatomic) unsigned long long numTfoCookieInvalid;              //@synthesize numTfoCookieInvalid=_numTfoCookieInvalid - In the implementation block
@property (assign,nonatomic) char hasNumTfoBlackholed; 
@property (assign,nonatomic) unsigned long long numTfoBlackholed;                 //@synthesize numTfoBlackholed=_numTfoBlackholed - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setNumTfoCookieReq:(unsigned long long)arg1 ;
-(void)setHasNumTfoCookieReq:(char)arg1 ;
-(char)hasNumTfoCookieReq;
-(void)setNumTfoCookieRcv:(unsigned long long)arg1 ;
-(void)setHasNumTfoCookieRcv:(char)arg1 ;
-(char)hasNumTfoCookieRcv;
-(void)setNumTfoFallback:(unsigned long long)arg1 ;
-(void)setHasNumTfoFallback:(char)arg1 ;
-(char)hasNumTfoFallback;
-(void)setNumTfoSynDataSent:(unsigned long long)arg1 ;
-(void)setHasNumTfoSynDataSent:(char)arg1 ;
-(char)hasNumTfoSynDataSent;
-(void)setNumTfoSynDataAcked:(unsigned long long)arg1 ;
-(void)setHasNumTfoSynDataAcked:(char)arg1 ;
-(char)hasNumTfoSynDataAcked;
-(void)setNumTfoSynDataRcv:(unsigned long long)arg1 ;
-(void)setHasNumTfoSynDataRcv:(char)arg1 ;
-(char)hasNumTfoSynDataRcv;
-(void)setNumTfoCookieReqRcv:(unsigned long long)arg1 ;
-(void)setHasNumTfoCookieReqRcv:(char)arg1 ;
-(char)hasNumTfoCookieReqRcv;
-(void)setNumTfoCookieSent:(unsigned long long)arg1 ;
-(void)setHasNumTfoCookieSent:(char)arg1 ;
-(char)hasNumTfoCookieSent;
-(void)setNumTfoCookieInvalid:(unsigned long long)arg1 ;
-(void)setHasNumTfoCookieInvalid:(char)arg1 ;
-(char)hasNumTfoCookieInvalid;
-(void)setNumTfoBlackholed:(unsigned long long)arg1 ;
-(void)setHasNumTfoBlackholed:(char)arg1 ;
-(char)hasNumTfoBlackholed;
-(unsigned long long)numTfoCookieReq;
-(unsigned long long)numTfoCookieRcv;
-(unsigned long long)numTfoFallback;
-(unsigned long long)numTfoSynDataSent;
-(unsigned long long)numTfoSynDataAcked;
-(unsigned long long)numTfoSynDataRcv;
-(unsigned long long)numTfoCookieReqRcv;
-(unsigned long long)numTfoCookieSent;
-(unsigned long long)numTfoCookieInvalid;
-(unsigned long long)numTfoBlackholed;
@end

