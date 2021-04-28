/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface VCCaptionsTranscriptionBlob : PBCodable <NSCopying> {

	NSMutableArray* _segments;
	unsigned _updateNumber;
	unsigned _utteranceNumber;
	char _isFinal;
	char _isLocal;
	SCD_Struct_VC96 _has;

}

@property (assign,nonatomic) unsigned utteranceNumber;               //@synthesize utteranceNumber=_utteranceNumber - In the implementation block
@property (assign,nonatomic) unsigned updateNumber;                  //@synthesize updateNumber=_updateNumber - In the implementation block
@property (assign,nonatomic) char hasIsLocal; 
@property (assign,nonatomic) char isLocal;                           //@synthesize isLocal=_isLocal - In the implementation block
@property (assign,nonatomic) char hasIsFinal; 
@property (assign,nonatomic) char isFinal;                           //@synthesize isFinal=_isFinal - In the implementation block
@property (nonatomic,retain) NSMutableArray * segments;              //@synthesize segments=_segments - In the implementation block
+(Class)segmentsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(NSMutableArray *)segments;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)isLocal;
-(void)setSegments:(NSMutableArray *)arg1 ;
-(char)isFinal;
-(void)setIsFinal:(char)arg1 ;
-(void)setIsLocal:(char)arg1 ;
-(void)addSegments:(id)arg1 ;
-(unsigned long long)segmentsCount;
-(void)clearSegments;
-(id)segmentsAtIndex:(unsigned long long)arg1 ;
-(void)setHasIsLocal:(char)arg1 ;
-(char)hasIsLocal;
-(void)setHasIsFinal:(char)arg1 ;
-(char)hasIsFinal;
-(unsigned)utteranceNumber;
-(void)setUtteranceNumber:(unsigned)arg1 ;
-(unsigned)updateNumber;
-(void)setUpdateNumber:(unsigned)arg1 ;
@end

