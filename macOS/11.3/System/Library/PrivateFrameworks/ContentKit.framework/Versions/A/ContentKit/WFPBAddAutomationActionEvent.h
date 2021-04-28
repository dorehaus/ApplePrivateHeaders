/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBAddAutomationActionEvent : PBCodable <NSCopying> {

	NSString* _actionIdentifier;
	unsigned _actionIndex;
	NSString* _key;
	NSString* _shortcutIdentifier;
	SCD_Struct_WF8 _has;

}

@property (nonatomic,readonly) char hasKey; 
@property (nonatomic,retain) NSString * key;                             //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) char hasShortcutIdentifier; 
@property (nonatomic,retain) NSString * shortcutIdentifier;              //@synthesize shortcutIdentifier=_shortcutIdentifier - In the implementation block
@property (assign,nonatomic) char hasActionIndex; 
@property (assign,nonatomic) unsigned actionIndex;                       //@synthesize actionIndex=_actionIndex - In the implementation block
@property (nonatomic,readonly) char hasActionIdentifier; 
@property (nonatomic,retain) NSString * actionIdentifier;                //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)actionIdentifier;
-(char)hasKey;
-(void)setActionIdentifier:(NSString *)arg1 ;
-(NSString *)shortcutIdentifier;
-(void)setShortcutIdentifier:(NSString *)arg1 ;
-(char)hasActionIdentifier;
-(char)hasShortcutIdentifier;
-(void)setActionIndex:(unsigned)arg1 ;
-(void)setHasActionIndex:(char)arg1 ;
-(char)hasActionIndex;
-(unsigned)actionIndex;
@end
