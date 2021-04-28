/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemMigration/SMUser_Client.h>

@class SMSystem_Client, NSArray, NSDictionary, NSString, NSData;

@interface SMWindowsUser_Client : SMUser_Client {

	char _canTransfer;
	SMSystem_Client* sourceSystem;
	NSArray* _components;
	NSDictionary* _attributes;
	NSString* _windowsSID;
	NSData* _accountPictureData;

}

@property (retain) SMSystem_Client * sourceSystem; 
@property (retain) NSArray * components;                        //@synthesize components=_components - In the implementation block
@property (readonly) NSDictionary * attributes;                 //@synthesize attributes=_attributes - In the implementation block
@property (readonly) char canTransfer;                          //@synthesize canTransfer=_canTransfer - In the implementation block
@property (readonly) NSString * windowsSID;                     //@synthesize windowsSID=_windowsSID - In the implementation block
@property (retain) NSData * accountPictureData;                 //@synthesize accountPictureData=_accountPictureData - In the implementation block
+(id)interestedDaemonKeys;
+(id)interestedDaemonKeysLimitedToMigratableUsers;
+(id)keyPathsForValuesAffectingDisplayExtraInfo;
-(NSDictionary *)attributes;
-(NSArray *)components;
-(void)setComponents:(NSArray *)arg1 ;
-(SMSystem_Client *)sourceSystem;
-(NSString *)windowsSID;
-(void)setSourceSystem:(SMSystem_Client *)arg1 ;
-(id)initWithXpcDictionaryRepresentation:(id)arg1 belongingToSystem:(id)arg2 ;
-(char)canTransfer;
-(id)displayExtraInfo;
-(char)allowOverwriteOfConflictedShortName;
-(NSData *)accountPictureData;
-(void)setAccountPictureData:(NSData *)arg1 ;
@end

