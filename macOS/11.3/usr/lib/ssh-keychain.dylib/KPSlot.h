/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/ssh-keychain.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSObject, NSString, LAContext;

@interface KPSlot : NSObject {

	char _unlocked;
	NSMutableArray* _certificates;
	NSObject* _keychain;
	NSString* _name;
	NSString* _ID;
	LAContext* _authenticationContext;

}

@property (retain) NSMutableArray * certificates;                  //@synthesize certificates=_certificates - In the implementation block
@property (retain) NSObject * keychain;                            //@synthesize keychain=_keychain - In the implementation block
@property (retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (retain) NSString * ID;                                  //@synthesize ID=_ID - In the implementation block
@property (assign) char unlocked;                                  //@synthesize unlocked=_unlocked - In the implementation block
@property (retain) LAContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSMutableArray *)certificates;
-(NSObject *)keychain;
-(NSString *)ID;
-(void)setCertificates:(NSMutableArray *)arg1 ;
-(LAContext *)authenticationContext;
-(void)setAuthenticationContext:(LAContext *)arg1 ;
-(void)setID:(NSString *)arg1 ;
-(char)unlocked;
-(void)setUnlocked:(char)arg1 ;
-(void)setKeychain:(NSObject *)arg1 ;
@end

