/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Versions/A/Frameworks/RemoteManagementModel.framework/Versions/A/RemoteManagementModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, NSNumber, NSArray;

@interface RMModelStatusManagementDeclarations_Declaration : RMModelPayloadBase {

	NSString* _statusIdentifier;
	NSString* _statusServerToken;
	NSNumber* _statusActive;
	NSString* _statusValid;
	NSArray* _statusReasons;

}

@property (nonatomic,copy) NSString * statusIdentifier;               //@synthesize statusIdentifier=_statusIdentifier - In the implementation block
@property (nonatomic,copy) NSString * statusServerToken;              //@synthesize statusServerToken=_statusServerToken - In the implementation block
@property (nonatomic,copy) NSNumber * statusActive;                   //@synthesize statusActive=_statusActive - In the implementation block
@property (nonatomic,copy) NSString * statusValid;                    //@synthesize statusValid=_statusValid - In the implementation block
@property (nonatomic,copy) NSArray * statusReasons;                   //@synthesize statusReasons=_statusReasons - In the implementation block
+(id)allowedStatusKeys;
+(id)buildWithIdentifier:(id)arg1 serverToken:(id)arg2 active:(id)arg3 valid:(id)arg4 reasons:(id)arg5 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 serverToken:(id)arg2 active:(id)arg3 valid:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStatusIdentifier:(NSString *)arg1 ;
-(NSString *)statusIdentifier;
-(id)serializeWithType:(short)arg1 ;
-(char)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setStatusServerToken:(NSString *)arg1 ;
-(void)setStatusActive:(NSNumber *)arg1 ;
-(void)setStatusValid:(NSString *)arg1 ;
-(void)setStatusReasons:(NSArray *)arg1 ;
-(NSString *)statusServerToken;
-(NSNumber *)statusActive;
-(NSString *)statusValid;
-(NSArray *)statusReasons;
@end

