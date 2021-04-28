/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/Versions/A/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAFamilyRequest.h>

@class NSNumber, ACAccount, NSString;

@interface FAFamilyMemberPhotoRequest : AAFamilyRequest {

	NSNumber* _familyMemberDSID;
	ACAccount* _iTunesAccount;
	NSString* _serverCacheTag;

}

@property (nonatomic,copy) NSNumber * familyMemberDSID;                                       //@synthesize familyMemberDSID=_familyMemberDSID - In the implementation block
@property (setter=setiTunesAccount:,nonatomic,retain) ACAccount * iTunesAccount;              //@synthesize iTunesAccount=_iTunesAccount - In the implementation block
@property (nonatomic,copy) NSString * serverCacheTag;                                         //@synthesize serverCacheTag=_serverCacheTag - In the implementation block
+(Class)responseClass;
-(id)urlRequest;
-(id)urlString;
-(NSNumber *)familyMemberDSID;
-(void)setFamilyMemberDSID:(NSNumber *)arg1 ;
-(ACAccount *)iTunesAccount;
-(void)setiTunesAccount:(id)arg1 ;
-(NSString *)serverCacheTag;
-(void)setServerCacheTag:(NSString *)arg1 ;
@end

