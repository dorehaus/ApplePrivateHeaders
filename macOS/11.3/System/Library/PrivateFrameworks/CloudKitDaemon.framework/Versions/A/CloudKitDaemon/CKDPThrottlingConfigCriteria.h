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

@class NSString;

@interface CKDPThrottlingConfigCriteria : PBCodable <NSCopying> {

	NSString* _bundleID;
	int _containerEnvironment;
	NSString* _containerName;
	int _databaseType;
	NSString* _invernessFunctionName;
	NSString* _invernessServiceName;
	NSString* _operationGroupName;
	int _operationType;
	NSString* _zoneName;
	SCD_Struct_CK16 _has;

}

@property (nonatomic,readonly) char hasContainerName; 
@property (nonatomic,retain) NSString * containerName;                      //@synthesize containerName=_containerName - In the implementation block
@property (assign,nonatomic) char hasContainerEnvironment; 
@property (assign,nonatomic) int containerEnvironment;                      //@synthesize containerEnvironment=_containerEnvironment - In the implementation block
@property (assign,nonatomic) char hasOperationType; 
@property (assign,nonatomic) int operationType;                             //@synthesize operationType=_operationType - In the implementation block
@property (assign,nonatomic) char hasDatabaseType; 
@property (assign,nonatomic) int databaseType;                              //@synthesize databaseType=_databaseType - In the implementation block
@property (nonatomic,readonly) char hasZoneName; 
@property (nonatomic,retain) NSString * zoneName;                           //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,readonly) char hasOperationGroupName; 
@property (nonatomic,retain) NSString * operationGroupName;                 //@synthesize operationGroupName=_operationGroupName - In the implementation block
@property (nonatomic,readonly) char hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) char hasInvernessServiceName; 
@property (nonatomic,retain) NSString * invernessServiceName;               //@synthesize invernessServiceName=_invernessServiceName - In the implementation block
@property (nonatomic,readonly) char hasInvernessFunctionName; 
@property (nonatomic,retain) NSString * invernessFunctionName;              //@synthesize invernessFunctionName=_invernessFunctionName - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setBundleID:(NSString *)arg1 ;
-(int)operationType;
-(NSString *)bundleID;
-(void)setOperationType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)containerName;
-(void)setContainerName:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)zoneName;
-(void)setZoneName:(NSString *)arg1 ;
-(NSString *)operationGroupName;
-(char)hasZoneName;
-(void)setOperationGroupName:(NSString *)arg1 ;
-(char)hasOperationType;
-(char)hasOperationGroupName;
-(char)hasBundleID;
-(void)setHasOperationType:(char)arg1 ;
-(id)operationTypeAsString:(int)arg1 ;
-(int)StringAsOperationType:(id)arg1 ;
-(int)containerEnvironment;
-(void)setContainerEnvironment:(int)arg1 ;
-(void)setHasContainerEnvironment:(char)arg1 ;
-(char)hasContainerEnvironment;
-(id)containerEnvironmentAsString:(int)arg1 ;
-(int)StringAsContainerEnvironment:(id)arg1 ;
-(char)hasContainerName;
-(void)setDatabaseType:(int)arg1 ;
-(char)hasDatabaseType;
-(int)databaseType;
-(char)hasInvernessServiceName;
-(NSString *)invernessServiceName;
-(char)hasInvernessFunctionName;
-(NSString *)invernessFunctionName;
-(void)setInvernessServiceName:(NSString *)arg1 ;
-(void)setInvernessFunctionName:(NSString *)arg1 ;
-(void)setHasDatabaseType:(char)arg1 ;
-(id)databaseTypeAsString:(int)arg1 ;
-(int)StringAsDatabaseType:(id)arg1 ;
@end

