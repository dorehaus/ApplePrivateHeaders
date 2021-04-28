/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@protocol CRKClassKitCurrentUser;
@class CRKASMRosterProviderConfiguration, NSArray, NSDictionary, NSSet;

@interface CRKASMWorldBuildOperation : CATOperation {

	CRKASMRosterProviderConfiguration* _configuration;
	id<CRKClassKitCurrentUser> _classKitCurrentUser;
	NSArray* _classKitClasses;
	NSDictionary* _classKitLocationsByLocationID;
	NSSet* _manageableLocationIDs;
	NSDictionary* _classKitPersonsByClassID;
	NSDictionary* _trustedClassKitPersonsByClassID;

}

@property (nonatomic,readonly) CRKASMRosterProviderConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) id<CRKClassKitCurrentUser> classKitCurrentUser;                   //@synthesize classKitCurrentUser=_classKitCurrentUser - In the implementation block
@property (nonatomic,retain) NSArray * classKitClasses;                                        //@synthesize classKitClasses=_classKitClasses - In the implementation block
@property (nonatomic,copy) NSDictionary * classKitLocationsByLocationID;                       //@synthesize classKitLocationsByLocationID=_classKitLocationsByLocationID - In the implementation block
@property (nonatomic,copy) NSSet * manageableLocationIDs;                                      //@synthesize manageableLocationIDs=_manageableLocationIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * classKitPersonsByClassID;                            //@synthesize classKitPersonsByClassID=_classKitPersonsByClassID - In the implementation block
@property (nonatomic,copy) NSDictionary * trustedClassKitPersonsByClassID;                     //@synthesize trustedClassKitPersonsByClassID=_trustedClassKitPersonsByClassID - In the implementation block
+(id)makeErrorWithErrorsByObjectID:(id)arg1 ;
-(void)finish;
-(void)main;
-(char)isAsynchronous;
-(id)initWithConfiguration:(id)arg1 ;
-(CRKASMRosterProviderConfiguration *)configuration;
-(void)checkAccountEligibility;
-(void)housekeepKeychain;
-(void)finishWithEmptyResultObject;
-(void)buildCurrentClassKitUser;
-(void)setClassKitCurrentUser:(id<CRKClassKitCurrentUser>)arg1 ;
-(void)buildClassKitClasses;
-(void)setClassKitClasses:(NSArray *)arg1 ;
-(void)buildClassKitLocationsByLocationID;
-(NSArray *)classKitClasses;
-(void)setClassKitLocationsByLocationID:(NSDictionary *)arg1 ;
-(void)buildManageableLocationIDs;
-(id<CRKClassKitCurrentUser>)classKitCurrentUser;
-(NSDictionary *)classKitLocationsByLocationID;
-(void)setManageableLocationIDs:(NSSet *)arg1 ;
-(void)buildAllClassKitPersonsByClassID;
-(void)setTrustedClassKitPersonsByClassID:(NSDictionary *)arg1 ;
-(void)setClassKitPersonsByClassID:(NSDictionary *)arg1 ;
-(id)compileResult;
-(void)housekeepKeychainWithRoster:(id)arg1 ;
-(id)makeHousekeeperWithRoster:(id)arg1 ;
-(NSDictionary *)classKitPersonsByClassID;
-(NSDictionary *)trustedClassKitPersonsByClassID;
-(NSSet *)manageableLocationIDs;
@end

