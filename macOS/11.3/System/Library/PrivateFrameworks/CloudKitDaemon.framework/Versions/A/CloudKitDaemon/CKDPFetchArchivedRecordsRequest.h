/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, CKDPAssetsToDownload, CKDPRecordZoneIdentifier;

@interface CKDPFetchArchivedRecordsRequest : PBRequest <NSCopying> {

	NSData* _archiveContinuationToken;
	CKDPAssetsToDownload* _assetsToDownload;
	unsigned _limit;
	CKDPRecordZoneIdentifier* _zoneIdentifier;
	char _newestFirst;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,readonly) char hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;              //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (nonatomic,readonly) char hasArchiveContinuationToken; 
@property (nonatomic,retain) NSData * archiveContinuationToken;                      //@synthesize archiveContinuationToken=_archiveContinuationToken - In the implementation block
@property (assign,nonatomic) char hasNewestFirst; 
@property (assign,nonatomic) char newestFirst;                                       //@synthesize newestFirst=_newestFirst - In the implementation block
@property (assign,nonatomic) char hasLimit; 
@property (assign,nonatomic) unsigned limit;                                         //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) char hasAssetsToDownload; 
@property (nonatomic,retain) CKDPAssetsToDownload * assetsToDownload;                //@synthesize assetsToDownload=_assetsToDownload - In the implementation block
+(id)options;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)limit;
-(void)setLimit:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(char)hasZoneIdentifier;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(void)setAssetsToDownload:(CKDPAssetsToDownload *)arg1 ;
-(char)hasAssetsToDownload;
-(CKDPAssetsToDownload *)assetsToDownload;
-(void)setArchiveContinuationToken:(NSData *)arg1 ;
-(char)hasArchiveContinuationToken;
-(void)setNewestFirst:(char)arg1 ;
-(void)setHasNewestFirst:(char)arg1 ;
-(char)hasNewestFirst;
-(void)setHasLimit:(char)arg1 ;
-(char)hasLimit;
-(NSData *)archiveContinuationToken;
-(char)newestFirst;
@end
