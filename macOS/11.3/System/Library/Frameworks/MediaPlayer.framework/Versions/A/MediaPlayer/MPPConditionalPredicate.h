/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPPMediaPredicate;

@interface MPPConditionalPredicate : PBCodable <NSCopying> {

	MPPMediaPredicate* _conditionalPredicate;
	MPPMediaPredicate* _elsePredicate;
	MPPMediaPredicate* _thenPredicate;

}

@property (nonatomic,readonly) char hasConditionalPredicate; 
@property (nonatomic,retain) MPPMediaPredicate * conditionalPredicate;              //@synthesize conditionalPredicate=_conditionalPredicate - In the implementation block
@property (nonatomic,readonly) char hasThenPredicate; 
@property (nonatomic,retain) MPPMediaPredicate * thenPredicate;                     //@synthesize thenPredicate=_thenPredicate - In the implementation block
@property (nonatomic,readonly) char hasElsePredicate; 
@property (nonatomic,retain) MPPMediaPredicate * elsePredicate;                     //@synthesize elsePredicate=_elsePredicate - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(MPPMediaPredicate *)thenPredicate;
-(MPPMediaPredicate *)elsePredicate;
-(char)hasConditionalPredicate;
-(char)hasThenPredicate;
-(char)hasElsePredicate;
-(MPPMediaPredicate *)conditionalPredicate;
-(void)setConditionalPredicate:(MPPMediaPredicate *)arg1 ;
-(void)setThenPredicate:(MPPMediaPredicate *)arg1 ;
-(void)setElsePredicate:(MPPMediaPredicate *)arg1 ;
@end

