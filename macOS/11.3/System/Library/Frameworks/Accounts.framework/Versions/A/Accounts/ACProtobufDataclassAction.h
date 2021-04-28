/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Accounts.framework/Versions/A/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface ACProtobufDataclassAction : PBCodable <NSCopying> {

	NSMutableArray* _affectedContainers;
	int _type;
	NSString* _undoAlertMessage;
	NSString* _undoAlertTitle;
	char _destructive;

}

@property (assign,nonatomic) int type;                                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char destructive;                                 //@synthesize destructive=_destructive - In the implementation block
@property (nonatomic,retain) NSMutableArray * affectedContainers;              //@synthesize affectedContainers=_affectedContainers - In the implementation block
@property (nonatomic,readonly) char hasUndoAlertTitle; 
@property (nonatomic,retain) NSString * undoAlertTitle;                        //@synthesize undoAlertTitle=_undoAlertTitle - In the implementation block
@property (nonatomic,readonly) char hasUndoAlertMessage; 
@property (nonatomic,retain) NSString * undoAlertMessage;                      //@synthesize undoAlertMessage=_undoAlertMessage - In the implementation block
+(Class)affectedContainersType;
-(void)addAffectedContainers:(id)arg1 ;
-(unsigned long long)affectedContainersCount;
-(void)clearAffectedContainers;
-(id)affectedContainersAtIndex:(unsigned long long)arg1 ;
-(void)setUndoAlertTitle:(NSString *)arg1 ;
-(void)setUndoAlertMessage:(NSString *)arg1 ;
-(char)hasUndoAlertTitle;
-(char)hasUndoAlertMessage;
-(NSMutableArray *)affectedContainers;
-(void)setAffectedContainers:(NSMutableArray *)arg1 ;
-(NSString *)undoAlertTitle;
-(NSString *)undoAlertMessage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)dictionaryRepresentation;
-(void)setDestructive:(char)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)destructive;
@end
