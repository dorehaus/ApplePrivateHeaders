/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Versions/A/Engram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ENAccountIdentity, NSArray, NSData;

@interface _ENGroupInfo : NSObject <NSSecureCoding> {

	ENAccountIdentity* _accountIdentity;
	NSArray* _participants;
	NSData* _sharedApplicationData;

}

@property (retain) ENAccountIdentity * accountIdentity;                   //@synthesize accountIdentity=_accountIdentity - In the implementation block
@property (nonatomic,retain) NSArray * participants;                      //@synthesize participants=_participants - In the implementation block
@property (nonatomic,retain) NSData * sharedApplicationData;              //@synthesize sharedApplicationData=_sharedApplicationData - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)participants;
-(void)setParticipants:(NSArray *)arg1 ;
-(ENAccountIdentity *)accountIdentity;
-(void)setAccountIdentity:(ENAccountIdentity *)arg1 ;
-(id)initWithAccountIdentity:(id)arg1 paricipants:(id)arg2 sharedApplicationData:(id)arg3 ;
-(NSData *)sharedApplicationData;
-(void)setSharedApplicationData:(NSData *)arg1 ;
@end

