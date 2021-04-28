/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/Versions/A/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface TVRMSAudioRoutesDidUpdateMessage : PBCodable <NSCopying> {

	NSMutableArray* _audioRoutes;
	int _sessionIdentifier;
	SCD_Struct_TV4 _has;

}

@property (assign,nonatomic) char hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                     //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * audioRoutes;              //@synthesize audioRoutes=_audioRoutes - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)sessionIdentifier;
-(void)setSessionIdentifier:(int)arg1 ;
-(char)hasSessionIdentifier;
-(void)setHasSessionIdentifier:(char)arg1 ;
-(void)addAudioRoutes:(id)arg1 ;
-(unsigned long long)audioRoutesCount;
-(void)clearAudioRoutes;
-(id)audioRoutesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)audioRoutes;
-(void)setAudioRoutes:(NSMutableArray *)arg1 ;
@end
