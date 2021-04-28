/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Collaboration.framework/Versions/A/Collaboration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUXPCCodable.h>

@class NSString, NSUUID, NSData;

@interface CBIdentity : NSObject <CUXPCCodable> {

	int _type;
	NSString* _accountID;
	NSUUID* _bluetoothIdentifier;
	NSString* _contactID;
	NSString* _identifier;
	NSString* _idsDeviceID;
	NSData* _irkData;
	NSString* _model;
	NSString* _name;

}

@property (nonatomic,copy) NSString * accountID;                      //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSUUID * bluetoothIdentifier;              //@synthesize bluetoothIdentifier=_bluetoothIdentifier - In the implementation block
@property (nonatomic,copy) NSString * contactID;                      //@synthesize contactID=_contactID - In the implementation block
@property (nonatomic,copy) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * idsDeviceID;                    //@synthesize idsDeviceID=_idsDeviceID - In the implementation block
@property (nonatomic,copy) NSData * irkData;                          //@synthesize irkData=_irkData - In the implementation block
@property (nonatomic,copy) NSString * model;                          //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int type;                                //@synthesize type=_type - In the implementation block
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)contactID;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(NSData *)irkData;
-(void)setIrkData:(NSData *)arg1 ;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithXPCObject:(id)arg1 ;
-(NSString *)idsDeviceID;
-(void)setIdsDeviceID:(NSString *)arg1 ;
-(void)setContactID:(NSString *)arg1 ;
-(NSUUID *)bluetoothIdentifier;
-(void)setBluetoothIdentifier:(NSUUID *)arg1 ;
@end

