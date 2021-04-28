/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/Versions/A/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSNumber, NSString;

@interface FAFetchFamilyPhotoRequest : FAFamilyCircleRequest {

	char _localFallback;
	char _useMonogramAsLastResort;
	NSNumber* _memberDSID;
	NSString* _memberHashedDSID;
	unsigned long long _requestedSize;
	double _requiredWidth;
	double _requiredHeight;
	double _monogramDiameter;
	NSString* _fullname;
	NSString* _emailAddress;
	NSString* _phoneNumber;

}

@property (copy,readonly) NSNumber * memberDSID;                    //@synthesize memberDSID=_memberDSID - In the implementation block
@property (copy,readonly) NSString * memberHashedDSID;              //@synthesize memberHashedDSID=_memberHashedDSID - In the implementation block
@property (readonly) char localFallback;                            //@synthesize localFallback=_localFallback - In the implementation block
@property (readonly) unsigned long long requestedSize;              //@synthesize requestedSize=_requestedSize - In the implementation block
@property (assign) double requiredWidth;                            //@synthesize requiredWidth=_requiredWidth - In the implementation block
@property (assign) double requiredHeight;                           //@synthesize requiredHeight=_requiredHeight - In the implementation block
@property (assign) double monogramDiameter;                         //@synthesize monogramDiameter=_monogramDiameter - In the implementation block
@property (assign) char useMonogramAsLastResort;                    //@synthesize useMonogramAsLastResort=_useMonogramAsLastResort - In the implementation block
@property (copy) NSString * fullname;                               //@synthesize fullname=_fullname - In the implementation block
@property (copy) NSString * emailAddress;                           //@synthesize emailAddress=_emailAddress - In the implementation block
@property (copy) NSString * phoneNumber;                            //@synthesize phoneNumber=_phoneNumber - In the implementation block
-(id)init;
-(NSString *)phoneNumber;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(id)requestOptions;
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSNumber *)memberDSID;
-(id)initWithFamilyMemberDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(char)arg3 connectionProvider:(id)arg4 ;
-(id)initWithConnectionProvider:(id)arg1 ;
-(id)initWithFamilyMemberHashedDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(char)arg3 connectionProvider:(id)arg4 ;
-(double)monogramDiameter;
-(NSString *)fullname;
-(char)useMonogramAsLastResort;
-(NSString *)memberHashedDSID;
-(unsigned long long)requestedSize;
-(char)localFallback;
-(id)initWithFamilyMemberDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(char)arg3 ;
-(id)initWithFamilyMemberHashedDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(char)arg3 ;
-(double)requiredWidth;
-(void)setRequiredWidth:(double)arg1 ;
-(double)requiredHeight;
-(void)setRequiredHeight:(double)arg1 ;
-(void)setMonogramDiameter:(double)arg1 ;
-(void)setUseMonogramAsLastResort:(char)arg1 ;
-(void)setFullname:(NSString *)arg1 ;
@end

