/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SMWelcomeController, NSString, LAContext, NSNumber;

@interface SMCreateIAUser : NSObject {

	char _iaUserCreated;
	char _iaPlistExists;
	SMWelcomeController* _parentController;
	NSString* _shortName;
	NSString* _fullName;
	LAContext* _laCtx;
	NSNumber* _uid;
	NSString* _password;

}

@property (retain) SMWelcomeController * parentController;              //@synthesize parentController=_parentController - In the implementation block
@property (assign) char iaUserCreated;                                  //@synthesize iaUserCreated=_iaUserCreated - In the implementation block
@property (assign) char iaPlistExists;                                  //@synthesize iaPlistExists=_iaPlistExists - In the implementation block
@property (retain) NSString * shortName;                                //@synthesize shortName=_shortName - In the implementation block
@property (retain) NSString * fullName;                                 //@synthesize fullName=_fullName - In the implementation block
@property (retain) LAContext * laCtx;                                   //@synthesize laCtx=_laCtx - In the implementation block
@property (retain) NSNumber * uid;                                      //@synthesize uid=_uid - In the implementation block
@property (retain) NSString * password;                                 //@synthesize password=_password - In the implementation block
-(NSString *)password;
-(NSNumber *)uid;
-(void)setUid:(NSNumber *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)fullName;
-(NSString *)shortName;
-(void)setFullName:(NSString *)arg1 ;
-(void)setParentController:(SMWelcomeController *)arg1 ;
-(SMWelcomeController *)parentController;
-(id)initWithParentController:(id)arg1 ;
-(void)setIaPlistExists:(char)arg1 ;
-(char)iaPlistExists;
-(void)setShortName:(NSString *)arg1 ;
-(void)setLaCtx:(LAContext *)arg1 ;
-(char)iaUserCreated;
-(id)getUserNameToDisplay;
-(void)setIaUserCreated:(char)arg1 ;
-(void)extractUID;
-(LAContext *)laCtx;
-(char)shouldRequestIAUserCredentials;
-(void)createIAUserWithCallbackBlock:(/*^block*/id)arg1 ;
-(void)storeIAUserCredentialsToMaUserCredentials;
@end

