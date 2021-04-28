/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineHeroAppEngagementInstance : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _actionType;
	NSString* _suggestionId;
	int _uiPlacement;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasSuggestionId; 
@property (nonatomic,retain) NSString * suggestionId;                   //@synthesize suggestionId=_suggestionId - In the implementation block
@property (assign,nonatomic) char hasActionType; 
@property (assign,nonatomic) int actionType;                            //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic) char hasUiPlacement; 
@property (assign,nonatomic) int uiPlacement;                           //@synthesize uiPlacement=_uiPlacement - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
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
-(int)uiPlacement;
-(void)setUiPlacement:(int)arg1 ;
-(void)setActionType:(int)arg1 ;
-(int)actionType;
-(void)setHasActionType:(char)arg1 ;
-(char)hasActionType;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasUiPlacement:(char)arg1 ;
-(char)hasUiPlacement;
-(void)setSuggestionId:(NSString *)arg1 ;
-(char)hasSuggestionId;
-(NSString *)suggestionId;
@end

