/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, IMHandle;

@interface IMSPIHandle : NSObject {

	NSString* _address;
	NSString* _countryCode;
	char _isMe;
	IMHandle* _imHandle;
	char _haveFetchedIMHandle;

}

@property (readonly) NSString * address;                   //@synthesize address=_address - In the implementation block
@property (readonly) char isMe;                            //@synthesize isMe=_isMe - In the implementation block
@property (readonly) char isBusiness; 
@property (readonly) NSString * businessName; 
@property (readonly) NSString * countryCode;               //@synthesize countryCode=_countryCode - In the implementation block
@property (readonly) NSString * displayName; 
@property (readonly) NSString * cnContactID; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)handle;
-(NSString *)countryCode;
-(NSString *)displayName;
-(NSString *)address;
-(char)isMe;
-(NSString *)businessName;
-(char)isBusiness;
-(id)initWithAddress:(id)arg1 countryCode:(id)arg2 isMe:(char)arg3 ;
-(NSString *)cnContactID;
@end
