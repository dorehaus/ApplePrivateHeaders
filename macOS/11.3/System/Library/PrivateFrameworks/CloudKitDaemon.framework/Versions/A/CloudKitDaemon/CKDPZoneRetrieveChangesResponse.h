/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData;

@interface CKDPZoneRetrieveChangesResponse : PBCodable <NSCopying> {

	NSMutableArray* _changedZones;
	int _status;
	NSData* _syncContinuationToken;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,retain) NSMutableArray * changedZones;                //@synthesize changedZones=_changedZones - In the implementation block
@property (nonatomic,readonly) char hasSyncContinuationToken; 
@property (nonatomic,retain) NSData * syncContinuationToken;               //@synthesize syncContinuationToken=_syncContinuationToken - In the implementation block
@property (assign,nonatomic) char hasStatus; 
@property (assign,nonatomic) int status;                                   //@synthesize status=_status - In the implementation block
+(Class)changedZonesType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)status;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasStatus:(char)arg1 ;
-(char)hasStatus;
-(void)setSyncContinuationToken:(NSData *)arg1 ;
-(char)hasSyncContinuationToken;
-(NSData *)syncContinuationToken;
-(NSMutableArray *)changedZones;
-(void)addChangedZones:(id)arg1 ;
-(unsigned long long)changedZonesCount;
-(void)clearChangedZones;
-(id)changedZonesAtIndex:(unsigned long long)arg1 ;
-(void)setChangedZones:(NSMutableArray *)arg1 ;
@end

