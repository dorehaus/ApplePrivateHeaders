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

@interface AWDWiFiNWActivityScanActivity : PBCodable <NSCopying> {

	unsigned _assocCount;
	unsigned _assocDur;
	unsigned _otherCount;
	unsigned _otherDur;
	unsigned _pnoBSSIDCount;
	unsigned _pnoBSSIDDur;
	unsigned _pnoSSIDCount;
	unsigned _pnoSSIDDur;
	unsigned _roamCount;
	unsigned _roamDur;
	unsigned _userCount;
	unsigned _userDur;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) char hasUserCount; 
@property (assign,nonatomic) unsigned userCount;                  //@synthesize userCount=_userCount - In the implementation block
@property (assign,nonatomic) char hasUserDur; 
@property (assign,nonatomic) unsigned userDur;                    //@synthesize userDur=_userDur - In the implementation block
@property (assign,nonatomic) char hasRoamCount; 
@property (assign,nonatomic) unsigned roamCount;                  //@synthesize roamCount=_roamCount - In the implementation block
@property (assign,nonatomic) char hasRoamDur; 
@property (assign,nonatomic) unsigned roamDur;                    //@synthesize roamDur=_roamDur - In the implementation block
@property (assign,nonatomic) char hasAssocCount; 
@property (assign,nonatomic) unsigned assocCount;                 //@synthesize assocCount=_assocCount - In the implementation block
@property (assign,nonatomic) char hasAssocDur; 
@property (assign,nonatomic) unsigned assocDur;                   //@synthesize assocDur=_assocDur - In the implementation block
@property (assign,nonatomic) char hasPnoBSSIDCount; 
@property (assign,nonatomic) unsigned pnoBSSIDCount;              //@synthesize pnoBSSIDCount=_pnoBSSIDCount - In the implementation block
@property (assign,nonatomic) char hasPnoBSSIDDur; 
@property (assign,nonatomic) unsigned pnoBSSIDDur;                //@synthesize pnoBSSIDDur=_pnoBSSIDDur - In the implementation block
@property (assign,nonatomic) char hasPnoSSIDCount; 
@property (assign,nonatomic) unsigned pnoSSIDCount;               //@synthesize pnoSSIDCount=_pnoSSIDCount - In the implementation block
@property (assign,nonatomic) char hasPnoSSIDDur; 
@property (assign,nonatomic) unsigned pnoSSIDDur;                 //@synthesize pnoSSIDDur=_pnoSSIDDur - In the implementation block
@property (assign,nonatomic) char hasOtherCount; 
@property (assign,nonatomic) unsigned otherCount;                 //@synthesize otherCount=_otherCount - In the implementation block
@property (assign,nonatomic) char hasOtherDur; 
@property (assign,nonatomic) unsigned otherDur;                   //@synthesize otherDur=_otherDur - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)userCount;
-(void)setUserCount:(unsigned)arg1 ;
-(void)setRoamDur:(unsigned)arg1 ;
-(void)setHasRoamDur:(char)arg1 ;
-(char)hasRoamDur;
-(unsigned)roamDur;
-(void)setHasUserCount:(char)arg1 ;
-(char)hasUserCount;
-(void)setUserDur:(unsigned)arg1 ;
-(void)setHasUserDur:(char)arg1 ;
-(char)hasUserDur;
-(void)setRoamCount:(unsigned)arg1 ;
-(void)setHasRoamCount:(char)arg1 ;
-(char)hasRoamCount;
-(void)setAssocCount:(unsigned)arg1 ;
-(void)setHasAssocCount:(char)arg1 ;
-(char)hasAssocCount;
-(void)setAssocDur:(unsigned)arg1 ;
-(void)setHasAssocDur:(char)arg1 ;
-(char)hasAssocDur;
-(void)setPnoBSSIDCount:(unsigned)arg1 ;
-(void)setHasPnoBSSIDCount:(char)arg1 ;
-(char)hasPnoBSSIDCount;
-(void)setPnoBSSIDDur:(unsigned)arg1 ;
-(void)setHasPnoBSSIDDur:(char)arg1 ;
-(char)hasPnoBSSIDDur;
-(void)setPnoSSIDCount:(unsigned)arg1 ;
-(void)setHasPnoSSIDCount:(char)arg1 ;
-(char)hasPnoSSIDCount;
-(void)setPnoSSIDDur:(unsigned)arg1 ;
-(void)setHasPnoSSIDDur:(char)arg1 ;
-(char)hasPnoSSIDDur;
-(void)setOtherCount:(unsigned)arg1 ;
-(void)setHasOtherCount:(char)arg1 ;
-(char)hasOtherCount;
-(void)setOtherDur:(unsigned)arg1 ;
-(void)setHasOtherDur:(char)arg1 ;
-(char)hasOtherDur;
-(unsigned)userDur;
-(unsigned)roamCount;
-(unsigned)assocCount;
-(unsigned)assocDur;
-(unsigned)pnoBSSIDCount;
-(unsigned)pnoBSSIDDur;
-(unsigned)pnoSSIDCount;
-(unsigned)pnoSSIDDur;
-(unsigned)otherCount;
-(unsigned)otherDur;
@end

